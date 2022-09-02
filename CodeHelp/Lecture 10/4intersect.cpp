// Q:
#include<bits/stdc++.h>
using namespace std;

// bruteForce

vector<int> help2(vector<int>a1,int n, vector<int>a2,int m){
    vector<int> ans;
    for(int i=0;i<n;i++){
        int el = a1[i];

        for(int j=0;j<m;j++){
            if(el<a2[j]) break;

            if(el == a2[j]){
                ans.push_back(el);
                a2[j]=INT_MIN;
                break;
            }
        }
    }
    return ans;
}

vector<int> help(vector<int>a1, vector<int>a2){

    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    int a1Size = a1.size();
    int a2Size = a2.size();

    vector<int> ans;

   int i,j; i=j=0;

   while(i<a1Size && j<a2Size){
    if(a1[i] == a2[j]) {ans.push_back(a1[i]); i++; j++;}
    else if (a1[i] < a2[j]) i++;
    else j++;
   }
    return ans;
}


int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
    // Your code goes here
    unordered_set<int> st;
    int ans=0;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        if(st.find(b[i])!=st.end())
        {
        ans++;
        st.erase(b[i]);
            
        }
    }
    return ans;
}

int main(void){
    int n,m; cin>>n>>m;
    vector<int> in1,in2;

    for(int i=0; i<n; i++){ 
        int data; 
        cin>>data; 
        in1.push_back(data);
    }
    for(int i=0; i<m; i++){ 
        int data; 
        cin>>data; 
        in2.push_back(data);
    }
    vector<int> output = help(in1,in2);
    for(auto i:output) cout<<i<<" ";

    cout<<endl;
    cout<<output.size()<<endl;
    return 0;
}


/* 
    this input working in vscode but not working gfg
42 68
34 45 73 38 39 62 64 69 56 51 59 63 52 71 68 70 58 41 37 48 40 72 44 60 47 46 54 43 35 49 55 67 65 75 74 36 61 66 57 53 42 50
52 62 103 44 70 67 92 77 56 69 101 57 105 49 66 60 40 58 104 80 75 95 71 89 86 73 84 97 88 90 93 48 63 74 79 45 41 98 81 87 76 55 85 43 64 96 72 59 83 107 46 61 50 54 102 82 78 68 51 53 42 91 47 106 99 100 65 94 */