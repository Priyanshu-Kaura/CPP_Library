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

    int getElement(int idx){
        if(idx<0 || idx>size){
            cout<<"Invalid INDEX";
            return -1;
        }
        else if(idx==0) return head -> val;
        else if(idx==size) return tail -> val;
        else{
            Node* temp = head;
            for(int i=0 ; i<idx ; i++){
                temp = temp -> next;
            }
           return temp -> val;
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
    
    int idx;
    cout<<"Enter the Index we want value of which : ";
    cin>>idx;
    cout<<ll.getElement(idx);    
}


