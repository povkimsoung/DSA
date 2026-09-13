#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next; // pointer = address of Node
    // construtor 
    Node(int val){
        data = val;
        next = nullptr;
    }
};

class SinglyLinkedlist{
    private:
        Node* head;
    public:
    SinglyLinkedlist(){
        head = nullptr;
    }

    // destructor : deallocate the memory space 
// to free memory

~SinglyLinkedlist(){
    // if list not empty, we deallocate one by
    while(head != nullptr){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
};

