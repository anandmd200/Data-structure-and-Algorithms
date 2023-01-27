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

Node* reverseKnode(Node* &head, int k){

    Node* previous = NULL;
    Node* current = head;
    Node* nextptr; 

    int count = 0;
    while(current != NULL && count<k){
        nextptr = current->next;
        current->next = previous;
        previous = current;
        current = nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next = reverseKnode(nextptr, k);
    }
    return previous;

}

int main(){

    Node * head = NULL;
    insertAthead(head,10);
    insertAthead(head,20);
    insertAthead(head,30);
    insertAthead(head,40);
    insertAthead(head,50);
    insertAthead(head,60);

    displayNode(head);
    Node* newHead = reverseKnode(head, 4);
    cout<<endl<<"reverse in K group: "<<endl;
    displayNode(newHead);
    return 0;

}