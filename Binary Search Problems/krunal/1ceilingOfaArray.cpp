#include<bits/stdc++.h>
using namespace std;

// smallest greater than or equal to
/* 

     2 3 5 9 14 16 18 
     target 15
     ans = 16
 */

int help(vector<int>nums, int target) {
    int start = 0; int end = nums.size() -1;
    int ans = -1;
    // if(target > nums[end])  return -1;
    while(start < end) {
        int mid = start + (end - start)/2;
        if(nums[mid]>= target) {
            ans = mid;
            end = mid -1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main(void) {
    int n; cin >>n;
    vector<int>nums;

    for (int i =0; i<n; i++) {
        int val; cin >>val;
        nums.push_back(val);
    }

    cout<<help(nums,15);
}