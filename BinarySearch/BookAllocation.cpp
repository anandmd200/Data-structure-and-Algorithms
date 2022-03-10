#include<bits/stdc++.h>
using namespace std;

bool isFisible(int arr[], int n,int m,int mid){

    int pageAlloted = 0;
    int studentCount = 1;
    for(int i=0;i<n;i++){

        if(pageAlloted+arr[i] <= mid){
            pageAlloted+=arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageAlloted = arr[i];
        }
    }
    return true;
}

int minimumAllocation(int arr[],int n, int m){

    int s = 0;
    int e = 0;
    for(int i=0;i<n;i++){
        e += arr[i];
    } 

    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(isFisible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 2;                                //no of student

    int ans = minimumAllocation(arr,n,m);

    cout<<ans<<endl;

    return 0;
}