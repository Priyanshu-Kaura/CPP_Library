#include <iostream>
#include <stack>
using namespace std;
void print_REV(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    cout << st.top() << " ";
    st.pop();
    print_REV(st);
    st.push(x);
}

void print(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    print(st);
    cout << x << " ";
    st.push(x);
}

void push_At_Bottom(stack<int> &st, int k)
{
    if (st.size() == 0)
    {
        st.push(k);
        return;
    }
    int x = st.top();
    st.pop();
    push_At_Bottom(st, k);
    st.push(x);
}

void push_At_idx(stack<int> &st, int idx, int k)
{
    if (st.size() == idx)
    {
        st.push(k);
        return;
    }
    int x = st.top();
    st.pop();
    push_At_idx(st, idx, k);
    st.push(x);
}

void reverse(stack<int> &st)
{
    if (st.size() == 1)
        return;
    int x = st.top();
    st.pop();
    reverse(st);
    push_At_Bottom(st, x);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Print reversing an stack : ";
    print_REV(st);
    cout << endl;

    cout << "Print an stack : ";
    print(st);
    cout << endl;

    cout << "Print an stack by pushing an element at bottom : ";
    push_At_Bottom(st, 111);
    print(st);
    cout << endl;

    cout << "Print  an stack by pushing an element at any idx : ";
    push_At_idx(st, 2, 111);
    print(st);
    cout << endl;

    cout << "Reversing a stack : ";
    reverse(st);
    print(st);
}