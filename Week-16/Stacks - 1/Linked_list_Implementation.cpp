#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node()
    {
    }

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Stack
{
public:
    Node *head;
    int size;
    Stack()
    {
        head = NULL;
        size = 0;
    }

    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is EMPTY !!";
            return;
        }
        head = head->next;
        size--;
    }

    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is EMPTY !!";
            return -1;
        }
        return head->val;
    }

    int Size()
    {
        return size;
    }

    void display_REV()
    {
        Node *temp = head;
        for (int i = 0; i < size; i++)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void print(Node *temp)
    {
        if (temp == NULL)
            return;
        print(temp->next);
        cout << temp->val << " ";
    }

    void display()
    {
        Node *temp = head;
        print(temp);
        cout << endl;
    }
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();

    cout << "Size : " << st.Size() << endl;

    st.pop();
    st.display();

    cout << "Size after POP : " << st.Size() << endl;

    cout << st.top()<<endl;

cout<<"Reverse Print : ";
    st.display_REV();
}