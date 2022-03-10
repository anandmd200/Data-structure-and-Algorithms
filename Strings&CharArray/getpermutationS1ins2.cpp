#include<bits/stdc++.h>
using namespace std;

bool checkequal(int count1[],int count2[]){

    for(int i = 0;i<26;i++){
        if(count1[i] != count2[i]){
            return false;
            break;
        }
    }
    return true;
}

bool ispermutaionConatin(string s1 ,string s2)
{

    int count1[26] = {0};
    int count2[26] = {0};

    for(int i = 0; i<s1.size();i++){
        count1[s1[i]-'a']++;
    }

    //traverse string s2 of window size s1.length;

    int windowSize = s1.length();

    int i = 0;
    while(i<windowSize && i < s2.size()){
        count2[s2[i]-'a']++;
        i++;
    }

    if(checkequal(count1,count2)){
        return 1;
    }

    while(i<s2.length()){
        count2[s2[i]-'a']++;
        char oldchar = s2[i-windowSize]; //geting character which should have to exclude from window 
        count2[oldchar - 'a']--;           // doing count - 1 of privious element which have already checked of window size k;

        if(checkequal(count1,count2)){
            return 1;
        }
        i++;
    }

    return 0;
}


int main(){

    string s1,s2;
    cin>>s1>>s2;

    bool ans = ispermutaionConatin(s1,s2);
    cout<<ans<<endl;

    return 0;
}