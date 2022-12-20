//coding ninjas
//linear search
#include<iostream>
using namespace std;
int linearsearch(int *arr,int n,int val){
    for(int i=0;i<n;i++){
        if(val==arr[i]){
            return i;
        }
}
return -1;
}
int main(){
    int arr[10]={5,7,-2,10,22,-2,3,5,22,1};
    cout<<"enter a number";
    int val;
    cin>>val;
    bool found=linearsearch(arr,10,val);
    if(found){
        cout<<"key is present";

    }else{
        cout<<"key is absent";
    }
    return 0;
}