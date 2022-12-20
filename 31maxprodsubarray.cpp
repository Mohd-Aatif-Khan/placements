//maximum product subarray
#include<bits/stdc++.h>
using namespace std;
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ans=INT_MIN;
	    long long prod=1;
	    
	    for(int i=0;i<n;i++)
	    {
	        prod=prod*arr[i];
	        ans=max(ans,prod);
	        if(prod==0)
	        {
	            prod=1;
	        }
	    }
	    prod=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        prod=prod*arr[i];
	        ans=max(ans,prod);
	        if(prod==0)
	        prod=1;
	    }
	    return ans;;
	}
    int main(){
       int n,i;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        int ans =maxProduct(arr,n);
        cout<<ans<<endl;
        return 0;
    }