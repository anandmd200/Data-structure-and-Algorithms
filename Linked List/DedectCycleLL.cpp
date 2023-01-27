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

void makeCycle(Node* &head){

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = head->next;
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


//dedection of loop using map time & space complexity = o(n)
bool dedectLoop(Node * head){

    map<Node*, bool>mp;
    Node* temp = head;

    if(head == NULL){
        return false;
    }
    while(temp!=NULL){

        if(mp[temp] == true){
            cout<<temp->data<<endl;
            return true;
        }
        mp[temp] = true;
        temp = temp->next;
    }

    return false;
}

//flyods algorithm 
Node* isCyclePresent(Node* head){

    Node* fast = head;
    Node* slow = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast->next != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            // cout<<"Cycle is present"<<endl;
            return slow;
        }
    }

    return fast;
}

//Get begning node of cycle;

Node* getStsrtingNodeCycle(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* intersectionPoint = isCyclePresent(head);

    Node* slow = head;
    Node* fast = intersectionPoint;

    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

void removeCycle(Node* head){

    Node* startingCycleNode = getStsrtingNodeCycle(head);
    Node* iter = startingCycleNode;
    while(iter->next != startingCycleNode){
        iter = iter->next;
    }

    iter->next = NULL;
}

int main(){

    Node * head = NULL;
    insertAtend(head,10);
    insertAtend(head,20);
    insertAtend(head,30);
    insertAtend(head,40);
    insertAtend(head,50);
    insertAtend(head,60);
    makeCycle(head);
    // displayNode(head);
    // cout<<dedectLoop(head)<<endl; // o/p = 1;
    cout<<isCyclePresent(head)->data<<endl;
    cout<<"staring node of cycle: "<<getStsrtingNodeCycle(head)->data<<endl;
    removeCycle(head);
    displayNode(head);

    return 0;
}