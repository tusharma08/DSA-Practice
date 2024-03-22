#include <vector>
#include <string>
using namespace std;

class Solution
{
private:
    void solve(string digits, string &output, int index, vector<string> &ans, string mapping[])
    {
        if (index >= digits.size())
        {
            ans.push_back(output);
            return;
        }
        int num = digits[index] - '0';
        string value = mapping[num];
        for (int i = 0; i < value.size(); i++)
        {
            output.push_back(value[i]);
            solve(digits, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        int index = 0;
        string output = "";
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if (digits.size() == 0)
        {
            return ans;
        }
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};
