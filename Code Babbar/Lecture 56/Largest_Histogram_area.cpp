// Problem statement
// You have been given an array/list 'HEIGHTS' of length ‘N. 'HEIGHTS' represents the histogram and each element of 'HEIGHTS' represents the height of the histogram bar. Consider that the width of each histogram is 1.

// You are supposed to return the area of the largest rectangle possible in the given histogram.

 #include<bits/stdc++.h>
 vector<int> nextSmallerElement(vector<int> arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=n-1; i>=0 ; i--) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElement(vector<int> arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=0; i<n; i++) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans; 
    }

    int largestRectangle(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        next = nextSmallerElement(heights,n);
        vector<int> prev(n);
        prev = prevSmallerElement(heights,n);

        int ans = INT_MIN;
        for(int i=0;i<n;i++) {
            int l = heights[i];
            if(next[i] == -1) {
                next[i] = n;
            }
            int b = next[i]-prev[i]-1;
            int area = l*b;
            ans = max(area,ans);
        }
        return ans;
    }