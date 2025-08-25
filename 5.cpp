#include<iostream>

using namespace std;

// insert element at kth position

int main(){
    
    int arr[5]={1,2,3,4,5};
    int i;
    
    int k,b;
    
    cout<<"Enter the position u want to insert ";
    cin>>k;
    
    cout<<"Enter the element u want to insert =";
    cin>>b;
    
    cout<<"The input array "<<endl;
    for(i=0;i<5;i++){
    
    cout<<arr[i]<<" ";
        
    }
    for(i=0;i<5;i++){
        if(i==k){
            arr[i]=b;
            break;
        }
        
    }
    cout<<endl;
    cout<<"New Array"<<endl;
    for(i=0;i<5;i++){
        
        cout<<arr[i]<<" ";
    }
    return 0;
}
