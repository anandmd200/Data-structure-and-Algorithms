#include<bits/stdc++.h>
using namespace std;

int fun(int n){

    if(n == 0){
        return 1;
    }
    return 2 * fun(n-1);
}

int main(){
    
    int n = 5;
    int ans = fun(n);
    cout<<ans<<endl;
    return 0;
}