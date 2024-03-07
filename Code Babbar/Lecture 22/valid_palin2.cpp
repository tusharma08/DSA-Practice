#include <bits/stdc++.h> 
bool validPalindrome(int n, string &s)
{
    // Write your code here.
    int st = 0;
    int e = n-1;

    while(st<=e) {
        if(s[st]!=s[e]) {
            if(s[st+1]==s[e]) {
                st++;
            }
            else if(s[st]==s[e-1]){
                e--;
            }
            else return false;
        }
        st++;
        e--;
    }
    return true;
}