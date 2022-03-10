/*
given a array in which every element occures 2 times only 1 element occures 1-time find that element;

here xor with same element produces value = 0;
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1,2,1,2,3};

    int ans  = 0;

    for(int i =0;i<5;i++){

        ans ^= arr[i];
    }

    cout<<ans<<endl;
    return 0;
}