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

// class BinarySearchTree{
//     private: 
//         Node* root;
//     public:
//         BinarySearchTree(){
//             root==nullptr;
//         };
//         void insert(int value)
// };

Node* insert(Node* root, int value){
    if(root == nullptr){
        return new Node(value);
    }

    if(value < root->data){
        root->left = insert(root->left, value);
    }
    else if(value > root->data){
        root->right = insert(root->right, value);
    }

    return root;
}

void preorder(Node* root){
    if(root==nullptr) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

Node* findMin(Node* root){
    while (root->left!=nullptr){
        root = root->left;
    }
    return root;
}

Node* findMax(Node* root) {
    if (root == nullptr) {
        return nullptr;
    }
    while (root->right != nullptr) {
        root = root->right;
    }
    return root;
}

Node* search(Node* root, int value){
    if(root==nullptr) return nullptr;
    if(root->data==value) return root;
    if(value > root->data){
        return search(root->right, value);
    }else return search(root->left, value);
}

int main(){
    system("clear");

    Node* root = nullptr;
    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,4);
    root = insert(root,3);

    root = insert(root,20);
    root = insert(root,11);
    root = insert(root,12);
    
    cout<<"Display all value(preorder): "<<endl;
    preorder(root);

    Node* minNode = findMin(root);
    cout<<"\nMinimum Value is: "
        <<minNode->data<<endl;

    Node* maxNode = findMax(root);

    if (maxNode != nullptr) {
        cout << "\nMaximum value is: "
             << maxNode->data << endl;
    } else {
        cout << "\nThe tree is empty." << endl;
    }
    cout<<endl;
    int item = 4;
    Node* result = search(root,item);
    if(result==nullptr){
        cout<<item<<" Not found"<<endl;
    }else{
        cout<<"Item found"<<result->data<<endl;
    }

    return 0;
}
