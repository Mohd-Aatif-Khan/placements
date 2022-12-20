//move all  the negative elements to one side of an array
#include<bits/stdc++.h>
using namespace std;

void segregateelements(int arr[],int n){
     int arr1[n],j=0;
     for(int i=0;i<n;i++){
        if(arr[i]>=0){
            arr1[j]=arr[i];
        j++;
        }
     }

        for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr1[j]=arr[i];
        j++;
        }
     }
     for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
     }

}



int main(){
      int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
}
  segregateelements(arr,n);


  for(int i=0;i<n;i++){
      cout<<arr[i]<<" "<<endl;
  }
}