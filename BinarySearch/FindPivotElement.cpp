/*
    int arr[] = {7,9,1,2,3}       
    pivot o/p = 1

    |
    | /
    |/-known 
    |    /---------------known initially(arry end value)  
    |   /
    |__/-pivot_____________

    this pivote element heplps in search in sorted & roated array leet code already solved.

*/

#include<bits/stdc++.h>
using namespace std;

int findPivote(int arr[],int n){

    int beg  = 0;
    int end = n-1;

    int mid  = beg + (end-beg)/2;

    while(beg<end){

        if(arr[mid] >= arr[0]){
            beg = mid+1;
        }else{
            end = mid;
        }
        mid  = beg + (end-beg)/2;
    }
    return beg;  // here beg & end points the same values 
}

int main(){
    
    int arr[] = {7,8,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pivot = findPivote(arr,n);

    cout<<pivot<<endl;

    return 0;
}