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
int countone(node*root){
    if(root==NULL){
        return 0;
    }
    if((root->left!=NULL&&root->right==NULL)||(root->left==NULL&&root->right!=NULL)){
        return 1;
    }
    return 1+countone(root->left)+countone(root->right);
}
int main(){
    node*firstnode=new node(2);
    node*secondnode=new node(3);
    node*thirdnode=new node(4);
    node*fourthnode=new node(5);
    firstnode->left=secondnode;
    firstnode->right=thirdnode;
    secondnode->left=fourthnode;
    cout<<"one child"<<countone(firstnode)<<endl;
}