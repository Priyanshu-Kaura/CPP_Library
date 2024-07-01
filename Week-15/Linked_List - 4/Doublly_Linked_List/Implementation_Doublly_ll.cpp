#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void size(Node* head){
    Node* temp = head;
    int size = 0;
    while(temp){
        temp = temp->next;
        size++;
    }
    cout<<"SIZE : "<<size;
}

void displayRec(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val<<" ";
    displayRec(head->next);
}

void displayRevRec(Node *head)
{
    if (head == NULL)
        return;
    displayRevRec(head->next);
    cout << head->val<<" ";
}

void displayRev(Node *tail)
{
    while (tail)
    {
        cout << tail->val<<" ";
        tail = tail->prev;
    }
}


int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    display(a);
    cout << endl;
    displayRec(a);
    cout << endl;
    displayRevRec(a);
    cout << endl;
    displayRev(e);
    cout << endl;
    insertAtHead(a , 222);
    display(a);
    cout << endl;
}