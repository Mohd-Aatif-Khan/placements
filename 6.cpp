//love babbar 
//linear search
#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
}
return 0;
}
int main(){
    int arr[10]={5,7,-2,10,22,-2,3,5,22,1};
    cout<<"enter a number";
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"key is present";

    }else{
        cout<<"key is absent";
    }
    return 0;
}