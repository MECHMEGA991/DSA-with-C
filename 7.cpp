#include<iostream>

using namespace std;

int main(){
    
    int i , j ;
    
    //left-aligned right-angled triangle
    
    for(i=1;i<=5;i++){
        
        for(j=1;j<=i;j++){
            
            cout<<"*";
        }
        
        cout<<endl;
    }
    cout<<endl;
    
    // inverted left-aligned triangle
    
    for(i=5;i>=1;i--){
        
        for(j=1;j<=i;j++){
            
            cout<<"*";
        }
        
        cout<<endl;
    }
    cout<<endl ;
    
    // right-aligned triangle
    
    for(i=1;i<=5;i++){
        
    for(j=i;j<=5;j++){
        cout<<" ";
    }
        
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    cout<<endl;
    
    // inverted right-aligned triangle
    
    for(i=5;i>=1;i--){
        
    for(j=i;j<=5;j++){
        cout<<" ";
    }
        
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    cout<<endl;
    
    // central pyramid
    
    for(i=0;i<5;i++){
        
        for(j=i;j<=5;j++){
            
            cout<<" ";
        
        }
        for(j=0;j<=2*i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    cout<<endl;
    
    // inverted central pyramid
    
    for(i=5;i>=0;i--){
        
        for(j=i;j<=5;j++){
            
            cout<<" ";
        
        }
        for(j=0;j<=2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    // same digit
    
    for(i=0;i<5;i++){
        
        for(j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    
    // increas digit
    int k=1;
    for(i=1;i<=5;i++){
        
        for(j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    // This is a classic left-aligned number triangle, where each row prints numbers from 1 up to the row number.
    
     for(i=1;i<=5;i++){
        
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
    
    return 0;
}
