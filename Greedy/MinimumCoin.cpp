#include<bits/stdc++.h>
using namespace std;

bool comp(int a ,int b){
    return b<a;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int amount = 52;

    int minCountCoin = 0;
    sort(arr,arr+n,comp);

    int i=0;
    int ans = 0;
    /*
    while(amount){
        if(amount - arr[i]>=0){
            amount -= arr[i]; 
            ans++;
        }else{
            i++;
        }
    }
    */
   // optimal

    for(int i =0;i<n;i++){
        if(amount>=arr[i]){
            int c = floor(amount/arr[i]);
            ans += c;
            amount = amount - c*arr[i];

        }
        if(amount == 0){
            break;
        }
    }

    cout<<ans<<endl;
    return 0;
}