#include<bits/stdc++.h>
using namespace std;
int mxi(int x, int y,int z){
    if(x>y and x>z) return x;
    else if(y>z and y>z) return y;
    else return z;
}
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
    //code here.
    vector<int>v;
    int n=mxi(A[n1-1], B[n2-1], C[n3-1]);
    int hash[n+1]={0};
    for(int i=0; i<n1;i++){
        hash[A[i]]++;
    }
    for(int i=0; i<n2;i++){
        hash[B[i]]++;
    }
    for(int i=0; i<n3;i++){
        hash[C[i]]++;
    }
    for(int i=0; i<=n;i++){
        if(hash[i]>1)v.push_back(i);
    }
    return v;
}

int main(void){
    vector<int>v;
    int n1,n2,n3;cin>>n1;cin>>n2;cin>>n3;
    int A[n1],B[n2],C[n3];
    for(int i=0; i<n1;i++)cin>>A[i];
    for(int i=0; i<n2;i++)cin>>B[i];
    for(int i=0; i<n3;i++)cin>>C[i];
    v=commonElements(A,B,C,n1,n2,n3);
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl;
    return (0);
}

