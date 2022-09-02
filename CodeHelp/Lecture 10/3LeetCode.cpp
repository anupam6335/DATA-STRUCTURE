// Q: https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/
#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &nums){
    vector<int> num;
    map<int, int> count;
    for (int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;
    }
    for (auto it : count){
        if (it.second > 1)
        {
            num.push_back(it.first);
        }
    }
    return num;
}
vector<int> findDuplicates2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
   
       int m = nums.size();

       vector<int> ans;

        for(auto it = nums.begin(); it < nums.end()-1; ++it ){
            if((*it) == *(it+1)){

                ans.push_back(*it);
            }
        }
        return ans;  
    }

int main(void){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "" << endl;
    return 0;
}