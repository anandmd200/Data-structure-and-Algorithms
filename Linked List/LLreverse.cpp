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

Node* reverseNode(Node* &head){

    Node* previous = NULL;
    Node* current = head;
    Node* next; 

    while(current != NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    head = previous;
    return head;
}

int main(){

    Node * head = NULL;
    insertAthead(head,10);
    insertAthead(head,20);
    insertAthead(head,30);

    displayNode(head);
    Node* newHead = reverseNode(head);
    cout<<"reverse Order: "<<endl;
    displayNode(newHead);
    return 0;

}