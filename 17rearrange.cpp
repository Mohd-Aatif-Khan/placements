#include<bits/stdc++.h>
using namespace std;

int arrange(int arr[],int n){
    int neg=0,pos=1,i=0;
    while(i<n){
        if(arr[i]<0 &&neg<n){
            swap(arr[i],arr[neg]);
            neg+=2;
        }
        i++;
    }
    i=0;
    while(i<n){
        if(arr[i]>=0 &&pos<n){
            swap(arr[i],arr[pos]);
            pos+=2;
        }
        i++;
    }
}
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[n];
    }
    int ans = arrange(a,n);
    for(int i=0;i<ans;i++){
        cout<<ans<<endl;
    }
    //cout<<"the ans is "<<ans<<endl;
}