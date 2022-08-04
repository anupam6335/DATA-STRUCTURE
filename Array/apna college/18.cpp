// next permutation -https://leetcode.com/problems/next-permutation/
// gfg -https://practice.geeksforgeeks.org/problems/next-permutation5226/1#

#include <bits/stdc++.h>
using namespace std;
// using stl
void nextPermutation_STL(vector<int>& nums) {
    
    next_permutation(nums.begin(),nums.end());
}
void nextPermutation(vector<int> &nums){
    int n = nums.size();
    if (n == 1)
        return;

    int i = 1;
    int lastInc = -1;
    while (i < n)
    { // Find the peak of last ASC order
        if (nums[i] > nums[i - 1])
            lastInc = i;
        i += 1;
    }

    if (lastInc == -1)
    { // Check if array is DSC
        for (i = 0; i < n / 2; ++i)
            swap(nums[i], nums[n - i - 1]);
        return;
    }
    // Find element in the range (nums[lastInc-1] to nums[lastInc]) to the right
    int mn = nums[lastInc];
    int index = lastInc;
    for (i = lastInc; i < n; ++i)
    {
        if (nums[i] > nums[lastInc - 1] and nums[i] < nums[index])
        {
            index = i;
        }
    }
    swap(nums[lastInc - 1], nums[index]);
    sort(nums.begin() + lastInc, nums.end());
}
int main()
{
	int n; cin>>n; 
    int arr[n]; for(int i=0; i<n; i++) cin>>arr[i];
	bool val
		= next_permutation(arr,arr+n);
	if (val == false)
		cout << "No Word Possible"
			<< endl;
	else
		for(int i=0; i<n; i++) cout<<arr[i]<<" ";
	return 0;
}
