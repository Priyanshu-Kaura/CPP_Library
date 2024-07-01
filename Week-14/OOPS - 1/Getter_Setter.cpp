#include<iostream>
using namespace std;
class player{
    private:
    int score;
    int health;

    public: 
    void setscore(int s){
        score = s;
    }
    void sethealth(int h){
        health = h;
    }
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
};

int main(){
    player p; // p is OBJECT here
    p.setscore(100);
    p.sethealth(70);
    cout<<"SCORE : "<<p.getscore()<<endl;
    cout<<"HEALTH : "<<p.gethealth()<<endl;   
}