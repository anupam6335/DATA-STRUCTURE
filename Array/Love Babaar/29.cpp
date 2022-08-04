/*=======================================================================
Topic Name:
Longest consecutive subsequence
Link :

https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#

=======================================================================*/

#include <bits/stdc++.h>
using namespace std;

/* For leet code */

/*  int longestConsecutive(vector<int>& nums) {
       int N=nums.size();
     set<int> hashset;
    for (int i = 0; i < N; i++)
        hashset.insert(nums[i]);

    int largestStreak = 0;

    for (int num:nums) // look here
    {
        // basically we have to check arr[i] -1 exist or not if does not exist we can't enter the if block
        if (!hashset.count(num - 1))
        {
            int currentNum = num;
            int currentStreak = 1;

            while (hashset.count(currentNum + 1))
            {
                currentNum = currentNum + 1;
                currentStreak = currentStreak + 1;
            }
            largestStreak = max(currentStreak, largestStreak);
        }
    }
    return largestStreak;
    }
 */

int findLongestConseqSubseq(int arr[], int N)
{
    // Your code here
    set<int> hashset;
    for (int i = 0; i < N; i++)
        hashset.insert(arr[i]);

    int largestStreak = 0;

    for (int i = 0; i < N; i++)
    {
        // basically we have to check arr[i] -1 exist or not if does not exist we can't enter the if block
        if (!hashset.count(arr[i] - 1))
        {
            int currentNum = arr[i];
            int currentStreak = 1;

            while (hashset.count(currentNum + 1))
            {
                currentNum = currentNum + 1;
                currentStreak = currentStreak + 1;
            }
            largestStreak = max(currentStreak, largestStreak);
        }
    }
    return largestStreak;
}

int findLongestConseqSubseq1(int arr[], int n)
{
    int ans = 0, count = 0;

    // sort the array
    sort(arr, arr + n);

    vector<int> v;
    v.push_back(arr[0]);

    //insert repeated elements only once in the vector
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] != arr[i - 1])
            v.push_back(arr[i]);
    }
    // find the maximum length
    // by traversing the array
    for (int i = 0; i < v.size(); i++) 
    {
        
        // Check if the current element is equal
        // to previous element +1
        if (i > 0 && v[i] == v[i - 1] + 1)
            count++;
        // reset the count
        else
            count = 1;

        // update the maximum
        ans = max(ans, count);
    }
    return ans;
}


int main()
{
    cout << "Welcome..." << endl;
    int arr[] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5, 6, 6, 6, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findLongestConseqSubseq(arr, n) << " ";
    return 0;
}
