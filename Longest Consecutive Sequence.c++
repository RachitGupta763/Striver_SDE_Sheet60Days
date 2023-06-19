#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(nums[i]);
    }
    int ans=0;
    for(int j=0;j<n;j++){
        if(s.find(nums[j]-1)!=s.end()){
            continue;
        }
        else{
            int count=0;
            int current=nums[j];
            while(s.find(current+1)!=s.end()){
                count++;
                current++;
            }
            ans=max(ans,count);
        }
    }
    return ans+1;
}