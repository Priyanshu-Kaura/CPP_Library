#include<iostream>
using namespace std;
class player{
    private:
    int score;
    int health;
    int age;
    bool alive;

    public:
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    bool getisAlive(){
        return alive;
    }
    void setscore(int score){
        this->score = score;
    }
    void sethealth(int health){
        this->health = health;
    }
    void setage(int age){
        this->age = age;
    }
    void setisAlive(bool age){
        this->alive = alive;
    }
};
int addscore(player a , player b){
    return a.getscore() + b.getscore();
}
player max_score_player(player a , player b){
    if(a.getscore()>b.getscore()) return a;
    else return b;
}
int main(){
    player p;  // Object crestion , statically    // compile time, static allocation
    p.setscore(200);
    cout<<p.getscore()<<endl;

    player* pk = new player;   // run time , dynamic allocation
    pk->setscore(120);
    cout<<pk->getscore()<<endl;

}