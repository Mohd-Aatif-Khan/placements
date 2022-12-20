//maxium and minimum element in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
   cin>>a[i];
    }

    int mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(mn>a[i]){
            mn=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(mx<a[i]){
            mx=a[i];
        }
    }
   cout<<"minimum"<<mn<<endl;
   cout<<"maximum"<<mx<<endl;
   return 0;
}