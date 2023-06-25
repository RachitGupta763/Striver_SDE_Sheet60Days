#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int k) {
	  vector<vector<int>> res; 
      sort(arr.begin(), arr.end()); 
       if(n<3)return {};
	  
	  for(int i=0;i<n-2;i++){
		  
		  if(i==0 || (i>0 && arr[i]!=arr[i-1])){
			  int start=i+1;
			  int end=n-1;
			  while(start<end){
				  if(arr[i]+arr[start]+arr[end]==k){
					    vector<int> temp; 
                        temp.push_back(arr[i]); 
                        temp.push_back(arr[start]); 
                        temp.push_back(arr[end]); 
                        res.push_back(temp);

						 while(start<end && arr[start]==arr[start+1])start++;
				         while(start<end && arr[end]==arr[end-1])end--;

						 start++;
						 end--;
				  }
				  else if(arr[i]+arr[start]+arr[end]<k)start++;
				  else end--;
			  }
		  }
	  }
	 
	  return res;

}