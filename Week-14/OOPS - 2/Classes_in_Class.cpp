#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
}
class player{
    private:
    int score;
    int health;
    int age;
    bool alive;
    Gun gun;

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
    Gun getgun(){
        return gun;
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
    void setgun(Gun gun){
        this->gun = gun;
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
    p.setage(34);
    p.sethealth(100);
    p.setisAlive(true);

    player h;
    h.setscore(150);
    h.setage(30);
    h.sethealth(50);
    h.setisAlive(true);

    player* pk = new player;   // run time , dynamic allocation
    pk->setscore(120);
    cout<<pk->getscore()<<endl;

    Gun akm;
    akm.setammo(40);
    akm.setscope(2);
    akm.setdamage(100);

    akm.getammo();
    akm.getscope();
    akm.getdamage();
}