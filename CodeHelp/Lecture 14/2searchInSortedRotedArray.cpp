// Q: https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    int getPivot(vector<int>nums){
    int start = 0; int end = nums.size() -1;
        
    while(start < end) {
        int mid = start + (end - start)/2;
        if(nums[mid] >= nums[0]) start = mid + 1;
        else end = mid;
    }
    return start;
}

int binarySearch(vector<int>nums, int start, int end, int key){
    int mid = start + (end-start)/2;
    while(start <= end) {
        if(key == nums[mid]) return mid;
        else if(key < nums[mid]) end = mid - 1;
        else start = mid + 1;
        mid = start + (end-start)/2;
    }
    return -1;
}


public:
    int search(vector<int>& nums, int target) {
    int start = 0; int end = nums.size() - 1;
    int pivot = getPivot(nums);

    if(nums[pivot] <= target and target <= nums[nums.size() - 1])
        return binarySearch(nums,pivot,nums.size() - 1 ,target);
    else
        return binarySearch(nums,start,pivot - 1, target);

    }
};


int getPivot(vector<int>nums){
    int start = 0; int end = nums.size() -1;
    while(start < end) {
        int mid = start + (end - start)/2;

        if(nums[mid] >= nums[0]) start = mid + 1;
        else end = mid;
    }
    return start;
}

int binarySearch(vector<int>nums, int start, int end, int key){
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(key == nums[mid]) return mid;
        else if(key < nums[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int search(vector<int>nums,int key){
    int start = 0; int end = nums.size() - 1;
    int pivot = getPivot(nums);

    if(nums[pivot] <= key and key <= nums[nums.size() - 1])
        return binarySearch(nums,pivot,end,key);
    else
        return binarySearch(nums,start,pivot, key);

    return -1;
}


int findPosition(vector<int>& arr, int n, int k)
{
    if(n==1 and k == arr[0]) return 0;
    return search(arr, k);
}




int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    return 0;
}