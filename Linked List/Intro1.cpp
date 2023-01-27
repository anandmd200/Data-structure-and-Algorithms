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

void traverseHead(Node * &head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    } 
}

void traverseTail(Node * tail){
    while (tail!=NULL)
    {
        cout<<tail->data<<"->";
        tail = tail->next;
    } 
}

void insertatHead(Node* &head, int data){

    Node* temp = new Node(data);
    temp->next = head;
    head = temp;


}

void insertAttail(Node* &tail, int data){
    Node * temp = new Node(data);
   
   if(tail == NULL){
        tail = temp;
        return;
   }

    Node * temp1 = tail;
   while(temp1->next != NULL){
        temp1 = temp1->next;
   }
   temp1->next = temp;
}

int main(){

    Node * head = NULL;
 
    insertatHead(head , 23);
    insertatHead(head, 34);
    insertatHead(head, 44);

    // Node* node1 = new Node(10);
    // Node* node2 = new Node(20);

    Node * tail = NULL;
    insertAttail(tail,10);
    insertAttail(tail,20);
    insertAttail(tail,30);

    // node1->next = node2;
    // cout<<node1->data<<"->";
    // cout<<node1->next->data<<endl;
    // cout<<node1->next->next<<endl;

    traverseHead(head);
    cout<<endl;
    traverseTail(tail);
   

    return 0;

}