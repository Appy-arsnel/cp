/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int t,ans_x,ans_y;
     int a,b,c,check;
    cin>>t;
    
    while(t>0){
        
        cin>>a>>b>>c;
        if(b<c)
        check=2*c-b;
        else
        check=b;
        
        if(a==check){
            cout<<3<<"\n";
           
        }
        else if(a<check){
            cout<<1<<"\n";
           
        }
        else{
             cout<<2<<"\n";
        }
       
       t--;
    }    
    return 0;
}
