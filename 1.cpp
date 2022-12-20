//coding ninjas
//taking input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value";
    cin>>n;
   
   int input[100];

   for(int i=0;i<n;i++){
       cin>>input[i];
   }
   for(int i=0;i<100;i++){
       cout<<input[i];
   }
   return 0;
}