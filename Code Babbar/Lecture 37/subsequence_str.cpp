Using Bit manupilation

#include <bits/stdc++.h>
vector<string> subsequences(string str)
{
    int n = str.length();
    vector<string> ans;
    for (int i = 1; i < (1 << n); i++) // it willll run 2^n-1 times
    {
        string s = "";
        for (int bit = 0; bit < n; bit++) // for every i we check its // all bits 0th,1st,2nd,3rd.…
        {
            if (i & (1 << bit))
            {
                s += str[bit];
            }
        }
        ans.push_back(s);
    }
    return ans;
}

// Uisng Recursion

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void solve(vector<string>& ans, string str, string output, int i) {
//     //base case
//     if(i>=str.length()) {
//         if(output.length()>0)
//         ans.push_back(output);
//         return ;
//         }
    
//     //exclude
//     solve(ans, str, output, i+1);
//     //include
//     output.push_back(str[i]);
//     solve(ans, str, output, i+1);
// }

// vector<string> subsequences(string str){
	
// 	vector<string> ans;
//     string output = "";
//     solve(ans,str,output,0);
//     return ans;
	
// }

// int main() {
//     string str = "tushar";
//     vector<string> ans =  subsequences(str);
//     for(int i=0;i<str.size();i++) {
//         cout<<str[i]<<endl;
//     }
//     return 0;
// }