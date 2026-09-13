#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

class CircularLinkList{
    private:
        Node* head;
        Node* tail;
    public:
        CircularLinkList(){
            head = nullptr;
            tail = nullptr;
        }
        //
        ~CircularLinkList(){}


        void insertFront(int value){
            Node* newNode = new Node(value);
            if(head==nullptr){
                head = newNode;
                tail = newNode;
                // tail link to head
                tail->next = head;
                return;
            }
            newNode->next=head;
            head = newNode;
            tail->next = head;
        }

        void insertEnd(int value){
             Node* newNode = new Node(value);

            // Empty list
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
                tail->next = head;  // Point back to head
                return;
            }
        
            // Add after the current tail
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }

        void display2(){
            if(head==nullptr) return;
            // first print the head
            Node* temp = head;
            cout<<temp->data<<" -> ";
            temp = temp->next;


            while(temp != head){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"(Linked to head)";
        }

        void deleteFront() {
           if (head == nullptr) {
               cout << "List is empty! Cannot delete." << endl;
                return;
            }
        
            if (head == tail) {
                delete head;
                head = nullptr;
                tail = nullptr;
                return;
            }
        
            Node* temp = head;
            head = head->next;
            tail->next = head; 
            delete temp;
        }

        void deleteEnd(){
            if (head == nullptr) {
                // cout << "List is empty!" << endl;
                return;
            }
        
            if (head == tail) {
                delete head;
                head = nullptr;
                tail = nullptr;
                return;
            }
        
            Node* temp = head;
        
            while (temp->next != tail) {
                temp = temp->next;
            }
        
            delete tail;
            tail = temp;
            tail->next = head; 
        }

        void display(){
          if(head==nullptr){
            cout<<"List is empty! Nothing to show"<<endl;
            return;
          }
          
          Node* temp = head;
          do{
            cout<<temp->data<<" -> ";
            temp = temp->next;
          }while(temp !=head);
          cout<<"(Linked to Head)"<<endl;
        }
        
};



int main(){
    system("clear");

    CircularLinkList list;
    list.insertFront(10);
    list.insertFront(20);
    list.insertFront(30);
    list.insertEnd(40);
    list.deleteFront();
    list.deleteEnd();
    list.display();
    list.display2();

    cout<<R"(
                                       ███             ███             ███             ███    
                                     ███░            ███░            ███░            ███░     
                                   ███░            ███░            ███░            ███░       
                                 ███░            ███░            ███░            ███░         
                               ███░            ███░            ███░            ███░           
                              ██░            ███░            ███░            ███░            █
                              ░            ███░            ███░            ███░            ███
                                          ░░░             ░░░             ░░░             ░░░ 
                                   ███         _   ███ _   _       ███             ███        
                                 ███░    /\   | |███░ | | | |    ███░            ███░         
                               ███░     /  \  | |__   | |_| |__███___   ___ _  █_█_ __        
                              ██░      / /\ \█| '_ \  | __| '_ \░/ _ \ / _ \ |█| | '_ \      █
                              ░       / ____ \| | | | | |_| |█| | (_) |  __/ |_| | | | |   ███
                                     /_/ ███\_\_| |_|  \__|_| |_|\___/ \___|\__,_|_| |_| ███░ 
                                       ███░            ███░            ███░            ███░   
                                      ░░░             ░░░             ░░░             ░░░     
                               ███             ███             ███             ███            
                              ██░            ███░            ███░            ███░            █
                              ░            ███░            ███░            ███░            ███
                                         ███░            ███░            ███░            ███░ 
                                       ███░            ███░            ███░            ███░   
                                     ███░            ███░            ███░            ███░     
                                   ███░            ███░            ███░            ███░       
                                  ░░░             ░░░             ░░░             ░░░         
    )";

    return 0;
}