#include<bits/stdc++.h>
using namespace std;

int m[100];

int fib(int n){

    if(m[n] == -1 ){

        int res;
        if(n == 0 || n == 1){
            res = n;
        }else{
            res = fib(n-1) + fib(n-2);
        }
        m[n] = res;
    }
    return m[n];
}

int main(){

    int n = 6;
    for(int i =0;i<100;i++){
        m[i] = -1;
    }
    int ans = fib(n);
    cout<<ans<<endl;

    return 0;
}