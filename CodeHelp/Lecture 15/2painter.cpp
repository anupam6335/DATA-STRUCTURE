//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
    bool isPossible(int *arr, int n, long long mid, int k) {
        int painterCount = 1;
        long timeSum = 0;
        for (int i = 0; i < n; i++) {
            if (timeSum + arr[i] > mid) {
                painterCount++;
                timeSum = arr[i];
                
            if (timeSum > mid) return false;
            
            } else timeSum += arr[i];
        }
        
        if (painterCount > k) return false;
        return true;
    }

  public:
    long long minTime(int arr[], int n, int k)
    {
        long long start = 0, end = 0;
        end = accumulate(arr, arr + n, end);
        long long ans;
        while (start <= end) {
            long long mid = (start + end) / 2;
            
            if (isPossible(arr, n, mid, k)) {
                ans = mid;
                end = mid - 1;
            } else start = mid + 1;
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends