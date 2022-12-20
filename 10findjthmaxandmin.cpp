//find kth max and kth min element of an array
#include<bits/stdc++.h>
using namespace std;
//l=starting index
//r=ending index

  int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int ans=0;
        int n=r-l+1;
        sort(arr,arr+n);
       //ye to min hai
        ans=arr[k-1]; //for max arr[n-k]
        return ans;
    }


int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
      int k;
      cin>>k;
     kthSmallest(arr,0,n-1,k);
       
        
          return 0;
    }

}