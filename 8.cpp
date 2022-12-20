//coding ninjas
//array sum
#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter a number";
    cin>>n;

    
    int sum=0;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];

        sum=sum+input[i];
}
    cout<<sum<<endl;
}


