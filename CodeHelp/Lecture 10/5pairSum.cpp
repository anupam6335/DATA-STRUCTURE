// Q: https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
    
    vector<vector<int>>output;
    
    for(int i= 0;i<arr.size(); i++){
        for(int j=i+1; j<arr.size() ;j++){
            int sum = arr[i]+arr[j];
            if(sum == s){
                vector<int>t;
                t.push_back(min(arr[i],arr[j]));
                t.push_back(max(arr[i],arr[j]));
                output.push_back(t);
            }
        }
    }
    sort(output.begin(),output.end());
    return output;
}

int main(void){
    int n; cin>>n;
    vector<int> in1;

    for(int i=0; i<n; i++){ 
        int data; 
        cin>>data; 
        in1.push_back(data);
    }
    vector<vector<int>> ans = pairSum(in1,n);
    for(int i=0; i<n; i++){
        for(int j=0; j<ans.size(); j++){
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}