// not sovled

#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here 
        int i=0;int j=n-1;
        while(i<j) {
            while(i<=n-1 and arr[i]>0)i++;
            while(j>=0 and arr[j]<0)j++;
            if(i<j) swap(arr[i], arr[j]);
        }
        if(i==0 || i==n) return;
        int k=0; 
        while (k<n and i<n) {swap(arr[k], arr[i]);i=i+1;k=k+2;}
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

