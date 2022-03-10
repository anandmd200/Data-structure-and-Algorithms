#include<bits/stdc++.h>
using namespace std;

bool isfound(int arr[],int size,int key){

    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }else{
        return isfound(arr + 1, size-1,key);
    }
}

int main(){

    int arr[] = {1,2,3,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    bool ans =  isfound(arr,size,9);

    if(ans){
        cout<<"key is found"<<endl;
    }else{
        cout<<"key is not found"<<endl;
    }

    return 0;
}