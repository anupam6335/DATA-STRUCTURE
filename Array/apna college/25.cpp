//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1/#
//Find Minimum in Rotated Sorted Array

#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& arr) {
          int i=0,j=arr.size()-1;
          while(i<j){
              int mid=(i+j)/2;
              if(arr[mid]<arr[j])
                  j=mid;
              else
                  i=mid+1;
            cout<<mid<<" "<<arr[j]<<endl;
          }
          return arr[j];
}
/* int findMin(vector<int>& arr) {
    return *min_element(arr.begin(), arr.end());
} */
int main(void){
    int n; cin>>n; 
    vector<int>pdt; for(int i=0; i<n; i++){int val; cin>>val ; pdt.push_back(val);}
    cout<<findMin(pdt);
}