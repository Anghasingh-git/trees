#include<iostream>
using namespace std;
 struct node{
 public:
 int data;
 node *left,*right;
   node(int key){
    data=key;
    left=nullptr;
    right=nullptr;
   }
 };
 void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
 }
 int main(){
   node*firstnode=new node(2);
    node*secondnode=new node(3);
    node*thirdnode=new node(4);
    node*fourthnode=new node(5);
    firstnode->left=secondnode;
    firstnode->right=thirdnode;
    secondnode->left=fourthnode;
    cout<<"inorder";
    inorder(firstnode);
    cout<<endl;
    return 0;
 }