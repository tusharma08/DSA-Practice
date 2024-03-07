class Solution{
private: 
    bool ok(vector<vector<int>>& m, vector<string> &ans, string &path, int sx, int sy, vector<vector<int>>& visited, int n) {
        return (sx >= 0 && sx < n && sy >= 0 && sy < n && visited[sx][sy] == 0 && m[sx][sy] == 1);
    }

    void solve(vector<vector<int>>& m, vector<string>& ans, string& path, int sx, int sy, vector<vector<int>>& visited, int n) {
        if (sx == n-1 && sy == n-1) {
            ans.push_back(path);
            return;
        }

        visited[sx][sy] = 1;
        int x, y;

        // down
        x = sx + 1; y = sy;
        if (ok(m, ans, path, x, y, visited, n)) {
            path.push_back('D');
            solve(m, ans, path, x, y, visited, n);
            path.pop_back();
        }

        // right
        x = sx; y = sy + 1;
        if (ok(m, ans, path, x, y, visited, n)) {
            path.push_back('R');
            solve(m, ans, path, x, y, visited, n);
            path.pop_back();
        }

        // left
        x = sx; y = sy - 1;
        if (ok(m, ans, path, x, y, visited, n)) {
            path.push_back('L');
            solve(m, ans, path, x, y, visited, n);
            path.pop_back();
        }

        // up
        x = sx - 1; y = sy;
        if (ok(m, ans, path, x, y, visited, n)) {
            path.push_back('U');
            solve(m, ans, path, x, y, visited, n);
            path.pop_back();
        }

        visited[sx][sy] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>>& m, int n) {
        int sx = 0;
        int sy = 0;
        vector<string> ans;
        if (m[sx][sy] == 0) return ans;
        string path;
        vector<vector<int>> visited(n, vector<int>(n, 0));
        solve(m, ans, path, sx, sy, visited, n);
        sort(ans.begin(), ans.end());
        return ans;
    }
};