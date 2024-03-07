#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    
    int ascii = ch;

    if(ascii>=65 && ascii<=90){
        cout << "Upper Case" << endl;
    }
    else if(ascii>=97 && ascii<=122){
        cout << "Lower Case" << endl;
    }
    else if(ascii>=48 && ascii <=57){
        cout << "Numerical" << endl;
    }
    else{
        cout << "something else" << endl;
    }
}