#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int>nums,int key){
    int start = 0; int end = nums.size()-1;

    while(start <= end) {
        int mid = start + (end-start)/2;
        if(key == nums[mid]) return true;
        else if(key < nums[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return false;
}


int main(void) {
    int n; cin >>n;
    vector<int>nums; 
    for(int i=0; i<n; i++){
        int val; cin>>val;
        nums.push_back(val);
    }
    int key; cin>>key;
    cout<<binarySearch(nums,key)<<endl;
    return 0;
}