#include<bits/stdc++.h>
using namespace std;

// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#
int* bruteForce(int *arr,int n){
    int hash[n+n]={};
    for(int i=0;i<n;i++) hash[arr[i]]++;
    
    int i=1;
    for(;i<n;i++){
        if(hash[i]>1) break;
    }
    int j = 1;
    for (; j <= n; j++) {
		if (hash[j] == 0)
			break;
	}
      int *tF=new int [2];
      tF[0]=i;
      tF[1]=j;
      return tF; 
    
}
int main(void) {
    int n; cin>>n; 
    int a[n]; for(int i=0; i<n; i++)cin>>a[i];
   int *tF= bruteForce(a,n);
    cout<<tF[0]<<" "<<tF[1]<<endl;
    return (0);
}


