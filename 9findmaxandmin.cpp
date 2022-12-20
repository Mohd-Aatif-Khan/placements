//find max and minimum element in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int min=INT_MAX;int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(min>arr[i])
            min=arr[i];
        }
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        cout<<"the max is "<<max<<endl;
        cout<<"the min is" <<min<<endl;
    }
  

}