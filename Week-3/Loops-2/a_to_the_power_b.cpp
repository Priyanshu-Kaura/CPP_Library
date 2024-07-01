#include <iostream>
using namespace std;
int main()
{
    int b, a;
    cout << "Enter base : ";
    cin >> a;
    cout << "Enter power : ";
    cin >> b;
    int pow = 1;
    if (a == 0 && b == 0)
    {
        cout << "Not defined";
    }
    else if (b >= 0)
    {
        for (int i = 1; i <= b; i++)
        {
            pow *= a;
        }
        cout << pow;
    }
    else
    {
        for (int i = 1; i <= -b; i++)
        {
            pow *= a;
        }
        cout << (float)1 / pow;
    }
}