#include <iostream>
#include <stack>
using namespace std;

int solve(int val_1, int val_2, char ch)
{
    if (ch == '+')
        return val_1 + val_2;
    if (ch == '-')
        return val_1 - val_2;
    if (ch == '*')
        return val_1 * val_2;
    if (ch == '/')
        return val_1 / val_2;
}

int main()
{
    string s = "79+4*8/3-";
    // We need to make one stacks , values
    stack<int> val;
    for (int i = 0; i < s.length(); i++)
    {
        // check s[i] is a digit(0-9) or not
        int ascii = (int)(s[i]);
        if (ascii >= 48 && ascii <= 57)
        { // digit
            val.push(s[i] - 48);
        }
        else
        { // s[i] it is -> + , - , * , /
            int val_2 = val.top();
            val.pop();
            int val_1 = val.top();
            val.pop();
            int ans = solve(val_1, val_2, s[i]);
            val.push(ans);
        }
    }
    cout << "ANS : " << val.top() << endl;
    cout << "Check : " << (7 + 9) * 4 / 8 - 3;
}