#include<bits/stdc++.h>
using namespace std;

bool isPowOf2(int n){
    return (n && !(n & n-1));
}

/*
    intution : 
    if we do & of n and n-1 it always produce 0 

    1000 & 0111 = 0

    corner case: if (n = 0) it should be return 0 ;
    so simply check n && !(n & n-1)

*/

int main(){
    int n = 8;
    cout<<isPowOf2(n)<<endl;
}