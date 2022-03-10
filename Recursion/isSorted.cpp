#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size ){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }else{
        return isSorted(arr+1,size-1);
    }
}

int main(){

    int arr[] = {1,2,3,4,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool ans = isSorted(arr,n);

    if(ans){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }
}