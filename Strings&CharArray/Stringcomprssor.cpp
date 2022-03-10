#include<bits/stdc++.h>
using namespace std;

int stringcompress(vector<char>&chars){

    int i = 0;
    int n = chars.size();
    int ansIndex = 0;

    while(i<n){

        int j = i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }

        //different char
        //all vector traversed 
        chars[ansIndex++] = chars[i];
        int count = j - i;
        if(count > 1){
            string digit = to_string(count);
            for(char x : digit){
                chars[ansIndex++] = x;
            }

        }
        i = j;
    }

    return ansIndex;
}

int main(){

    int n;
    cin>>n;
    vector<char>chars = {'a','a','b','b','b','c','c','c'};

    int ans = stringcompress(chars);
    cout<<ans<<endl;

    cout<<n<<endl;
    return 0;

}