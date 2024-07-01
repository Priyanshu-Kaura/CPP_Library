#include <iostream>
#include <stack>
using namespace std;

int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}

string solve(string val_1, string val_2, char ch)
{
    string s = "";
    s.push_back(ch);
    s += val_1;
    s += val_2;
    return s;
}
int main()
{
    string s = "(7+9)*4/8-3";
    // We need to make two stacks , 1 for vals , 1 for operators
    stack<string> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++)
    {
        // check s[i] is a digit(0-9) or not
        int ascii = (int)(s[i]);
        if (ascii >= 48 && ascii <= 57)
        { // digit
            val.push(to_string(s[i] - 48));
        }
        else
        { // s[i] it is -> + , - , * , /
            if ((op.size() == 0))
                op.push(s[i]);
            else if (s[i] == '(')
                op.push(s[i]);
            else if (op.top() == '(')
                op.push(s[i]);

            else if (s[i] == ')')
            {
                while (op.top() != '(')
                {
                    // work
                    char ch = op.top();
                    op.pop();
                    string val_2 = val.top();
                    val.pop();
                    string val_1 = val.top();
                    val.pop();
                    string ans = solve(val_1, val_2, ch);
                    val.push(ans);
                }
                op.pop(); // opening bracket nu v uda ta
            }
            else if (priority(s[i]) > priority(op.top()))
                op.push(s[i]);
            else
            { // priority(s[i]) <= priority(op.top())
                while ((op.size() > 0) && (priority(s[i]) <= priority(op.top())))
                { // work
                    char ch = op.top();
                    op.pop();
                    string val_2 = val.top();
                    val.pop();
                    string val_1 = val.top();
                    val.pop();
                    string ans = solve(val_1, val_2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    // the Operator stack can have values
    // So make it Empty
    while (op.size() > 0)
    {
        // work
        char ch = op.top();
        op.pop();
        string val_2 = val.top();
        val.pop();
        string val_1 = val.top();
        val.pop();
        string ans = solve(val_1, val_2, ch);
        val.push(ans);
    }
    cout << "ANS : " << val.top() << endl;
}