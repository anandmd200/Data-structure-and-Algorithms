/*
    given a array[] = {4, 5, 6, 3, 2, 1}
    output : 6 :
    Complexity: O(log n)

*/

#include<bits/stdc++.h>
using namespace std;

int indexofpeak(int arr[],int n){

    int beg = 0;
    int end = n-1;

    int mid = beg+(end-beg)/2;

    while(beg<end){

        if(arr[mid] < arr[mid+1]){
            beg = mid + 1;
        }else{
            end = mid;
        }
        mid = beg+(end-beg)/2;
    }
    return beg;
}

int main(){

    int arr[] = {4,5,6,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ansindex = indexofpeak(arr,n);
    cout<<ansindex<<endl;
    return 0;

}