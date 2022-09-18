// Q:https://www.codingninjas.com/codestudio/problems/allocates-books_1090540?leftPanelTab=3
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>nums, int barrier,int students){
    int studentCount = 1; 
    int pageSum = 0;

    for(int i = 0; i < nums.size(); i++){
        if(pageSum+nums[i] <= barrier) pageSum += nums[i];
        else {
            studentCount++;
            if(studentCount > students || nums[i] > barrier) { 
                return false;}
        pageSum = nums[i];
        }
    }
    return true;
}

int help(vector<int>nums,int students){
    if(students > nums.size()) return -1;
    int start = nums[0]; 
    int sum = 0; 
    int ans = -1;

    for(int i = 0; i<nums.size(); i++) sum +=nums[i];

    int end = sum;
    int mid = start + (end - start)/2;

    while(start <= end) {
        // cout<<"start: "<<start<<" end: "<<end<<" mid: "<<mid<<endl;
        // cout<<"\t ?: "<<isPossible(nums,mid,students)<<endl;
        if(isPossible(nums,mid,students)) {
            ans =  mid;
            end = mid - 1;
        }else start = mid + 1;
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(void){
    int n; cin >>n;
    vector<int>nums;
    for(int i = 0; i < n; i++) {
        int val; cin>>val;
        nums.push_back(val);
    }
    cout<<help(nums,2);
    return 0;
}


