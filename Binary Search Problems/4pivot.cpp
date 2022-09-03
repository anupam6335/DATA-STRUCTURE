#include<bits/stdc++.h>
using namespace std;

int getPivot(vector<int>nums){
    int start = 0; int end = nums.size() -1;
    int pivot = -1;
    while(start < end) {
        int mid = start + (end - start)/2;

        if(nums[mid] >= nums[0]) start = mid + 1;
        else end = mid;
        pivot = start;
    }
    return nums[pivot];
}


int main(void) {
    int n; cin>>n;
    vector<int>nums;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        nums.push_back(val);
    }
    cout<<getPivot(nums);
     return 0;
}