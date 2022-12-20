//love babbar 450 questions 
//1)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],i;
    for(  int i=0;i<n;++i){
        cin>>a[i];
    }
    i=0;
    int j=n-1;
    while(i<=j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;++i){
      
        cout<<a[i]<<" "<<endl;
    }
return 0;
}