/*
    true : if every element occurs distinct no of time [1,2,2] : 1 -> 1
                                                                 2 -> 2

                                                                return true;

                                                        [1,2]   : 1 -> 1
                                                                  2 -> 1 

                                                                  return false; 

    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        
        unordered_map<int,int> m;
        for(auto x:mp)
        {
            m[x.second]++;
        }
        
        for(auto x:m)
        {
            if(x.second > 1)
                return false;
        }
        
        return true;
    }        
*/

#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurance(int arr[],int n){

    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    unordered_set<int>st;
    for(auto it : m){
        st.insert(it.second);
    }

    return st.size()== m.size();
}

int main(){

    int arr[] = {1,2};

    cout<<uniqueOccurance(arr,2)<<endl;

    return 0;

}