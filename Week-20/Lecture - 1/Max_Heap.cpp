#include <iostream>
#include <queue>

using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(1);
    pq.push(45);
    pq.push(21);
    pq.push(50);
    pq.push(5);
    cout << pq.top()<<endl;  // 50
    pq.pop(); // 50 removed
    cout << pq.top()<<endl; // 45
}