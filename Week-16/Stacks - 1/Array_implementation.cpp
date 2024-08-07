#include <iostream>
using namespace std;
class Stack
{
public:
    int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx;
    Stack()
    {
        idx = -1;
    }

    void push(int val)
    {
        if (idx == n)
        {
            cout << "Stack is FULL !!";
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop()
    {
        if (idx == -1)
        {
            cout << "Stack is EMPTY !!";
            return;
        }
        idx--;
    }

    int top()
    {
        if (idx == -1)
        {
            cout << "Stack is EMPTY !!";
            return -1;
        }
        return arr[idx];
    }

    int size()
    {
        return idx + 1;
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
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
    cout << endl;
    cout << "Size : " << st.size() << endl;

    st.pop();
    cout << "Size after POP : " << st.size() << endl;

    cout << st.top();
}