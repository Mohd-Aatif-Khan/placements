//love babbar
//find unique
#include<iostream>
#include<climits>
using namespace std;
void printArray(int input[],int n){
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;

int findUnique(int *arr, int size)
{
   int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
        printArray(arr,size);
        findUnique(arr,size);

				}
	return ans;
}
