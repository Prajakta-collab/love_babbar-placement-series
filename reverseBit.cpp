#include<iostream>
using namespace std;

uint32_t reverseBits(uint32_t n){
uint32_t num=0;
int bits=32;
        while(--bits) {
            if(n&1) num |= 1;    // checking if least significant bit of "n" is set or not
            n = n >> 1;          // right shift "n"
            num = num << 1;      // left shift "num"
        }
        if(n&1) num |= 1;        // if n is set, also set least significant bit of "num"
        
        return num;


}
int main(){
uint32_t n;
cin>>n;

cout<<reverseBits(n);

}