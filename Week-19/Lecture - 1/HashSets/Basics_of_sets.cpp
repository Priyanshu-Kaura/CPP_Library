#include <iostream>
#include <unordered_set>
using namespace std;

void Find(unordered_set<int> s, int target)
{
    if (s.find(target) != s.end()) // target exists
        cout << target << " Exists" << endl;

    else // Target is Not there
        cout << target << " Not Exists" << endl;
}

void display(unordered_set<int> s)
{
    for (auto ele : s)
    {
        cout << ele << " ";
    }
    cout << endl;
}
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    display(s);

    cout << "SIZE : " << s.size() << endl;

    s.erase(4);
    display(s);
    cout << "SIZE : " << s.size() << endl;

    Find(s, 3);
    Find(s, 4);
}