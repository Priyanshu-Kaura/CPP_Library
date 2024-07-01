#include <iostream>
using namespace std;
int maze(int sr, int sc , int er , int ec)
{
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right_ways = maze(sr , sc+1 , er , ec);
    int down_ways = maze(sr+1 , sc , er , ec);
    return right_ways + down_ways;
}

int maze2(int er , int ec)
{
    if(er<1 || ec<1) return 0;
    if(er==1 && ec==1) return 1;
    int right_ways = maze2(er , ec-1);
    int down_ways = maze2(er-1 , ec);
    return right_ways + down_ways;
}

void print_path(int er , int ec , string s)
{
    if(er<1 || ec<1) return;
    if(er==1 && ec==1){
        cout<<s<<endl;
    }
    print_path(er , ec-1 , s+'R');
    print_path(er-1 , ec , s+'D');
}

int main()
{
    cout<<"No. of ways to reach destination (Meth-1) : "<<maze(1,1,4,4)<<endl;
    cout<<"No. of ways to reach destination (Meth-2) : "<<maze2(4,4)<<endl;
    print_path(4,4,"");
}