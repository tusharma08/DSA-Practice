#include<iostream>
using namespace std;

bool check(string s,int i,int j)
{
    if(i>j) return true;
    if(s[i]!= s[j]) return false;
    i++;
    j--;
    check(s,i,j); 
}

int main()
{
    string s = "TussuT";

    if(check(s,0,s.size()-1)) cout<<"Plaindrome"<<endl;
    else cout<<"Not"<<endl;

    return 0;
}