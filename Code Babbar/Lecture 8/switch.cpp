#include<iostream>
using namespace std;

int main()
{  
    int n;
    cout<<"Choose the option"<<endl;
    cin>>n;

    switch (n)
    {
    case /* constant-expression */1:
        /* code */
        {
            cout<<"first"<<endl;
            break;
        }

    case /* constant-expression */2:
        /* code */
        {
            cout<<"second"<<endl;
            break;
        }
    
    default:
        break;
    }

    return 0;
}