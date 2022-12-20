//find kth max and kth min element of an array
//tc ->0(n log k) sc->0(n)
#include<bits/stdc++.h>
using namespace std;

  int kthSmallest(int arr[], int l, int r, int k) {
        //code here

   priority_queue<int> maxheap;
        for(int i=l;i<=r;i++){
            maxheap.push(arr[i]);
            if(maxheap.size()>k){
                maxheap.pop();
            }
        }
        return maxheap.top();
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