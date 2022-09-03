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
    return pivot;
}

int binarySearch(vector<int>nums, int start, int end, int key){
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(key == nums[mid]) return 1;
        else if(key < nums[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int search(vector<int>nums,int key){
    int start = 0; int end = nums.size() - 1;
    int pivot = getPivot(nums);

    if(nums[pivot] <= key and key >= nums[nums.size() - 1])
        return binarySearch(nums,pivot,end,key);
    else
        return binarySearch(nums,start,pivot -1, key);
}


int main(void) {
    int n; cin>>n;
    vector<int>nums; 
    for(int i = 0; i < n; i++) {
        int val; cin>>val;
        nums.push_back(val);
    }
    int key; cin>>key;
    cout<<search(nums,key);
    return 0;
}