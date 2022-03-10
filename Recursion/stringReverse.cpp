#include<bits/stdc++.h>
using namespace std;

void reverse(string& s1, int s, int e){

    if(s>e){
        return;
    }else{
        swap(s1[s],s1[e]);
        s++;
        e--;
        reverse(s1,s,e);
    }
}


int main(){

    string s1 = "ababb";

    int s = 0;
    int end = s1.size()-1;
    reverse(s1,s,end);
    cout<<s1<<endl;

    return 0;
}