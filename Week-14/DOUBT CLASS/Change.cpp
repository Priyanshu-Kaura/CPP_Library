#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rno;
    float percent;
};

void change(student *s)
{
    s->name = "RAGHAV";
    s->rno = 45;
}
int main()
{
    student s;
    s.name = "PRIYANSHU KAURA";
    s.rno = 76;
    s.percent = 92.8;
    cout << "Name : " << s.name << endl
         << "Roll no. : " << s.rno << endl
         << "Percentage : " << s.percent << endl
         << endl;

    change(&s);

    cout << "Name : " << s.name << endl
         << "Roll no. : " << s.rno << endl
         << "Percentage : " << s.percent << endl
         << endl;
}