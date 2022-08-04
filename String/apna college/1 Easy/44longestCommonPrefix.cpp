//https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1#
// https://leetcode.com/problems/longest-common-prefix/


#include<bits/stdc++.h>
using namespace std;



class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        int n=N;
        sort(arr,arr+N);
        string ans;
        for(int i=0; i<N; i++)cout<<arr[i]<<" "; cout<<endl;
    
        string first=arr[0];
        string last=arr[n-1];
        
        for(int i=0; i<first.size(); i++)
        {
            if(first[i]==last[i])
                ans=ans+first[i];
            else
                break;
        }
        if(ans.length()==0) return "-1";
        return ans;
    }
};


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];  
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}