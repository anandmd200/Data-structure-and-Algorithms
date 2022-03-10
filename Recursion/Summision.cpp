#include<bits/stdc++.h>
using namespace std;

int getsum(int arr[],int size){

    if(size == 0){
        return 0;
    }else{
        return arr[size-1] + getsum(arr,size-1); 
    }
}

int main(){

    int arr[] = {1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;
    int ans = getsum(arr,size);

    cout<<"Sum of array is : "<<ans<<endl;

    return 0;
}