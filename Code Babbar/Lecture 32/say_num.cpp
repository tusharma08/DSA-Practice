#include<iostream>
using namespace std;

int say(int n)
{
    if(n<=0) return 0 ;

    int digit = n%10;
    n /= 10;
    say(n);
    cout<<digit<<endl;  //isme digit ki replace me mapped string use karenge to print digit in words
}

int main()
{
    int num;
    cin>>num;

    say(num);

    return 0;
}