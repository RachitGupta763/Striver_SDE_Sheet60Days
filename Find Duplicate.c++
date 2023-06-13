#include <bits/stdc++.h> 

using namespace std;
int findDuplicate(vector<int> &arr, int n){

    int count[n+1]={0};
    for(int i=0; i<n ;i++){
        if(count[arr[i]]==0){
            count[arr[i]]++;
        }
        else{
              return arr[i];
        }

    }
    return 0;
}
/*int findDuplicate(vector<int> &arr, int n){

    sort(arr.begin(), arr.end());
    for(int i=0; i<n ;i++){
        if(arr[i]==arr[i+1]);
        return arr[i];
        break;
    }
    return 0;
}*/