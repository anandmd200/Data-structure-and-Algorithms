/*
    Q: write a program to find a unique number in an array where all numbers except one are present thrice.
    eg., {1,3,1,3,4,1,2,1,3,2} = o/p = 4

    step 1 = find the set bit in binary representation of each element.
    step 2 = Store the index wise set bit cout in 64 bit array index or in a variable.
    step 3 = find the modulo with 3 in 64 bit array if remainder = 0 do nothing else if it is 1 then setthat bit with its index or position.
*/

#include<bits/stdc++.h>
using namespace std;

bool isSetBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

int setBit(int result, int pos){
    return (result | (1<<pos));
}


int getUniqueElement(int arr[], int n){

    int result = 0;
    for(int i =0;i<64;i++){
        int sum = 0;
        for(int j = 0;j<n;j++){
            if(isSetBit(arr[j], i)){
                sum++;
            }
        }

        if(sum % 3 != 0){
            result = setBit(result,i);
        }
    }

    return result;
}

int main(){

    int arr[] = {1,2,3,4,1,2,3,1,2,3};
    cout<<getUniqueElement(arr,10)<<endl;
    return 0;
}
