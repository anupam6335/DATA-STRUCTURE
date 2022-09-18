#include<bits/stdc++.h>
using namespace std;

// 719. Find K-th Smallest Pair Distance

int smallestDistancePair(vector<int>& nums, int k) {

        vector<int> num;
        num[0] = 0;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++){
                int distance = abs(nums[i] - nums[j]);
                num.push_back(distance);
            }
        }
        for(int i = 0; i < nums.size(); i++) cout<<num[i]<<" ";

        return num[k];
}



int main(void) {
    int n; cin >>n;
    vector<int>nums;

    for (int i =0; i<n; i++) {
        int val; cin >>val;
        nums.push_back(val);
    }
    int k; cin>>k;
    cout<<smallestDistancePair(nums,k);
}