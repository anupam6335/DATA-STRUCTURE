#include<bits/stdc++.h>
using namespace std;
// leetcode https://leetcode.com/problems/valid-parentheses/
 bool help(char c,char d){
        if(c=='{'){
            if(d=='}')return true;
            else return false;
        }
        else if(c=='['){
            if(d==']')return true;
            else return false;
        }
        else {
            if(d==')')return true;
            else return false;
        }
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='{'||ch=='['||ch=='('){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    char top=st.top();
                    if(help(top,ch)){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        else return false;
    }


// gfg and leetcode
bool isvalid(string s){
    stack<char> st;
        for (int i=0;i<s.size();i++) {
            if (st.empty()) st.push(s[i]);
            else if ((s[i]==')'&&st.top()=='(')||(s[i]=='}'&&st.top()=='{')||(s[i]==']'&&st.top()=='[')) {
                st.pop();
            }
            else st.push(s[i]);
        }
        if (st.size()) return false;
        return true;
}
int main(void){
    string n; cin>>n; 
    cout<<isValid(n);
    return (0);
}

 