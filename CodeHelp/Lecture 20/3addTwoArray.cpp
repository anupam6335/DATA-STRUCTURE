// Q:
#include<bits/stdc++.h>
using namespace std;


void help(vector<int>& a, int n, vector<int>&b, int m){
   vector<int>c;

   int i = n - 1, j = m - 1;
   int carry = 0;
   while(i>=0 and j>=0) {

    int sum = a[i] + b[j] + carry;
    carry = sum/10;
    sum %=10;

    c.push_back(sum);
    i--,j--;
   }

   // first case large array a
   while(i>=0){

    int sum = a[i] + carry;
    carry = sum/10;
    sum = sum % 10;

    c.push_back(sum);
    i--;
   }

   // second  case large array b
   while(j>=0){

    int sum = b[j] + carry;
    carry = sum/10;
    sum = sum % 10;

    c.push_back(sum);
    j--;
   }
   // second  case carry
   while(carry !=0){

    int sum =  carry;
    carry = sum/10;
    sum = sum % 10;

    c.push_back(sum);
   }

   reverse(c.begin(),c.end());

   for(int i = 0; i < c.size();i++) cout<<c[i]<<" ";
}

int main(void){
    int n,m; cin >>n>>m;
    vector<int>a,b;

    for(int i=0; i<n; i++){int val; cin>>val; a.push_back(val);}
    for(int i=0; i<m; i++){int val; cin>>val; b.push_back(val);}
    help(a,n,b,m);
    return 0;
}
