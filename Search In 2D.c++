bool searchMatrix(vector<vector<int>>& mat, int target) {

   int n=mat.size();
   int m=mat[0].size();
   int i;
   for(i=0;i<n;i++){
       if(mat[i][m-1]>target)break;

       else if(mat[i][m-1]==target)return true;
   }
   if(i==n)return false;
   
   for(int j=0;j<m;j++){
       if(mat[i][j]==target)return true;
   }
   return false;
}