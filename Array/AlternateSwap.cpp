/*
    i/n = [1,2,3,4,5]
    o/p = [2,1,4,3,5]

    there will be 2 cases 1 even , 2nd odd size of array
*/

#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[],int n){

    int m = n;
    if(n%2 != 0){
        m = n-1;
    }

    for(int i = 0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {1,2,3,4,5};
    int arr1[] = {3,4,6,5,7,2};

    swapAlternate(arr,5);
    swapAlternate(arr1,6);
    
    return 0;
}