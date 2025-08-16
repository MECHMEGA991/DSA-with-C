#include<iostream>

// sum of an array

using namespace std;

int main(){
    
    int i,sum=0;
    int arr[]={23,76,54,88,12,45};
    int size = sizeof(arr)/sizeof(arr[0]);
   
   for(i=0;i<size;i++){
       
       sum = sum + arr[i];
       
   }
    
    cout<<"Sum of array ="<<sum;
    
    return 0;
}
