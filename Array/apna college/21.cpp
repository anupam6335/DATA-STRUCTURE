// kth smallest element https://youtu.be/4BfL2Hjvh8g
//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#
// 

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        /*sort(arr+l, arr+r+1);
        return arr[k-l-1];
        */
        
       priority_queue<int> mxh;
       
       for(int i=0;i<=r;i++){
           mxh.push(arr[i]);
           if(mxh.size()>k) mxh.pop();
       }
       return mxh.top();
       
    }
};

int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  