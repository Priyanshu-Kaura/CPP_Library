#include <iostream>
#include <queue>

using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(45);
    pq.push(21);
    pq.push(50);
    pq.push(5);
    cout << pq.top() << endl; // 1
    pq.pop();                 // 1 removed
    cout << pq.top() << endl; //  5
}

