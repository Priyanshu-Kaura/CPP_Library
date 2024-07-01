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
    string s = "2+6*4/8-3";
    // We need to make two stacks , 1 for vals , 1 for operators
    stack<int> val;
    stack<int> op;

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
            if ((op.size() == 0) || (priority(s[i]) > priority(op.top()))) op.push(s[i]);
            else
            { // priority(s[i]) <= priority(op.top())
                while ((op.size() > 0) && (priority(s[i]) <= priority(op.top())))
                {
                    char ch = op.top();
                    op.pop();
                    int val_2 = val.top();
                    val.pop();
                    int val_1 = val.top();
                    val.pop();
                    int ans = solve(val_1, val_2, ch);
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
        int val_2 = val.top();
        val.pop();
        int val_1 = val.top();
        val.pop();
        int ans = solve(val_1, val_2, ch);
        val.push(ans);
    }
    cout<<"ANS : "<<val.top()<<endl;
    cout<<"CHECK : "<<2+6*4/8-3;
}