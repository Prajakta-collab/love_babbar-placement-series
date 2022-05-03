#include<iostream>
using namespace std;
void update(int *ptr,int *arr){
    cout<<sizeof(arr)<<endl;
    cout<<arr<<endl;
    *ptr=*ptr+1;
}
int main(){
    //int n=2;
    // int *ptr=&n;

    // cout<<ptr<<endl;
    // cout<<&n<<endl;
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl;

    // *ptr=*ptr+1;
    // cout<<*ptr;

//     int arr[5]={1,2,3,4,5};
//     int *ptr=&arr[0];

//     for(int i=0;i<5;i++){
//         cout<<*ptr+i<<" ";
//     }


/*char ch[6]="abced";
cout<<ch<<endl;

char *chptr=&ch[0];
cout<<*(&ch[0]+1)<<endl;
cout<<&ch[1];


char ch2='z';
char *ch2p=&ch2;

cout<<ch2p;
//gets printed until it doesnt get null character

*/

// int n=2;
// int arr[]={1,2,3,4};
// cout<<arr<<endl;

// int *ptr=&n;

// cout<<"before "<<*ptr<<endl;
// update(ptr,arr);

// cout<<"after "<<*ptr;

//double pointer

int i=5;
int *ptr=&i;
int **ptr2=&ptr;

//printing 5
cout<<i<<endl;
cout<<*ptr<<endl;
cout<<**ptr2<<endl;

//printing address of 5 
cout<<&i<<endl;
cout<<ptr<<endl;
cout<<*ptr2<<endl;

//priting address of ptr and
cout<<&ptr<<endl;
cout<<ptr2<<endl;







 }