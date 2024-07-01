#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rno;
    float percent;
};

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

    student y = {"ARPIT", 11, 93.4};
    cout << "Name : " << y.name << endl
         << "Roll no. : " << y.rno << endl
         << "Percentage : " << y.percent;
}