#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void display(queue<int> &q)
{
    for (int i = 0; i < q.size(); i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverse(queue<int> &q)
{
    stack<int> st;
    // empty the queue into stack
    while (q.size())
    {
        int x = q.front();
        q.pop();
        st.push(x);
    }

    // Now empty the Stack into Queue
    while (st.size())
    {
        int x = st.top();
        st.pop();
        q.push(x);
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);
}