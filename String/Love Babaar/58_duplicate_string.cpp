/* // Print all the duplicates in the input string
// C++ program to count all duplicates
// from string using maps
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
	map<char, int> count;
	for (int i = 0; i < str.length(); i++) {
		count[str[i]]++;
	}

	for (auto it : count) {
		if (it.second > 1)
			cout << it.first << ", count = " << it.second
				<< "\n";
	}
}

int main()
{
	string str = "test string";
	printDups(str);
	return 0;
}

// https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>num;
        map<int, int> count;
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }
        for (auto it : count) {
		    if (it.second > 1){
                num.push_back(it.first);
            }
        }
        return num;
    }
};
 */


// Remove all duplicates from a given string


// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
        	int count[150]={0};
            string output = "";
            for (int i=0; i<str.length(); i++){
                if(count[str[i]]==0) output += str[i];

                count[str[i]]++;
            }

        return output;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
