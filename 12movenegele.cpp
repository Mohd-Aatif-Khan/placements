//move all negative elements to zero

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int l=0,r=n-1;

   while(l<r){
    if(arr[l]<0 &&arr[r]>0){  //n p ok
        l++;
        r--;
    }else if(arr[l]>0 && arr[r]<0){ //p n not ok swap
        swap(arr[l],arr[r]);
        l++;
        r--;
    }else if(arr[l<0] && arr[r]<0){ //n n ok
        l++;
    }
    else{
        r--;
    }
   }
   
   //print
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
   }
   return 0;
   
}
   
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;

    for(int i=0;i<n;i++){
        if(a[i]<0){
            swap(a[i],a[j]);
            j++;
        }
    }

for(int i=0;i<n;i++){
    cout<<a[i]<<" "<<endl;
}
}*/