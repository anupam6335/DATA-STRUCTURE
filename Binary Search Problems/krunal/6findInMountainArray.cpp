#include<bits/stdc++.h>
using namespace std;

int  binarySearch(vector<int>nums,int key,int start , int end){

    while(start <= end) {
        int mid = start + (end-start)/2;
        if(key == nums[mid]) return mid;
        else if(key < nums[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}
int  help(vector<int>nums, int target) {
    int start = 0; 
    int end = 1;

    while(target > nums[end]) {
        int newStart = end + 1;
        end = end + ( end - start +1) * 2;
        start = newStart;
    }
   return binarySearch(nums, target, start ,end);
}

int main(void){
    int n; cin >>n;
    vector<int>nums; 
    for(int i=0; i<n; i++){
        int val; cin>>val;
        nums.push_back(val);
    }
    int target; cin>>target;
    cout<<help(nums,target)<<endl;
   
    return 0;
}