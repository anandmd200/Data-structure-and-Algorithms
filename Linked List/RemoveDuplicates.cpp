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

void insertAtend(Node* &head, int data){
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

Node* removeDuplicates(Node * &head){

    Node* current = head;
    while(current != NULL && current->next != NULL){
        
        if(current->data == current->next->data){
            Node* next_next = current->next->next;
            Node* nodeToDelete = current->next;
            delete(nodeToDelete);
            current->next = next_next;
        }else{
           current = current->next;
        }
    }
    return head;
}

Node* removeDuplicatesSorted(Node * head){

    if(head == NULL){
        return NULL;
    }
    Node * iter1 = head;
    while(iter1 != NULL){
        Node *iter2 = iter1->next;
        while (iter2 != NULL)
        {
           if(iter1->data == iter2->data){
                iter2->next = iter2->next->next;
           }else{
                iter2 = iter2->next;
           }
        }
        
        iter1 = iter1->next;
    }
    return head;
}

int main(){

    Node * head = NULL;
    insertAtend(head,50);
    insertAtend(head,10);
    insertAtend(head,20);
    insertAtend(head,30);
    insertAtend(head,30);
    insertAtend(head,40);
    insertAtend(head,50);

    displayNode(head);
    Node * newHead = removeDuplicates(head);
    cout<<endl;
    displayNode(newHead);
    cout<<endl<<"remove duplicates from sorted: "<<endl;
    Node* headSort = removeDuplicatesSorted(head);
    displayNode(headSort);
    return 0;

}