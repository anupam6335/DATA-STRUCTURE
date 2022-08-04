// Reverse the Array
#include<bits/stdc++.h>
using namespace std;
vector<int> create(int n){
    vector<int>v;
    for(int i = 0; i<n;i++){
        int val; cin>>val; v.push_back(val);
    }
    return v;
}
vector<int> reverse(vector<int> v){
    int i, j; i = 0; j = v.size()-1;
    while(i<j){
        swap(v[i++],v[j--]);
    }
    return v;
}

string rstring(string s){
    int i, j; i = 0; j = s.length()-1;
    while(i<j){
        swap(s[i++],s[j--]);
    }
    return s;
}

int main(){
    // int n; cin>>n;
    // vector<int>v = create(n);
    // v = reverse(v);
    vector<char>v;
    string s; cin>>s;
    s = rstring(s);
    cout<<s;
}