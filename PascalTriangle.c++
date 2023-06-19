#include <bits/stdc++.h>
vector<long long int> generatePascal(int row){
  vector<long long int>ans;
  long long int val=1;
  ans.push_back(val);
  for(int col=1;col<row;col++){
                  val=val*(row-col);
                  val=val/col;
                  ans.push_back(val);
  }
  return ans;
}
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>res;

  for(int i=1;i<=n;i++){
    res.push_back(generatePascal(i));
  }
  return res;
}
