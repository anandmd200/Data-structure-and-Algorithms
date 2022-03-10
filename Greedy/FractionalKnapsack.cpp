#include<bits/stdc++.h>
using namespace std;

struct item{
    int wt;
    int val;
};

bool comp(item a ,item b){
    return a.wt<b.wt;
}

int main(){

    int n;
    cin>>n;
    item arr[n];

    int knapwt = 70;

    for(int i =0;i<n;i++){
        cin>>arr[i].wt>>arr[i].val;
    }

    sort(arr,arr+n,comp);

    int value = 0;

    for(int i=0;i<n;i++){
        if(knapwt - arr[i].wt >= 0){
            value += arr[i].val;
            knapwt = knapwt - arr[i].wt;
        }else if(knapwt > 0){
            int fraction= (knapwt* arr[i].val)/arr[i].wt ; 
            value += fraction;
            knapwt = knapwt - arr[i].wt;
        }else{
            break;
        }
    }

    cout<<value<<endl;
    return 0;
}
    
