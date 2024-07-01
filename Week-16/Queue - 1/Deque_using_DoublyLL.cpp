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

class Deque
{
public:
    Node *head;
    Node *tail;
    int size;

    Deque()
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

    void push_Back(int val)
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

    void push_front(int val)
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

    void pop_Front()
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

    void pop_Back()
    {
        if (size == 0)
        {
            cout << "Linked List is EMPTY";
            return;
        }

        else if (size == 1)
        {
            pop_Front();
            return;
        }

        Node *temp = tail->prev;
        temp->next = NULL;
        delete tail;
        tail = temp;
        size--;
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
    Deque dq;
    dq.push_Back(10);
    dq.push_Back(20);
    dq.push_Back(30);
    dq.push_Back(40);
    dq.push_Back(50);
    dq.display();
    dq.pop_Back();
    dq.display();
    dq.pop_Front();
    dq.display();
    dq.push_front(50);
    dq.display();
    cout << dq.front() << endl;
    cout << dq.back() << endl;
}