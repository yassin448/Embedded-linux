#include <iostream>
using namespace std;
int main(){

cout<<"enter number :";
int num=0;
int arr[5]={1,2,3,4,5};
cin>>num;

for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){

if(num==arr[i]){

cout<<"number was found in the array "<<arr[i]<<endl;
break;
}
}

}