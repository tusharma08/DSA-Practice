#include<iostream>
#include<stack>
using namespace std;

int main() {
    string s = "Tushar";
    stack<char> st;
    for(int i=0;i<s.length();i++) {
        st.push(s[i]);
    }
    string ans; 
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    cout<<ans<<endl;

    return 0;
}