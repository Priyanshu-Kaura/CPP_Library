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

    void deleteAtTail(){
        if(size==0) cout<<"List is Empty";
        Node* temp = head;
        while(temp -> next != tail){
            temp = temp -> next;
        }    
        temp -> next = NULL;
        tail = temp;
        size--;    
    }

    void DeleteAtIdx(int idx){
        if(size==0) cout<<"List is Empty";
        else if(idx<0 || idx>size) cout<<"Invalid Index";
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=0 ; i<idx ; i++){
                temp = temp -> next;
            }
            temp -> next = temp -> next -> next;
        }
        size--;
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
    cout<<"Enter the Index which we want to delete : ";
    cin>>idx;
    ll.DeleteAtIdx(idx);
    ll.display();
}