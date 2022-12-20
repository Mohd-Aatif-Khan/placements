//kadanes algorithm
#include<bits/stdc++.h>
using namespace std;

  long long maxSubarraySum(int arr[], int n){
        
        // Your code here
         long long maxsum = INT_MIN , sum=0;
         for(int i=0;i<n;i++){
             sum=sum+arr[i];
             maxsum=max(maxsum,sum);
             if(sum<0){
                 sum=0;
             }
         }
         return maxsum;
    }
    int main(){
 int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
   int ans= maxSubarraySum(arr,n);
   cout<<ans<<endl;
   

    }