/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    
    
    /*int i,j,n;
    cin>>n;
    int count=1;
    
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }*/
    
    
    
    
    
    
   /* 
    int i,j,n;
    cin>>n;
    
    i=1;
    while (i<=n){
        j=1;
        while (j<=n){
            //cout<<j;
            cout<< n-j+1;
            j++;
        }
        
        cout<<endl;
        i++;
    }*/
    
    
    
    
    
    /*int row=1;
    
    while(row<=n){
        int col=1;
        char start='A'+n-row;
        
        while(col<=row){
            cout<<start;
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }*/
    
    /*int row=1;
    while (row<=n){
        int space =n-row;
        while(space){
            cout<<" ";
            space--;
        }
        
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        
        cout<<endl;
        row++;
        
    }*/
    
    
    /*for (int row=1; row<=n; row++){
        for(int col=n+1; col>row;col--){
            cout<<"*";
        }
        cout<<endl;`
    */
    
    
    /*int row=1;
    
    while(row<=n){
        
        int col=1;
        while(col<=row){
           cout<<"*"; 
           col++;
        }
        cout<<endl;
        row++;
        
    }*/
    
    
    
    
    
    // IMPORTANT 
    
    int row=1;
    
    while(row<=n){
        
        // print space 1st
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
        
    
        //print 2nd triangle 
        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }
        
        
        
        
        //print 3rd triangle
        int start=row-1;
        while(start){
            cout<<start;
            start--;
        }
        
        
        cout<<endl;
        row++;
    }
    
    
    
    

    
    
    
}


