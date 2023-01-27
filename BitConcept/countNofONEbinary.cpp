#include<bits/stdc++.h>
using namespace std;

//Q count the number of ones in a binary representation of a number.
/*
Intuation : 
    n & n-1 has same bit as n except the righmost set bit
*/

int countOne( int n){
    int count = 0;
    while(n != 0){
        n = n & n-1;
        count++;
    }
    return count;
}

int main(){

    int countOfone = countOne(25); //11001 o/p = 3
    cout<<countOfone<<endl;
    return 0;
}