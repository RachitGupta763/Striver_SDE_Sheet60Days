string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    int sum=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int k=j+1;
            int l=n-1;

            while(k<l){
                   sum=arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target)return "Yes";
                    else if (sum < target) k++;
                    else l--;
            }

            
        }
    }
    return "No";
}