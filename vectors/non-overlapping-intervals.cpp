// problem link: https://leetcode.com/problems/non-overlapping-intervals/
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
    
public:
    static bool mycompare(pair<int,int> p1,pair<int,int> p2){
        return p1.second<p2.second;
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<pair<int,int>> vp;
        for(vector v:intervals){
            vp.push_back(make_pair(v[0],v[1]));
        }
        
        sort(vp.begin(),vp.end(),mycompare);
        
        int n =  vp.size();
        int count =0;
        pair<int,int> merge =  vp[0];
        for(int i=1;i<n;i++){
            pair<int,int> p  =  vp[i];
            if(merge.second<=p.first){
                merge.second =  p.second;
            }else{
                count++;
            }
        }
        
        
        return count;
    }
    
    
};