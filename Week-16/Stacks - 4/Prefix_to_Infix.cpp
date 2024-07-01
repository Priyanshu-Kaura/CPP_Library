#include <iostream>
#include <stack>
using namespace std;

string solve(string val_1, string val_2, char ch)
{
   string s = "";
   s += val_1;
   s.push_back(ch);
   s += val_2;

   return s;
}

int main()
{
    string s = "-/*+79483";
    // We need to make one stacks , values
    stack<string> val;
    for (int i = s.length()-1; i >=0; i--)
    {
        // check s[i] is a digit(0-9) or not
        int ascii = (int)(s[i]);
        if (ascii >= 48 && ascii <= 57)
        { // digit
            val.push(to_string(s[i] - 48));
        }
        else
        { // s[i] it is -> + , - , * , /
            string val_1 = val.top();
            val.pop();
            string val_2 = val.top();
            val.pop();
            string ans = solve(val_1, val_2, s[i]);
            val.push(ans);
        }
    }
    cout << "ANS : " << val.top() << endl;
    cout << "Check : " << (7 + 9) * 4 / 8 - 3;
}