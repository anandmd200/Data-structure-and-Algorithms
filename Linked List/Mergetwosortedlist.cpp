#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void displayNode(Node *head)
{   
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

void insertNode(Node *&head, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        return;
    }

    Node *temp1 = head;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
}

Node* solve(Node* head1, Node* head2){

    if(head1->next = NULL){
        head1->next = head2;
        return head1;
    }

    Node* curr1 = head1;
    Node* next1 = head1->next;

    Node* curr2 = head2;
    Node* next2 = head2->next;

    while(next1 != NULL){
        if(curr2 ->data >= curr1->data && curr2->data <= next1->data){
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            next1 = next1->next;
            curr2 = next2;
        }else{
            if(next1 !=NULL){
                curr1 = next1;
                next1 =  next1->next;
            }else{
                curr1->next = curr2;
                return curr1;
            }
        }
    }
    return curr1;
}

Node * MergeSortedList(Node* head1, Node* head2){

    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    if(head1->data < head2->data){
         return solve(head1, head2);
    }else{
        return solve(head2, head1);
    }
}

int main()
{

    Node *head1 = NULL;
    Node *head2 = NULL;

    insertNode(head1, 10);
    insertNode(head1, 20);
    insertNode(head1, 30);
    insertNode(head1, 40);
    insertNode(head1, 50);
    displayNode(head1);

    // insertNode(head2, 15);
    // insertNode(head2, 25);
    // insertNode(head2, 35);
    // insertNode(head2, 45);
    // insertNode(head2, 55);
    // displayNode(head2);

    Node* mergeHead = MergeSortedList(head1,head2);
    displayNode(mergeHead);
    return 0;
}