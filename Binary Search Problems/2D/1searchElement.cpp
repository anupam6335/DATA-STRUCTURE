// Q:
#include<bits/stdc++.h>
using namespace std;

 // help form https://leetcode.com/problems/search-a-2d-matrix-ii/discuss/66139/C%2B%2B-search-from-top-right


    bool helpLeetCode(vector<vector<int>>&v,int target){

        // 240. Search a 2D Matrix II

        int m = v.size(), n = m ? v[0].size() : 0, row = 0, column = n - 1; 

        
        while(row < m and  column >= 0){
            if(v[row][column] == target) return true;
            else if(v[row][column] > target) column--;
            else row++;
        }

        return false;
     }

// row or column sorted matrix run in gfg but not in leetcode
// https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1
bool help(vector<vector<int>>&v,int row,int column,int target){

    while(row <v.size() and column >= 0){
        if(v[row][column] == target) return true;
        else if(v[row][column] > target) column -=1;
        else row += 1;
    }

    return false;
}


// SEARCH 2D ARRAY
class Solution {

    // 74. Search a 2D Matrix

     bool help(vector<vector<int>>& matrix, int rows, int columns, int target) {
        int row = 0, col = columns;
         
         while(row < rows and col >=0){
             if(matrix[row][col] == target) return true;
             
             matrix[row][col] < target ? row++ : col--;
         }
         
         return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return help(matrix,matrix.size(),matrix[0].size() - 1, target);
    }
};



// 154. Find Minimum in Rotated Sorted Array II

    int help3(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        
        // the array was never rotated, or is rotated n times
        if (nums[start] < nums[end]) return nums[start];

        
        while(start < end) {
            int mid = start + (end - start) / 2;
            
            
            if (nums[mid] > nums[end]) {
                // the minimum element is in the right half of the array
                start = mid + 1;
            } else if (nums[mid] < nums[end]) {
                // the minimum element is in the left half of the array
                end = mid;
            } else {
                // duplicate values ignore
                end--;
            }
        }
         return nums[end];
    }
     









int main(){
    int n,m; cin>>n>>m;
   vector<vector<int>>v;

   for(int i=0; i<n; i++){
    vector<int>t;
    
    for(int j=0; j<m; j++){
        int val; cin>>val;
        t.push_back(val);
    }
    v.push_back(t);
   }


    vector<int> vCopy;
        
        for(int i=0; i<v.size(); i++){
            for(int j =0; j < v[0].size(); j++){
                vCopy.push_back(v[i][j]);
            }
        }

    for(int i=0; i<vCopy.size(); i++){
        cout<<vCopy[i]<< " ";
    }
    

}




/* 

[1,3,5]
[2,2,2,0,1]
[2,2,2]
[4,1,2,3]
[1,3,3]
[10,1,10,10,10]
[3,3,1,3]
[2,2,2,0,2,2]

 */