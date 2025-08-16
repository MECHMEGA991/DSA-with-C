#include<iostream>

// max and min in an array

using namespace std;

int Max(int arr[5]){
    int i;
    int max =0 ;
        for(i=0;i<5;i++){
            
           if(max<=arr[i]){
               max=arr[i];
           } 
            
        }
    
    return max;
}
int Min(int arr[5]){
    int i;
    int min ;
        for(i=0;i<5;i++){
            
           if(min>=arr[i]){
               min=arr[i];
           } 
            
        }
    
    return min;
}

int main(){
    
    int arr[5]={32,3,98,45,10};
    
    int max=Max(arr);
    cout<<"Max value = "<<max<<endl;
    int min=Min(arr);
    cout<<"Min value = "<<min<<endl;
    
    
    
    return 0;
}
