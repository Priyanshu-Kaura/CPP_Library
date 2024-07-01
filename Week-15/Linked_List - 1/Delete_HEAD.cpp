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
class Linkedlist{
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

    void deleteAtHead(){
        if(size==0) cout<<"List is Empty";
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            head = head -> next;
            size--;
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
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtHead();
    ll.display();
}