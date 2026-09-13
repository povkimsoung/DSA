#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
        left=right=nullptr;
    }
};

class BST{
    private: 
        Node* root;
        Node* insert(Node* node, int value){
            if(node==nullptr) return new Node(value);
            else if(value > node->data){
                node->right = insert(node->right, value);
            } else{
                node->left = insert(node->left, value);
            }
        }

        // root -> left -> right
        void preorder(Node* node){
            if(node==nullptr) return;
            cout<<node->data<<" ";
            preorder(node->left);
            preorder(node->right);
        }

        void postorder(Node* node){
            if(root==nullptr) return ;
            postorder(root->left);
            postorder(root->right);
            cout<< root->data<<" ";
        }

    public: 
        BST(){
            root=nullptr;
        }
        void displayPreorder(){
            cout<<"+ Print using preorder: "<<endl;
            preorder(root);
            cout<<endl;
        }
        void displayPostorder(){

        }
        void insert(int value){
            root=insert(root,value);
        }
        
};

int main(){
    system("clear");

    BST root;
        root.insert(10);
        root.insert(20);
        root.insert(11);
        root.insert(8);
        root.insert(12);
        root.insert(7);
        root.insert(23);
        root.insert(6);
        root.insert(15);
        root.displayPreorder();
        
        


    return 0;
}