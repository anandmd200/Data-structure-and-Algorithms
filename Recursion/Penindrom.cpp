#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string& s1, int s, int e){

    if(s>e){
        return true;
    }
    if(s1[s] != s1[e]){
        return false;
    }else{
        s++;
        e--;
        return ispalindrome(s1,s,e);
    }
}


int main(){

    string s1 = "ababa";

    int s = 0;
    int end = s1.size()-1;
    bool ans = ispalindrome(s1,s,end);
    if(ans){
        cout<<"yes plendrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}