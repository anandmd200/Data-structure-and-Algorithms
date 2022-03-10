/*
    input: [1,0,1,0,0,1,1]
    output:[0,0,0,1,1,1,1]
*/

#include<bits/stdc++.h>
using namespace std;

void sortonezero(int arr[],int n){

    int left = 0;
    int right = n-1;

    while(left<right){

        while(arr[left] == 0 && left<right){
            left++;
        }
        while (arr[right] == 1 && left<right)
        {
                right--;
        }

        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
}

int main(){

    int arr[] = {1,0,1,0,1,0,0,1};
    sortonezero(arr,8);

    for(int i =0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}