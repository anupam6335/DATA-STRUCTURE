// Q:https://leetcode.com/problems/missing-number/
#include<bits/stdc++.h>
using namespace std;


class Solution {
    int help(vector<int>&nums){
        sort(nums.begin(),nums.end());
        int start  = 0; int end = nums.size()-1;
        
        int res = nums.size();
        int mid = start + (end - start)/ 2;
        
        while(start <= end) {
            if(nums.at(mid) == mid) start = mid +1;
            else{
                res = mid;
                end = mid -1;
            }
             mid = start + (end - start)/ 2;
        }
        return res;
    }
public:
    int missingNumber(vector<int>& nums) {
        return help(nums);
    }
};


int main(void){
    int n; cin >>n;
    return 0;
}