#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void displayNode(Node * head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    } 
}

void insertAthead(Node* &head, int data){
    Node * temp = new Node(data);
   
   if(head == NULL){
        head = temp;
        return;
   }

    Node * temp1 = head;
   while(temp1->next != NULL){
        temp1 = temp1->next;
   }
   temp1->next = temp;
}

//method1 
void Sort012(Node* head){
    
    int countZero = 0;
    int countOne= 0;
    int countTwo = 0;
    Node* temp = head;

    while(temp!=NULL){

        if(temp->data == 0){
            countZero ++;
        }else if(temp->data == 1){
            countOne++;
        }else if(temp->data == 2){
            countTwo ++;
        }
        temp = temp -> next;
    }
    temp = head;
    while(temp!= NULL){
        if(countZero != 0){
            temp->data = 0;
            countZero--;
        }else if(countOne != 0){
            temp->data = 1;
            countOne--;
        }else if(countTwo!= 0){
            temp->data = 2;
            countTwo--;
        } 
        temp = temp->next;
    }
}

//method 2 if data replacement not allowed

void insertAtTail(Node * temp, Node* &tail){
    tail->next = temp;
    tail = temp;
}

void Sort0s1s2s( Node * head){

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead; 
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node * temp = head;

    //spliting in 3 seperate list

    while(temp!=NULL){
        
        if(temp->data == 0){
            insertAtTail(temp, zeroTail);
        }
        if(temp->data == 1){
           insertAtTail(temp, oneTail);
        }
        if(temp->data == 2){
            insertAtTail(temp, twoTail);
        }
        temp = temp->next;
    }

    //merging the su lists 

    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }else{
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;
    delete(oneHead);
    delete(twoHead);
    delete(zeroHead);
}


int main(){

    Node * head = NULL;
    // insertAthead(head,2);
    insertAthead(head,1);
    insertAthead(head,0);
    insertAthead(head,1);
    // insertAthead(head,2);
    insertAthead(head,0);

    displayNode(head);
    cout<<endl;
    Sort012(head);
    displayNode(head);
    cout<<endl;
    Sort0s1s2s(head);
    displayNode(head);
    cout<<endl;
    return 0;

}