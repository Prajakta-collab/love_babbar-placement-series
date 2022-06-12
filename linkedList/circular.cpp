#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //desctructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory free for the node with data"<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int value){
    //empty list
    if(tail==NULL){
        Node* temp=new Node(value);
        tail=temp;
        //making it circular
        temp->next=temp;
    }else{

        //non empty linkedlist
        //assuming that the element is present the list
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }

        //ithe aal mnje element found
        //steps- 1. create node with data
        Node* temp=new Node(value);

        //step 2 -
        temp->next=curr->next;

        curr->next=temp;

        
    }

}

void print(Node* tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    //empty linkedlist
    if(tail==NULL){
        cout<<"no deletion can be performed"<<endl;

    }
    else{
        //no empty linkedlist
        //assuming that the value is present in the linkedlist

        Node* prev=tail;
        Node* curr=prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }


        
        //ithe aal mnje elment is found 
        prev->next=curr->next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

bool isCircular(Node* head){
    //empty list check
    if(head==NULL){
        return true; 
    }
    Node* temp=head->next;

    while((temp!=NULL)&&(temp!=head)){
        temp=temp->next;
    }

    if(temp==NULL){
        return false;
}
if(temp==head){
return true;}
}
int main(){
    Node* tail=NULL;

    insertNode(tail,4,2);
    print(tail);

    insertNode(tail,2,5);
    insertNode(tail,5,8);

    print(tail);

    insertNode(tail,8,90);
    print(tail);

    insertNode(tail,5,9);
    print(tail);

    deleteNode(tail,2);
    print(tail);
    
    cout<<"is circular: "<<isCircular(tail);

}