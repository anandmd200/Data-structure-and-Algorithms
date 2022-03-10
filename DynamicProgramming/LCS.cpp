#include<bits/stdc++.h>
using namespace std;

int memo[100][100];

int lcs(string s1,string s2, int m ,int n){


    if(m==0 || n == 0)
        return 0;
    else if(s1[m-1] == s2[n-1])
        return 1+lcs(s1,s2,m-1,n-1);
    else
        return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
    

}

int memolcs(string s1,string s2, int m, int n){

    if(memo[m][n] != -1){
        return memo[m][n];
    }
    if(m == 0 || n == 0)
        memo[m][n] = 0;
    else{
         if(s1[m-1] == s2[n-1]){
            memo[m][n] = 1+memolcs(s1,s2,m-1,n-1);
        }else{
            memo[m][n] = max(memolcs(s1,s2,m-1,n),memolcs(s1,s2,m,n-1));
        }
    }
    return memo[m][n];
}

int main(){

    string s1 = "X";
    string s2 = "X";

    int m,n;


    m = s1.size(); n = s2.size();
    memo[m+1][n+1];

    for(int i=0;i<m+1;i++){
        for(int j = 0;j<n+1;j++){
            memo[i][j] == -1;
        }
    }

    int ans = memolcs(s1,s2,m,n);

    cout<<ans<<endl;
    return 0;
}