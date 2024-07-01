#include <iostream>
#include <vector>
using namespace std;

class Queue
{
public:
    int f;
    int b;
    vector<int> arr;

    Queue(int val)
    {
        f = 0;
        b = 0;
        vector<int> v(val);
        arr = v;
    }

    void push(int val)
    {
        if (b == arr.size())
        {
            cout << "Queue is FULL !!" << endl;
            return;
        }
        arr[b] = val;
        b++;
    }

    void pop()
    {
        if (b - f == 0)
        {
            cout << "Queue is EMPTY !!" << endl;
            return;
        }
        f++;
    }

    int front()
    {
        if (b - f == 0)
        {
            cout << "Queue is EMPTY !!" << endl;
            return -1;
        }
        return arr[f];
    }

    int back()
    {
        if (b - f == 0)
        {
            cout << "Queue is EMPTY !!" << endl;
            return -1;
        }
        return arr[b - 1];
    }

    int size()
    {
        return b - f;
    }

    bool empty()
    {
        if (f - b == 0)
            return true;
        else
            return false;
    }

    void display()
    {
        for (int i = f; i < b; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q(6);
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
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;
}