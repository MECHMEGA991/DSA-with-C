#include<iostream>
#define SIZE 7

using namespace std;

// binary search

void binary(int arr[SIZE],int n){
    
    
    int lower =0;
    int higher = SIZE-1;
    
    
    while(lower<=higher){
        
    int mid=(lower+higher)/2;
    
        if(arr[mid]==n){
            cout<<"Element Found at mid "<<mid;
            break;
        }
        else if(n<arr[mid]){
            
            higher=mid-1;
            
        }
        else{
            lower=mid+1;
        }
        
    }
  
  
    
}


int main(){
    int arr[SIZE]={12,20,34,56,86,98,100};
    int n;
    cout<<"Enter the element u want too search=";
    cin>>n;
    
    binary(arr,n);
    
    
    return 0;
}
