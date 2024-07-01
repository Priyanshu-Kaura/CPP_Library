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

class Linkedlist
{ // User defined Data Structure
public:
    Node *head;
    Node *tail;
    int size;
    Linkedlist()
    {
        head = tail = NULL;
        size = 0;
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

    void insertAtHead(int val)
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

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.display();
    int n;
    cout << "Enter element we want to INSERT : ";
    cin >> n;
    ll.insertAtHead(n);
    ll.display();
    cout << "SIZE : " << ll.size;
}
