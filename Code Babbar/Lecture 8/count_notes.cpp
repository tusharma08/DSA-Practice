#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"Enter the amount"<<endl;
    cin>>amount;

    int a,b,c,d;

    switch (1)
    {
        case 1:
        a = amount/100;
        amount = amount - (a*100);
        cout<<a<<endl;

        case 2:
        b = amount/50;
        amount = amount - (b*50);
        cout<<b<<endl;

        case 3:
        c = amount/20;
        amount = amount - (c*20);
        cout<<c<<endl;

        case 4:
        d = amount/1;
        amount = amount - (d*1);
        cout<<d<<endl;
        break;
    }
    return 0;
}