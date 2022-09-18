// Q: peek element
#include<bits/stdc++.h>
using namespace std;


int help(vector<int>nums) {
     int start = 0; int end = nums.size() - 1;
     int mid = start + (end - start)/2;
     int ans = -1;
     while(start < end) {
        if(nums[mid] < nums[mid + 1]) {
            start = mid + 1;
            ans = start;
        }else end = mid ;
        mid = start + (end - start)/2;
     }
     return ans;
}

int main(void){
    int n; cin >>n;
    vector<int>nums; 
    for(int i=0; i<n; i++){
        int val; cin>>val;
        nums.push_back(val);
    }

    cout<<help(nums)<<endl;
   
    return 0;
}