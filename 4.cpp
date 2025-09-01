#include<iostream>

// linear search 

using namespace std;

int main(){
int size , i , n;

cout<<"Enter the size =";
cin>>size;

int arr[size],store[size];

int flag =0;

cout<<"Enter the elements of array :"<<endl;

for(i=0;i<size;i++){
    cin>>arr[i];
}
cout<<"Enter the Elements U want to search ";
cin>>n;

for(i=0;i<size;i++){
    if(arr[i]==n){
        store[flag]=i;
        flag++;
        
    }
    
}
    if(flag == 0){
        cout<<"Elemnt not found";
    }

    else{
    cout<<"Element found at : "<<endl;
    for(i=0;i<flag;i++){

        cout<<store[i]<<endl;
    }
        
        
    }
    return 0;
    }
