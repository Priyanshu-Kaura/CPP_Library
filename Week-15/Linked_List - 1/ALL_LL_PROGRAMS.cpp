#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void size(Node *head)
{
    Node *temp = head;
    int s = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        s++;
    }
    cout << "SIZE : " << s;
}

void displayRec(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
        return;
    cout << temp->val << " ";
    displayRec(temp->next);
}

void rev_display(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
        return;
    displayRec(temp->next);
    cout << temp->val << " ";
}

class Linkedlist
{
public:
    Node *head;
    Node *tail;
    int size;

    Linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtBegin(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val)
    {
        if (idx == 0)
            insertAtBegin(val);
        else if (idx == size)
            insertAtEnd(val);
        else if (idx < 0 || idx > size)
            cout << "Invalid Idx";
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getElement(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "INVALID INDEX";
            return-1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            Node* temp = head;
            for(int i=0 ; i<=idx-1 ; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size==0) cout<<"Linked List is EMPTY";
        if(size>0){
            head = head->next;
            size--;
        }
    }

    void deleteAtTail(){
        if(size==0) cout<<"Linked List is EMPTY";
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size) cout<<"INVALID INDEX";
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=0 ; i<idx-1 ; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }
        size--;
    }
};
int main()
{
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.insertAtEnd(60);
    ll.insertAtEnd(70);
    ll.insertAtEnd(80);
    ll.display();
    cout << endl;
    ll.insertAtBegin(100);
    ll.display();
    cout << endl;
    ll.insertAtIdx(3, 200);
    ll.display();
    cout << endl;
    cout<<ll.getElement(3)<<endl;
    ll.deleteAtHead();
    ll.deleteAtHead();
    ll.display();
    cout << endl;
    ll.deleteAtTail();
    ll.deleteAtTail();
    ll.display();
    cout<<endl;
    ll.deleteAtIdx(3);
    ll.display();
    cout<<endl;
    // Node *a = new Node(20);
    // Node *b = new Node(10);
    // Node *c = new Node(30);
    // Node *d = new Node(40);

    // a->next = b;
    // b->next = c;
    // c->next = d;

    // cout << "Linked list : ";
    // display(a);

    // cout << endl;

    // size(a);

    // cout << endl;

    // cout << "Linked list by RECURSION : ";
    // displayRec(a);

    // cout << endl;

    // cout << "Reversing Linked list by RECURSION : ";
    // rev_display(a);

    // cout << endl;
}
