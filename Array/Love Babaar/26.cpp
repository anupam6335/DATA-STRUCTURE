//Find the if there is any subarray sum is zero https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1#

#include<bits/stdc++.h>
using namespace std;
bool isSubarray(int*a ,int n){
    /* int sum=0;
    if(n==0) return false;
    sort(arr,arr+n);
    for(int i = 0; i < n;i++) if(arr[i]==0) return true;
    if(arr[0]>0)return false;
    else{
        int neg=0; int pos=0;
        for(int i = 0; i < n;i++){
            if(arr[i]<0)neg+=arr[i];
            for(int j = i+1; j <n;j++){
                if(abs(neg)==arr[j]) return true;
            }
            if(arr[i]>0)pos+=arr[i];
            if(neg+pos==0)return true;
        }
        return false;
    } */
         set<int> s;
        
        int sum = 0;
        for (int i = 0; i< n; i++)
        {
            sum+= a[i];
            if (sum == 0 or s.find(sum) != s.end())
                return true;
            
            s.insert(sum);
        }
          
        return false;
    
}
int main(void){
    int n; cin>>n;
    int arr[n]; for(int i = 0; i < n; i++)cin>>arr[i];
    bool check=isSubarray(arr,n);
    if(check)cout<<"yes"<<endl;
    else cout<<"No"<<endl;
    return (0);
}