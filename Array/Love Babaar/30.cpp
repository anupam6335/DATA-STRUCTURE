/* an array of size n and a number k,
find all elements that appear more than n/k times */
// https://practice.geeksforgeeks.org/problems/count-element-occurences/1
//https://leetcode.com/problems/majority-element-ii/submissions/
#include<bits/stdc++.h>
#define int long long int 
#define f first
#define s second
#define pb push_back
#define tr int t; cin>>t; while(t--)
using namespace std;
int countOccurence(int arr[], int n, int k) {
    // Your code here
/*     int ans=0;
        map<int,int> m;
        for(int i=0;i<n;i++)
        m[arr[i]]++;
        
        for(auto &x:m){
        if(x.second>(n/k))
        ans++;
        } */
        int ans =0;
            int updateK=n/k;
            int cnt=0;
            int hash[100001];
            for(int i=0; i<n; i++)hash[arr[i]]++;

            for(int i=0; i<n; i++){
                if(hash[i]>updateK)cnt++;
            }
            return cnt;
            // return ans;
}
int32_t main(){

    int n,k; cin>>n;
    int a[n]; for(int i=0;i<n;i++)cin>>a[i];
    cin>>k;
    cout<<countOccurence(a,n,k)<<endl;
	return 0;
}