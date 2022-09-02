// Q: https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> ans;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                int sum = arr[i] + arr[j] + arr[k];

                if(sum == k){
                    vector<int>t;
                    t.push_back(arr[i]);
                    t.push_back(arr[j]);
                    t.push_back(arr[k]);
                    ans.push_back(t);
                }
            }
        }
    }
    return ans;
    
}
void help(int n,int *arr){
    
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<""<<endl;
    help(n,arr);
    return 0;
}