#include<iostream>
using namespace std;

struct Node{
    int data; // float , int , long , double
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

class SinglyLinkedList{
    private:
        Node* head;
        Node* tail;
    public:
        SinglyLinkedList(){
            head = nullptr;
            tail = nullptr;
        }

        ~SinglyLinkedList(){
            while(head!=nullptr){
                Node* temp = head;
                head = head->next;
                delete temp;
                cout<<"Free memory Location "<<endl;
            }
        }

        void insertEnd(int value){

            
            Node* newNode = new Node(value);
            if(head==nullptr){
                head=tail=newNode;
                return;
            }
            // link the tail node with new node
            tail->next = newNode;
            tail = newNode;
        }

        void insertFront(int value){
            Node* newNode = new Node(value);
            if(head==nullptr){
                tail = newNode;
                head = newNode;
                return;
            }
            newNode->next=head;
            head = newNode;
        }

        void deleteFront(){
            if(head == nullptr){
                cout<<"List is empty❌";
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
            if(head == nullptr){
                tail = nullptr;
            }

        }

        void deleteEnd(){
            if(head==nullptr){
                cout<<"List is empty";
                return;
            }
            if(head==tail){
                delete head;
                tail = head =nullptr;
                return;
            }
            Node* temp = head;
            while(temp->next != tail)
                temp = temp->next;
                
            delete tail;
            temp->next = nullptr;
            tail = temp;
        }

        bool search(int value){
            Node* temp = head;
            while(temp!=nullptr){
                if(temp->data == value) return true;
                temp = temp->next;
            }
            return false;
        }

        void display(){
            Node* temp = head;
            while(temp!=nullptr){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }
        
};


int main(){
    system("clear");

    SinglyLinkedList list;
    list.insertFront(10);
    list.insertFront(20);
    list.insertFront(30);
    list.insertFront(40);
    list.insertEnd(50);
    list.deleteFront();
    // list.deleteEnd();
    list.display();
    return 0;
}