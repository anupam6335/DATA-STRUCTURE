//https://practice.geeksforgeeks.org/problems/common-elements1132/1#
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
    int i,j,k; i=j=k=0;
    while(i<n1 and j<n2 and k<n3){
        if(A[i]==B[j] and B[j]==C[k]) {v.push_back(A[i]); i++; j++; k++;}
        else if(A[i]<B[j]) i++;
        else if(B[j]<C[k]) j++;
        else k++;
        
        int x=A[i-1];
        while(A[i]==x)i++;
        int y=B[j-1];
        while(B[j]==y)j++;
        int z=C[k-1];
        while(C[k]==z)k++;
    }
    if(v.size()==0)return{-1};
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

