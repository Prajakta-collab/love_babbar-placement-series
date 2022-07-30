#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    int index;

    heap(){
        size=0;
        arr[0]=-1;
        
    }

    void insert(int val){


        //insert valuee at  end
        size=size+1;
        int index=size;
        arr[index]=val;
        
        
        //place at its correct position
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                return;
            }
        }


    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void deletefromHeap(){
        if(size==0){
            cout<<"nothing can be deleted"<<endl;
            return;
        }
     //step 1 replace the leaf and root element
            arr[1]=arr[size];
            //step2 remove leaf node
            size=size-1;
        int i=1;
        while(i<size){

           
            cout<<size<<endl;

            //step 3 place the root at its correct postion

            int leftchild=2*i;
            int rightchild=2*i+1;

            if(leftchild<size && arr[leftchild]>arr[i]){
                swap(arr[leftchild],arr[i]);
                i=leftchild;
            }
            else if(rightchild<size && arr[rightchild]>arr[i]){
                swap(arr[rightchild],arr[i]);
                i=rightchild;

            }else{
                return;
            }

        }
    }
};

void heapify(int arr[],int n,int i){
    int largest =i;

    int left=2*i;
    int right=2*i+1;

    if(left<=n && arr[left]>arr[i]){
        largest=left;
    }else if(right<=n && arr[right]>arr[i]){
        largest =right;
    }

    if(largest!=i){
        //largest value has been changed so, means left or rigght child is greater
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){
    //step1: swap first and last elment
    int size=n;
    while(size>1){
 swap(arr[1],arr[size]);
    size--;

    //step2: place root at its correct position
    heapify(arr,size,1);
    }
   

}



int main(){
    heap h;
    h.insert(20);
    h.insert(40);
    h.insert(30);
    h.insert(50);
    h.insert(35);

    //h.print();

    // h.deletefromHeap();
    // h.print();

    //heapify array except the leaf nodes 
    int arr[5]={-1,80,76,74,56};

    int n=4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"after heapify";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

heapSort(arr,n);
cout<<"after sort"<<endl;
 for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;





}