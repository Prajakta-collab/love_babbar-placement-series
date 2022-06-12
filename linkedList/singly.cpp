#include<iostream>
#include<map>
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

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};
void insertAtTail(Node* &tail,int d){
    //create newNode
    //cout<<"tails data"<<tail->data;
    Node* temp=new Node(d);

    tail->next=temp;
    tail=temp;
}
void insertAtHead(Node* &head,int d){
    //create new node
    Node* newNode=new Node(d);

    //point newnode's next to head i.e address of first node 
    newNode->next=head;

    //point head to newnode 
    head=newNode;
}

void insertAtPosition(Node* &tail,Node* &head, int position,int d){

    Node* temp=head;
    int cnt=1;
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //ithe aal mnje u have reached to the previous node where the newNode to be inserted 
    Node* newNode=new Node(d);
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    newNode->next=temp->next;

    temp->next=newNode;
}

void print(Node* &head){
    //temp create kela because we dont want to update in original linked list
    Node* temp=head;


    while(temp!=NULL){
        cout<<temp->data<<" ";
   

        //move forward i.e go to next node
        temp=temp->next;        
    }
    cout<<endl;
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

void deleteNode(Node* head,int position){
    //delete first node
    if(position==1){
        Node* temp=head;

        head=head->next;

        temp->next=NULL;
        //free memory for first node
        delete temp;

    }else{

        Node* prev=NULL;
        Node* curr=head;

        int cnt=1;
        while(cnt<position){
             prev=curr;
             curr=curr->next;
             cnt++;



        }

        prev->next=curr->next;

        //free node memory
        curr->next=NULL;
        delete curr;
    }

}
bool detectLoop(Node* head){
    //check empty
    if(head==NULL){
        return false;
    }

    map<Node*,bool> visited;
    Node* temp=head;

    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }

        //mark visited
        visited[temp]=true;
    }
    //purn loop firun ala tri true return krun baher nhi aala mnje temp==null zal asel mnjech no loop present
    return false;
}
int main(){
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;

    insertAtTail(tail,13);

    insertAtTail(tail,17);

    //tail->next=head;



    insertAtPosition(tail,head,2,22);
    insertAtPosition(tail,head,5,24);



    print(head);
    cout<<"loop present or not"<<detectLoop(head);
    // cout<<"head"<<head<<endl;
    // cout<<"tail"<<tail<<endl;

    // deleteNode(head,3);
    // print(head);



//cout<<"is circular: "<<isCircular(head)<<endl;



    }