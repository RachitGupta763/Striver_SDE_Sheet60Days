#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n=intervals.size();

    vector<vector<int>> res;

    sort(intervals.begin(), intervals.end());
    
    for(int i=0;i<n;i++){
        if(res.empty() || intervals[i][0]>res.back()[1])
           res.push_back(intervals[i]);


        else{
            res.back()[1]=max(res.back()[1],intervals[i][1]);
        }
    }
    return res;
}
