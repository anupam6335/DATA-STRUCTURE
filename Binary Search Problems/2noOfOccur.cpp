#include <bits/stdc++.h>
using namespace std;

int first (vector<int> nums, int key) {
    int start = 0; int end = nums.size() -1;
    int pos = - 1;
    while (start <= end) {
        int mid = start + (end-start)/2;

        if(nums[mid] == key) {
            pos = mid;
            end = mid - 1 ;
        } else if(nums[mid] > key) {
            end = mid - 1 ;
        } else {
            start = mid + 1;
        }
    }
    return pos;
}

int last (vector<int> nums, int key){
    int start = 0; int end = nums.size() - 1;
    int pos = -1;
    while(start <= end) {
        int mid = start + (end - start)/2 ;

        if(nums[mid] == key){
            pos = mid;
            start = mid + 1;
        } else if(nums[mid] > key){
            end = mid - 1 ;
        }else{
            start = mid + 1;
        }
    }
    return pos;
}
int main(void) {
    int n; cin>>n;
    vector<int>nums; 
    for(int i=0; i<n; i++){
        int val; cin>>val;
        nums.push_back(val);
    }
    int key; cin>>key;
    cout<<first(nums,key) + 1;
    cout<<" ------- ";
    cout<<last(nums,key) + 1;
}
