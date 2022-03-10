/*
    1st solution Simple hashing 
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       
        map<int,int>mp;
        vector<int>ans;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
            
            int temp = abs(nums[i]) - 1;
            if(nums[temp]<0){  
                ans.push_back(temp+1);
            }
            nums[temp] *= -1;
        }
        return ans;
    }
};

int main(){

}