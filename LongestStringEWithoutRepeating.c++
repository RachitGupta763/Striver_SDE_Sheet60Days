#include <bits/stdc++.h> 
#include <unordered_set> 
int uniqueSubstrings(string input)
{
    if(input.size()==0)
        return 0;

    unordered_set<int>MySet;
    int maxi=INT_MIN;

    int jumpCount=0;
    for(int cnt=0;cnt<input.size();cnt++){
        if(MySet.find(input[cnt])!=MySet.end()){

            while(jumpCount<cnt && MySet.find(input[cnt])!=MySet.end()){
                MySet.erase(input[jumpCount]);
                jumpCount++;
            }
        }
         MySet.insert(input[cnt]);
         maxi=max(maxi,cnt-jumpCount+1);
    }
    return maxi;
}