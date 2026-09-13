#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
        left=right=nullptr;
    }
};

void inorder(Node* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

void postorder(Node* root){
    if(root==nullptr) return ;
    postorder(root->left);
    postorder(root->right);
    cout<< root->data<<" ";

}

void preorder(Node* root){
    if(root==nullptr) return;
    cout<< root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    system("clear");
    
    Node* root = new Node(10);
    // left side
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);


    // right side 
    root->right = new Node(30);
    root->left->right = new Node(60);
    root->right->right = new Node(70);

    cout<<"Here is the root: ";
    inorder(root);

    return 0;
}