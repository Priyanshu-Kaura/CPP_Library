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

class DLL
{
public:
    Node *head;
    Node *tail;
    int size;

    DLL()
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
            temp->prev = tail;
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
            head->prev = temp;
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

            if(idx < size/2){
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            }
            else{
                Node* temp = tail;
                for (int i = 0; i < size-idx - 1; i++)
            {
                temp = temp->prev;
            }
            t->prev = temp ->prev;
            t->next = temp;
            temp->prev = t;
            t->prev->next = t;
            }
            size++;
        }
    }

    void deleteAtHead()
    {
        if (size == 0)
            cout << "Linked List is EMPTY";
        if (size > 0)
        {
            head = head->next;
            head->prev = NULL;
            size--;
        }
    }

    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "Linked List is EMPTY";
            return;
        }

        else if (size == 1)
        {
            deleteAtHead();
            return;
        }

        Node* temp = tail->prev;
        temp->next = NULL;
        temp = tail;
    }

    void deleteAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
            cout << "INVALID INDEX";
        else if (idx == 0)
            deleteAtHead();
        else if (idx == size - 1)
            deleteAtTail();
        else
        {
            if(idx < size/2){
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            }
            else{
                 Node* temp = tail;
                for (int i = 0; i < size-idx-2; i++)
            {
                temp = temp->prev;
            }
            temp->prev = temp->prev->prev;
            temp->prev->next = temp; 
            }
        }
        size--;
    }

    int getElement(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "INVALID INDEX";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            if(idx<size/2){
            Node *temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
            }
            else{
                Node* temp = tail;
                for (int i = 0; i < size-idx-1; i++)
            {
                temp = temp->prev;
            }
            return temp->val;
            }
        }
    }
};

int main()
{
    DLL dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6);
    dll.display();
    cout << endl;
    dll.insertAtBegin(66);
    dll.display();
    cout << endl;
    dll.insertAtIdx(5, 33);
    dll.display();
    cout << endl;
    dll.deleteAtHead();
    dll.display();
    cout << endl;
    dll.deleteAtTail();
    dll.display();
    cout << endl;
    dll.deleteAtIdx(4);
    dll.display();
    cout << endl;
    cout<<dll.getElement(3)<<endl;
    dll.display();
    cout << endl;
}