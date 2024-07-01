#include <iostream>
#include <unordered_map>
using namespace std;

void Find(unordered_map<string, int> m, string target)
{
    if (m.find(target) != m.end()) // target exists
        cout << target << " Exists" << endl;

    else // Target is Not there
        cout << target << " Not Exists" << endl;
}

void display(unordered_map<string, int> m)
{
    for (auto p : m)
    {
        cout << p.first << " - " << p.second << endl;
    }
}

int main()
{
    unordered_map<string, int> m;
    m["Priynashu"] = 76;
    m["Arpit"] = 11;
    m["Abhijit"] = 3;
    m["Sachin"] = 92;
    display(m);
    cout << "SIZE : " << m.size() << endl;

    cout << endl;

    m.erase("Abhijit");
    display(m);
    cout << "SIZE : " << m.size() << endl;

    cout << endl;

    Find(m, "Arpit");
}