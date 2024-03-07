#include<iostream>
using namespace std;

void rev(string &s,int i,int j)
{
    if(i>j) return ;

    swap(s[i],s[j]);
    i++;
    j--;
    rev(s,i,j); 
}

int main()
{
    string s = "Tushar";

    rev(s,0,5);
    cout<<s<<endl;

    return 0;
}