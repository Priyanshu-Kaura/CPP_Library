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

class Queue
{
public:
    Node *head;
    Node *tail;
    int size;

    Queue()
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
        cout << endl;
    }

    void push(int val)
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

    void pop()
    {
        if (size == 0)
            cout << "Queue is EMPTY";
        if (size > 0)
        {
            Node *temp = head;
            head = head->next;
            size--;
            delete (temp);
        }
    }

    int front()
    {
        if (size == 0)
        {
            cout << "Queue is Empty!!" << endl;
            return -1;
        }
        return head->val;
    }

    int back()
    {
        if (size == 0)
        {
            cout << "Queue is Empty!!" << endl;
            return -1;
        }
        return tail->val;
    }

    int Size()
    {
        return size;
    }

    bool empty()
    {
        if (size == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    q.push(70);
    q.display();
    q.pop();
    q.pop();
    q.display();
    q.front();
    q.back();
    cout << q.Size() << endl;
    cout << q.empty() << endl;
}
