#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->prev=NULL;
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
void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

int getLength(Node* &head){
      Node* temp=head;
      int len=0;

    while(temp!=NULL){
        len++;
        temp=temp->next;

    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int data){

    if(head==NULL){
            Node* newNode=new Node(data);
            head=newNode;
            tail=newNode;

    }else{
  //create new node
    Node* temp=new Node(data);
    //make temp's next point to head's prev i.e (existing first node)

    temp->next=head;

    //make head's prev point to temp->next
    head->prev=temp->next;
    //make newnode as head
    head=temp;
    }
  
}

void insertAtTail(Node* &head,Node* &tail, int data){
    //if linkedlist is tail 
    if(tail==NULL){
            Node* temp=new Node(data);
            tail=temp;
            head=temp;


    }else{

 //create new node
    Node* temp=new Node(data);

    //new's prev point to tail's next
    temp->prev=tail;

    //tails next point to temp's prev
    tail->next=temp;
    //updata tail
    tail=temp;
    }
   
}

void insertAtPosition(Node* &tail,Node* &head,int position,int data){
//if position is 1
if(position==1){

    insertAtHead(head,tail,data);
    return;
}

Node* temp=head;
int cnt=1;

while(cnt<position-1){
    temp=temp->next;
    cnt++;
}


if(temp->next==NULL){
    insertAtTail(head,tail,data);
    return;
}

//create new node
Node* nodeToInsert=new Node(data);

//make newnode's next -> temp->next
nodeToInsert->next=temp->next;

//make 

temp->next->prev=nodeToInsert;

//temp->next=nodetoinsert
temp->next=nodeToInsert;

nodeToInsert->prev=temp;
}

void deleteNode(int position,Node* &head,Node* &tail){
    Node* temp=head;
    if(position==1){
        temp->next->prev=NULL;
        head=temp->next;

        temp->next=NULL;

        //memory free 
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

        if(curr->next==NULL){
         curr->prev=NULL;
        prev->next=curr->next;

        curr->next=NULL;
                    tail=prev;

        //free memory 
        delete curr;



        }else{
curr->next->prev=prev;
        curr->prev=NULL;
        prev->next=curr->next;

        curr->next=NULL;
        //free memory 
        delete curr;
        }

        
    }
}
int main(){

    //Node* node1=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;

    //print(head);
    //cout<<getLength(head)<<endl;

    insertAtHead(head,tail,11);

   // print(head);
    //cout<<getLength(head);

    insertAtHead(head,tail,22);

    insertAtTail(head,tail,34);

    //print(head);

    insertAtPosition(tail,head,2,78);
    //print(head);


   insertAtPosition(tail,head,1,70);
    //print(head);


insertAtPosition(tail,head,6,98);
print(head);

    // deleteNode(6,head,tail);
    // print(head);

    // cout<<"head"<<head->data<<endl;
    // cout<<"tail"<<tail->data<<endl;


}