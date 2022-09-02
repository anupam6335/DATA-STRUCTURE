// Q: https://leetcode.com/problems/sort-colors/submissions/
#include<bits/stdc++.h>
using namespace std;


void help(int n,int *arr){
    int z,o,t; z=o=t=0;

    for(int i=0;i<n;i++) { 
        
        if(arr[i]==0) z++;
        if(arr[i]==1) o++;
        if(arr[i]==2) t++;
    }

    for(int i=0;i<z;i++) arr[i] = 0;
    for(int i=z;i<z+o;i++) arr[i] = 1;
    for(int i=z+o;i<z+o+t;i++) arr[i] = 2;
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<""<<endl;
    help(n,arr);
    for(int i=0; i<n;i++) cout<<arr[i]<<" ";
    return 0;
}