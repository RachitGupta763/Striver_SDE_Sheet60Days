
#include<vector>
using namespace std;


void setZeros(vector<vector<int>> &matrix)
{

	int n=matrix.size();
	int m=matrix[0].size();
	vector<vector<int>> matrix1(n,vector<int>(m,-1));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			matrix1[i][j]=matrix[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix1[i][j]==0){
                 for(int x=0;x<m;x++){
					 matrix[i][x]=0;
				 }
				 for(int y=0;y<n;y++){
					 matrix[y][j]=0;
				 }
			}
		}
	}

}