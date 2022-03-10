#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[],int s, int e, int key){

    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr,mid+1,e,key);
    }else{
        return binarySearch(arr,s,mid-1,key);
    }

}

int main(){

    int arr[] = {1,2,3,4,5,6,7};

    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = 6;
    int key = 8;
    bool ans = binarySearch(arr,start,end,key);
    if(ans){
        cout<<"key found"<<endl;
    }else{
        cout<<"key not found"<<endl;
    }

    return 0;
}