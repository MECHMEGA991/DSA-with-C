#include<iostream>

using namespace std;

// deletion an element in an array

void indexdelete(int arr[] , int &size ,int index){ // &size use to change the size in main 
    
    for(int i=index;i<size;i++){
        
        arr[i]=arr[i+1];
        
    }
  size--;
    
}

void printarray(int arr[],int size){
    
     for(int i=0;i<size;i++){
        cout<<arr[i];
        if(i<size-1){
            cout<<',';
        }
        
    }   
   
    
}


int main(){
    
    int arr[]={1,2,3,4,5};
    int size=5;
    
    cout<<"Original array :"<<endl;
    printarray(arr,size);
    cout<<endl;
    
    cout<<"after deletion at index 2 :"<<endl;
    
    indexdelete(arr,size,2);
    
    printarray(arr,size);
    
    return 0;
}
