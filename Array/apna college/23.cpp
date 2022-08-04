#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {

    int n = nums.size()-1;  // 1 2 3 4 
                            // 24 12 8 6
    int ans = 1;
    vector<int>output;
    for(int i=0;i<=n;i++){
        output.push_back(ans);
        ans = ans*nums[i];
    }
    ans =1;
    for(int i=n;i>=0;i--){
        int a = nums[i];
        nums[i] = ans;
        ans = ans*a; 
    }
    for(int i=0;i<=n;i++){
        
        if(i==0){
            output[0] = nums[0];
        }
        else if(i==n)
            output[n] = output[n];
        
        else{
            output[i] = output[i]*nums[i];
        }
        
    }
    
    return output;
    
}

/*
// https://leetcode.com/problems/product-of-array-except-self/
// naive approach
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    int pdt=1; vector<int>output;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==i) continue;
            else  pdt*=nums[j];
        }
         output.push_back(pdt);
        pdt=1;
    }
    return output;
}
*/
int main(void){
    int n; cin>>n;
    vector<int>pdt; for(int i=0; i<n; i++){int val; cin>>val ; pdt.push_back(val);}
    vector<int>output=productExceptSelf(pdt);
    for(auto i:output)cout<<i<<" ";
    cout<<endl;
    cout<<endl;
    return (0);
}