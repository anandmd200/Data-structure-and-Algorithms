#include<bits/stdc++.h>
using namespace std;


int main(){

    string s1;
    cin>>s1;
    int arr[26] = {0};
    for(int i = 0;i<s1.size();i++){
        if(s1[i]>='a' && s1[i]<='z'){
            arr[s1[i]-'a']++;
        }
        if(s1[i]>='A' && s1[i]<='Z'){
            arr[s1[i] - 'A']++;
        }
    }

    int max = 0;
    int ans = 0;
    for(int i =0;i<26;i++){
        if(arr[i]>max){
            max = arr[i];
            ans = i;
        }
    }
    cout<<char(ans+'a')<<endl;
    return 0;
}