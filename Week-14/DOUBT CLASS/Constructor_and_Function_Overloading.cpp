#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    float percent;

    Student()
    {
    }

    Student(string n, int r, float p)
    {
        name = n;
        rno = r;
        percent = p;
    }

    Student(int r, string n, float p)
    {
        name = n;
        rno = r;
        percent = p;
    }

    Student(int r, float p, string n)
    {
        name = n;
        rno = r;
        percent = p;
    }
};

int main()
{
    Student s;
    s.name = "PRIYANSHU KAURA";
    s.rno = 76;
    s.percent = 92.8;
    cout << "Name : " << s.name << endl
         << "Roll no. : " << s.rno << endl
         << "Percentage : " << s.percent << endl
         << endl;

    Student x("ARPIT", 76, 92.6);
    cout << "Name : " << x.name << endl
         << "Roll no. : " << x.rno << endl
         << "Percentage : " << x.percent << endl
         << endl;

    Student y(76, "ABHIJIT", 92.6);
    cout << "Name : " << y.name << endl
         << "Roll no. : " << y.rno << endl
         << "Percentage : " << y.percent << endl
         << endl;
}