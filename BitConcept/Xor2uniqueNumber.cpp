// Q. find the 2 uiique number from the array. {1,2,3,1,2,3,4,5} o/p = 4,5

/*
    step1 = find xorsum from the array. it will return xor of that two unique no. rest will be zero 
    step2 = find the rightmost set bit postion "pos" in xorsum 
    step3 = find the all that element which has setbit at postion "pos" and do xor with newXorsum you will get first no.
    step4 = now do xor with newXorsum and xorsum will get second no as well
*/

#include<bits/stdc++.h>
using namespace std;

int getisSetBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}


vector<int> getUnique(int arr[], int n){

    int xorSum = 0;
    for(int i = 0;i<n;i++){
        xorSum = xorSum ^ arr[i];
    }

    int reStore = xorSum;
    int setbit = 0;
    int pos = 0;
    while(setbit != 1){
        setbit = xorSum & 1;
        pos++;
        xorSum = xorSum>>1;
    }

    int newXorSum = 0;

    for(int i= 0;i<n;i++){
        if(getisSetBit(arr[i], pos-1)){
            newXorSum = newXorSum ^ arr[i];
        }
    }

    // cout<<newXorSum<<endl;
    // cout<<(newXorSum^reStore)<<endl;

    return {newXorSum, newXorSum ^ reStore};

   

}

int main(){

    int arr[] = {1,2,3,1,2,3,4,5};
    vector<int> ans = getUnique(arr,8);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}