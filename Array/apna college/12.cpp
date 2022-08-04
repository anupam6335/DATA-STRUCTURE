// Maximum and Minimum Element in an Array

#include<bits/stdc++.h>
#define int long long int 
#define f first
#define s second
#define pb push_back
#define tr int t; cin>>t; while(t--)
using namespace std;

int32_t main(){

    vector<int>v;int n; cin>>n;
    for(int i = 0; i<n;i++){
        int val; cin>>val; v.pb(val);
    }
    int min= v[0];
    int max = v[0];
    for(int i = 1; i<=n-1;i++){
        if(min>v[i]) min=v[i];
        else if(max<v[i]) max=v[i];
    }
	cout<<min<<" "<<max<<endl;
	return 0;
}

