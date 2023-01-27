#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

int setBit(int n , int pos){
    return (n | (1<<pos));
}

int clearBit(int n, int pos){
    return ( n & (~(1<<pos)));
}

int updateBit(int n, int pos, int val){
    int mask = clearBit(n, pos);
    return mask | (1<<pos);
}

int main(){
    int n = 5;
    int getbit = getBit(n,1);
    int setbit = setBit(n,3);
    int clearbit = clearBit(n,2);

    cout<<"getBit Number: "<<getbit<<endl;
    cout<<"SetBit Number: "<<setbit<<endl;
    cout<<"clearBit Number: "<<clearbit<<endl;

    cout<<"update Bit: " <<updateBit(8,0,1); // can only update bit by 1.

    return 0;
}