#include<bits/stdc++.h>
using namespace std;

int help(vector<int>&nums, int target) {
    int start = 0; int end = nums.size()-1;

    int ans = -1;

    while (start < end) {

        int mid = start + (end-start)/2;

        if(nums[mid] <= target){
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n; cin>>n;
    vector<int>nums;

    for(int i=0; i<n; i++) {
        int val; cin>>val;
        nums.push_back(val);
    }

    int target ; cin>>target;
    cout<<nums[help(nums,target)];
    return 0;
}