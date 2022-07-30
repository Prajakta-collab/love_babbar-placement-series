#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
node* createBST(node* &root, int data){
    if(root==NULL){
        //there is no tree exist means this is the first element this means this is root
        root=new node(data);
        return root;
    }

    if(data>root->data){
        createBST(root->right, data);
    }else{
        createBST(root->left, data);
    }

    return root;
}
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        
            //purana level complete traverse ho chuka hai
        
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        
    }

}
void takeInput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=createBST(root,data);
        cin>>data;
    }
}
void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}
node* minVal(node* root){

    if(root==NULL){
        return NULL;
    }

    while(root->left!=NULL){
        root=root->left;
    }

    return root;

}
node* maxVal(node* root){
    
}

node* deleteNode(node* root,int value){
//base case
if(root == NULL){
    return NULL;
}

node* temp=root;

if(root->data==value){
    //0 children
    if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
    }

    //1 child

    //left children
    if(root->left!=NULL && root->right==NULL){
        node* temp=root->left;
        delete root;
        return temp;
    }
     if(root->left==NULL && root->right!=NULL){
        node* temp=root->right;
        delete root;
        return temp;
    }

    //2 children
    if(root->left!=NULL && root->right!=NULL){
        int min=minVal(root->right)->data;
        root->data=min;
        root->right=deleteNode(root->right,min);

        return root;

    }
}

else if(value>root->data){
    root->right=deleteNode(root->right,value);
}else{
root->left=deleteNode(root->left,value);
}
}

int main(){
    node* root=NULL;
    takeInput(root);
    deleteNode(root,13);
    inorder(root);

}