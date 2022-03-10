#include<bits/stdc++.h>
using namespace std;

struct newstruct{
    int start;
    int finish;
};

bool comp(newstruct a ,newstruct b){
    return a.finish<b.finish;
}

int main(){
    
    int n,k;
    cin>>n>>k;
    
    newstruct arr[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr[i].start>>arr[i].finish;
    }

	sort(arr,arr+n,comp);
    
    int ans = 0;
    
    for(int i = 0;i<n-k;i++){
        int maxintersect = 0;
        for(int j=i;j<k-1+i;j++){
            maxintersect += max(maxintersect,abs(arr[j+1].start-arr[j].finish)); 
        }
        ans = max(ans,maxintersect);
    }
    cout<<ans+1<<endl;
    return 0;
}