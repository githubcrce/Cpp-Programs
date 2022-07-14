// problem link:  https://leetcode.com/problems/intersection-of-multiple-arrays/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main(){
    return 1;
}


class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                map<int, int>::iterator it = mp.find(nums[i][j]);
                if(it!=mp.end()){
                    mp.at(nums[i][j]) = it->second+1;
                }else{
                     mp.insert(make_pair(nums[i][j],1));
                }
            }
        }
        
        
        map<int, int>::iterator itr;
        
        for (itr = mp.begin(); itr != mp.end(); ++itr) {
            cout<<itr->second<<endl;
            if(itr->second>=nums.size()){
                ans.push_back(itr->first);
            }
        }
        
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
        
    }
};