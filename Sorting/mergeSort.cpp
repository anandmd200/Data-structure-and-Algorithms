#include<bits/stdc++.h>
using namespace std;

void mergeArray(int arr[],int s,int e){

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];


    int k = s;
    for(int i = 0;i<len1;i++){
        first[i] = arr[k++];
    }

    k = mid + 1;
    for(int i = 0;i<len2;i++){
        second[i] = arr[k++];
    }

    int index1 = 0;
    int index2 = 0;

    int mainindex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] <= second[index2]){
            arr[mainindex++] = first[index1++];
        }else{
            arr[mainindex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainindex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainindex++] = second[index2++];
    }

    delete []first;
    delete []second;
}


void mergesort(int arr[], int s, int e){

    if(s>=e){
        return;
    }

    int mid = s + (e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    mergeArray(arr,s,e);

}

int main(){

    int arr[] = {1,5,2,3,9,6,7,6,23,87,12,13,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = n-1;
    mergesort(arr,start,end);

    for(auto x : arr){
        cout<<x<<" ";
    }

    return 0;

}