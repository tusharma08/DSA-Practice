#include<iostream>
using namespace std;

char maxOccur(string &s)
{
    int arr[26] = {0};
    int num = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            num = s[i] - 'a';
            arr[num]++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            num = s[i] - 'A';
            arr[num]++;
        }
    }

    int maxi = 0;
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] > arr[maxi])
        {
            maxi = i;
        }
    }
    
    return maxi + 'A';
}

int main()
{
    string s;
    cin >> s;

    cout << maxOccur(s) << endl;
    return 0;
}
