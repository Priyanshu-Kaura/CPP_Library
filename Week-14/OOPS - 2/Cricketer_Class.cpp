#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int age;
    int tmatches;
    int avgruns;
};
int main(){
    cricketer virat;
    virat.name = "VIRAT";
    virat.age = 34;
    virat.tmatches = 30;
    virat.avgruns = 200;

    cricketer dhoni;
    dhoni.name = "DHONI";
    dhoni.age = 40;
    dhoni.tmatches = 50;
    dhoni.avgruns = 350;

    cricketer cricketers[2] = {virat , dhoni};
    for(int i=0 ; i<2 ; i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].tmatches<<endl;
        cout<<cricketers[i].avgruns<<endl;
    } 
}
