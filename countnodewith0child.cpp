#include<iostream>
using namespace std;
struct node{
 int data;
 node*left,*right;
 node(int key){
    data=key;
    left=nullptr;
    right=nullptr;
 }
};
 int countzero(node*root){
    if(root==NULL){
        return 0;
    }
    if (root->left == nullptr && root->right == nullptr) {
        return 1;
    }
    return 1+countzero(root->left)+countzero(root->right);
 }
 int main(){
    node*firstnode=new node(2);
    node*secondnode=new node(3);
    node*thirdnode=new node(4);
    node*fourthnode=new node(5);
    firstnode->left=secondnode;
    firstnode->right=thirdnode;
    secondnode->left=fourthnode;
    cout<<"0 child  "<<countzero(firstnode)<<endl;
    return 0;
 }