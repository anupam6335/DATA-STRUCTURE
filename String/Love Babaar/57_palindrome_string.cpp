// https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int check(string a,int i){
    
        int n=a.length()-1;
        if(a[i]!=a[n-i]) return 0;
        if(i>n/2) return 1;
        i++;
        return check(a,i);

    }
	int isPalindrome(string S)
	{
	    // Your code goes here
	    return check(S,0);
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends