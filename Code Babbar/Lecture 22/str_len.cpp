#include<iostream>
using namespace std;

int main()
{
    char ch[10];
    cin>>ch;

    int len=0;
    for(int i=0;i<10;i++)
    {
        if(ch[i]== '\0') break;
        len++;
    }
    cout<<"Length of ch is"<<len<<endl;

    return 0;
}