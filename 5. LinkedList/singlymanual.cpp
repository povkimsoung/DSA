#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    system("clear");

    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // add the value for each node
    first->data = 10;
    second->data = 20;
    third->data = 30;

    // link the node together
    first->next = second;
    second->next = third;
    third->next = nullptr;

    Node* temp = first;
    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }

    return 0;
}