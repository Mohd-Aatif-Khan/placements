//finf the intersection of two arrays
#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
   vector<int> ans;
   int i = 0,j=0;
   
   while (i<n && j<m) {
       if(arr1[i] == arr2[j]) {
           ans.push_back(arr1[i]);
           i++;
           j++;
       }
       else if (arr1[i] < arr2[j]) {
           i++;
       }
       else {
           j++;
       }
   }    
   return ans;
}
int main(){
          int n,m;
    cin>>n>>m;
    int arr1[n] ,arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
}

   for(int i=0;i<m;i++){
        cin>>arr2[i];
}
  findArrayIntersection(arr1,n,arr2,m);


  for(int i=0;i<n;i++){
      cout<<arr1[i]<<" "<<endl;
  }
  for(int i=0;i<n;i++){
      cout<<arr2[i]<<" "<<endl;
  }
}