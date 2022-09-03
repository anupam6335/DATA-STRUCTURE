#include<bits/stdc++.h>
using namespace std;

int peekElement(vector<int>nums) {
    int start = 0; int end = nums.size() - 1;
    int peek = -1;
    while(start < end) {
        int mid = start + (end - start) / 2;
        if(nums[mid] < nums[mid + 1]) start = mid + 1;
        else end = mid;
        peek = start;
    }
    return nums[peek];
}


int main(void) {
    int n; cin>>n;
    vector<int>nums;
    for(int i = 0; i < n; i++) {
        int val; cin>>val;
        nums.push_back(val);
    }
    cout<<peekElement(nums) ;
    return 0;
}