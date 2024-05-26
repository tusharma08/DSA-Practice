class Solution
{
    public:
    void solve(queue <int> &q) {
        if(q.empty()) {
            return ;
        }
        int val = q.front();
        q.pop();
        solve(q);
        q.push(val);
    }
    queue<int> rev(queue<int> q)
    {
        // add code here.
        solve(q);
        return q;
    }
};