#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
   int n=prices.size(); 
   int mini=prices[0],maxi=0,ans=0;
   for(int i=1;i<n;i++){
       if(mini<prices[i]){
          maxi=prices[i];
          ans=max(ans,maxi-mini);  
       }
       else{
            mini=prices[i];
       }
   }
   return ans;
}