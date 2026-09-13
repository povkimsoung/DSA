#include<iostream>
using namespace std;

struct Node {
    int data;
    // pointer for linked, point to another node 
    Node * next;

    Node(int val){
        data = val;
        // pointer not pointing to any address 
        next = nullptr;
    }
};

class SingLyLinkedList {
    private:
    Node* head;
    public:
    // Constructor : auto called when we create obj
    SingLyLinkedList(){
        head = nullptr;
    }
    // Destructor : auto called when obj is destroyed
    ~SingLyLinkedList(){
        cout<<"Onject is destroyed! "<<endl;
    }
    
    void insertFront(int value){
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // display 
    void displayAll(){
        Node* temp = head;

        while(temp!=nullptr){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL";
    }

    void insertBack(int value){
    Node* newNode = new Node(value);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newNode;
}
    
};



int main(){
    system("clear");

    SingLyLinkedList list;
    // list.insertFront(10);
    // list.insertFront(50);
    // list.displayAll();
    list.insertBack(10);
    list.insertBack(20);
    list.insertBack(30);

    return 0;
}