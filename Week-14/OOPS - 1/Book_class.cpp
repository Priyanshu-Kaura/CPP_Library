#include<iostream>
using namespace std;
class Book{
    public:
    string name;
    int price;
    int pages;

    int count_books(int prizz){
        if(price<prizz) return 1;
        else return 0;
    }

    bool isBookPresent(string title){
        if(name==title) return true;
        else return false;
    }
};

int main(){
    Book b;  // b is object here
    b.name = "HARRYPOTTER";
    b.price = 1000;
    b.pages = 500;

    cout<<b.count_books(800)<<endl;
    cout<<b.isBookPresent("HARRYPOTTER");
}