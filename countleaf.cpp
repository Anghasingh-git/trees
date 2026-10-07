#include<iostream>
using namespace std;
struct node{
    public:
int data;
node*left,*right;
 node(int key){
    data=key;
    right=nullptr;
    left=nullptr;
 }
};
int countleaf(node*root){
    if(root==nullptr){
        return 0;
    }
   if (root->left == nullptr && root->right == nullptr) {
        return 1;
    }
   return countleaf(root->left)+countleaf(root->right);
}
int main(){
    node*firstnode=new node(2);
    node*secondnode=new node(3);
    node*thirdnode=new node(4);
    node*fourthnode=new node(5);
    firstnode->left=secondnode;
    firstnode->right=thirdnode;
    secondnode->left=fourthnode;
    cout<<countleaf(firstnode)<<endl;
    return 0;
}