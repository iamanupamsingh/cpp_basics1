#include <bits/stdc++.h>

using namespace std;
int main()
{
    /*int a=4;
    int b=6;
    
    cout<< "a&b: " << (a&b) << endl;
    cout<< "a|b: " << (a|b) << endl;
    cout<< "~a: " << (~a) << endl;
    cout<< "a^b: " << (a^b) << endl;
    
    cout<< (17<<2)<<endl;
    cout<< (17>>1)<<endl;
    cout<< (17>>2)<<endl;
    */
    
    // printning counting upto n
    
    /*int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    */
    
    // ALTERNATE 
    
    /*int n;
    cin>>n;
    
    int i=1;
    
    for ( ; ; ) {
        
        if(i<=n)
        { cout<<i<<" ";}
        
        else{
        break;
        }
        
        i++;
    }
    */

    
    /*for (int a=0, b=1 ; a>=0 && b>=1 ; a--,b--){
        cout<<a<<" "<<b;
    }*/
    
    
   /* int n;
    cin>>n;
    
    int sum=0;
    
    for(int i=1; i<=n; i++){
        sum=sum+i;    // sum += i;
    }
    cout<<sum;
    */
    
    
    // FIBBONACCI
    
    /*int n;
    cin>>n;
    
    int a=0;
    int b=1;
    
    for (int i=1;i<=n;i++){
        cout<<a<<" ";
        int fs =a+b;
        a=b;
        b=fs;
    }*/
    
    
    
    // PRIME NO.
    
    /*int n;
    cin>>n;
    
    bool isPrime=1;
    
    for (int i=2; i<n; i++){
        if(n%i==0){
            
            isPrime=0;
            break;
        }
        
    }
    
    if(!isPrime){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }*/
    
    
    
    
    
    // DECIMAL - BINARY 
   
   int n;
   cin>>n;
   
   int i=0;
   int ans=0;
   
   while(n!=0){
       
       int bit= n & 1;
       ans= (bit * pow(10,i)) + ans;
       
       n=n>>1;
       i++;
       
   }
   cout<<ans;
   
   
    
}


