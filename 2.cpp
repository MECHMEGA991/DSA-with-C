#include<iostream>

// Reverse an array

using namespace std;

void reverse(int arr[],int size){
    
    cout<<"Reverse of array = ";
    for(int i=size-1;i>=0;i--){
        
    cout<<"\t";
        cout<<arr[i];

    }
    cout<<endl;
    
    
}

int main(){
    
    int n;
    int i;
    cout<<"Enter the size of array ";
    cin>>n;
    
    int arr2[n];
    
    for( i=0;i<n;i++){
        
        cin>>arr2[i];
        
    }
    cout<<"Your input array =";
    for( i=0;i<n;i++){
    cout<<"\t";
     cout<<arr2[i];
    
    }
    cout<<endl;
    reverse(arr2,n);
    return 0;
}
