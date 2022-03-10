#include<bits/stdc++.h>
using namespace std;

int getfirstoccurance(int arr[],int n,int key){

    int beg = 0;
    int end = n-1;

    int ans = -1;
    while(beg<=end){
        int mid = beg + (end - beg)/2;

        if(arr[mid] == key){
            ans =  mid;                 //here storing index as ans and specifieding left half for search is very necessary.
            end = mid - 1;
        }else if(arr[mid] < key){
            beg = mid + 1;
        }else{
            end = mid -1;
        }
    }
    return ans;
}

int getlastOccurance(int arr[],int n,int key){

    int beg = 0;
    int end = n-1;

    int ans = -1;
    while(beg<=end){
        int mid = beg + (end - beg)/2;

        if(arr[mid] == key){
            ans =  mid;
            beg = mid + 1;
        }else if(arr[mid] < key){
            beg = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){

    int arr[] = {1,1,2,2,2,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 2;

    int first = getfirstoccurance(arr,n,key);
    int last = getlastOccurance(arr,n,key);

    cout<<first<<" "<<last<<endl;

    return 0;
}