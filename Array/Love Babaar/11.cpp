// find the union and intersection of the two sorted arrays 

#include<bits/stdc++.h>
using namespace std;

int DoUnion(int a[], int n, int b[], int m){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=0;i<m;i++){
        mp[b[i]]++;
    }
    return mp.size();
}

int doUnion(int a[], int n, int b[], int m)  {
    int s[100001]={0},r=0;
    for(int i=0; i<n; i++){
        s[a[i]]++;
    }
    for(int i=0; i<m; i++){
        s[b[i]]++;
    }
    for(int i=0; i<100001; i++){
        if(s[i]>0)
            r++;
    }
    return r;
}
int main(void) {
    int n,m; cin>>n>>m;
    int a[n],b[m];
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < m; i++) cin>>b[i];
    int count = DoUnion(a, n, b, m);
    cout<<count<<" "<<endl;
    return (0);
}