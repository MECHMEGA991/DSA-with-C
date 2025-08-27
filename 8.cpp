#include<iostream>

using namespace std;

// sparse matrix : majority of elements are non zero;


int main(){


int i,j;
int arr[3][3];

// lower triangular sparxe matrix

cout<<"Lower Triangular sparse matrix :"<<endl;
     
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
      if(i<j){
          arr[i][j]=0;
      }
      else{
          arr[i][j]=1;
      }
        
    }
   
    
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
       cout<<arr[i][j]<<"\t";
        
    }
    cout<<endl;
    
}
// Upper Triabgular sparse matrix
    cout<<"upper Triangular sparse matrix :"<<endl;
    
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
      if(i<=j){
          arr[i][j]=1;
      }
      else{
          arr[i][j]=0;
      }
        
    }
   
    
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
       cout<<arr[i][j]<<"\t";
        
    }
    cout<<endl;
    
}
// Diagonal matrix

    cout<<"diagonal matrix :"<<endl;
    
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        
      if(i==j){
          arr[i][j]=1;
      }
      else{
          arr[i][j]=0;
      }
        
    }
   
    
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
       cout<<arr[i][j]<<"\t";
        
    }
    cout<<endl;
    
}
// Tridiagonal sparse matrix 
    cout<<"Tridiagonal matrix :"<<endl;
    
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        
      if(i==j||i==j+1 || j==i||j==i+1){
          arr[i][j]=1;
      }
      else{
          arr[i][j]=0;
      }
        
    }
   
    
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
       cout<<arr[i][j]<<"\t";
        
    }
    cout<<endl;
    
}
    return 0;
}
