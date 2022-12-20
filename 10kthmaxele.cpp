//kth max element
#include<bits/stdc++.h>
using namespace std;


int ksmallest(int arr[],int l,int r,int k){
priority_queue <int> maxheap;
for(int i=l;i<=r;i++){
    maxheap.push(arr[i]);
    if(maxheap.size()>k){
        maxheap.pop();
    }
}
return maxheap.top();

}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    
     cout<<ksmallest(arr,0,n-1,k);
    
}

}