// merger intervals
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
      int n= intervals.size();
      if(n==0) return intervals;
      sort(intervals.begin(), intervals.end());
      vector<vector<int>>output;
      int s,e; // In 2D vector s = first value, e = second value
      for(int i=0;i<n;i++){
          s=intervals[i][0];
          e=intervals[i][1];
          while(i<n-1 and intervals[i+1][0]<=e) {
              e=max(e,intervals[i+1][1]);
               i++;
          }
        output.push_back({s,e});
      }  
      return output;
}
int main(void){
    int n,m; cin>>n>>m;
    vector<vector<int> > intervals;
    int val;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < m; j++){
            cin >> val;
            temp.push_back(val);
        }
        intervals.push_back(temp);
        temp.clear();
    }
    vector<vector<int>>output=merge(intervals);
    for(int i=0;i<output.size();i++) {
        for(int j=0;j<output[i].size();j++) {
            cout<<output[i][j]<<" ";
        }
    }
    return (0);
}