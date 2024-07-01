#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this -> val = val;
        this -> next = NULL;
    }
};

class Linkedlist{   //User defined Data Structure
    public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail -> next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insert_At_idx(int idx , int val){
        if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        else if(idx > 0 && idx < size){
            Node* temp = head;
            Node* t = new Node(val);
            for(int i=0 ; i<idx-1 ; i++){
                temp = temp -> next;
            }
            t -> next = temp -> next;
            temp -> next = t;
            size++;
        }
        else{
            if(idx<0 || idx>ll.size) cout<<"INVALID INDEX";
        }
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp -> val<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.display();
    cout<<"SIZE : "<<ll.size<<endl;

    int idx;
    cout<<"Enter Position where we want to add element  : ";
    cin>>idx;
    
    int x;
    cout<<"Enter element we want to INSERT at any idx : ";
    cin>>x;
    ll.insert_At_idx(idx , x);
    ll.display();
    cout<<"SIZE : "<<ll.size;
}


