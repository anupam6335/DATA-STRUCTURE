// min jump -https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){
    // Your code here
    if (n <= 1)
        return 0;

    if (arr[0] == 0)
        return -1;

    int maxReach = arr[0];
    int step = arr[0];
    int jump = 1;

    int i = 1;
    for (i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jump;

        maxReach = max(maxReach, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            if (i >= maxReach)
                return -1;
            step = maxReach - i;
        }
    }

    return -1;
}

int main(void)
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int jump=minJumps(arr,n);    
    cout<<jump<<" "<<endl;
    return (0);
}

