#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    while(head!=NULL){
        cout<<head -> val<<" ";
        head = head -> next;
    }
    cout<<endl;
}

void deleteMIDDLE(Node* head){
    Node* slow = head;
    Node* fast = head;
   // Node* prev = NULL;
    while(fast->next->next!=NULL && fast->next->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = slow->next->next;
    
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    display(a);
    deleteMIDDLE(a);
    display(a);
}