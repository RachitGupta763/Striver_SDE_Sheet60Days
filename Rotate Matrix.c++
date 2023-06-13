#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int i=0,j=0,left=0,top=0,right=m-1,bottom=n-1,temp1,temp2;
    while(top<bottom&&left<right) {
    temp1=mat[top][left];
    for(i=left+1;i<=right;i++){
        
        temp2=mat[top][i];
        mat[top][i]=temp1;
        temp1=temp2;
    }
    top++;
    for(i=top;i<=bottom;i++){
        
        temp2=mat[i][right];
        mat[i][right]=temp1;
        temp1=temp2;
    }
    right--;
    for(i=right;i>=left;i--){
        
        temp2=mat[bottom][i];
        mat[bottom][i]=temp1;
        temp1=temp2;
    }
    bottom--;
    for (i = bottom; i >= top; i--) {

      temp2 = mat[i][left];
      mat[i][left] = temp1;
      temp1 = temp2;
    }
    left++;
    mat[top - 1][left - 1] = temp1;
    }
}