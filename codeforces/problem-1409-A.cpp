
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int t,ans;
     int a,b;
    cin>>t;
    
    while(t>0){
        ans=0;
        cin>>a>>b;
       
       
       if(a>b){
           ans=((a-b)/10);
           if((a-b)%10!=0)
           ans++;
           
       }
       else if(a<b){
           ans=((b-a)/10);
            if((b-a)%10!=0)
           ans++;
       }
       cout<<ans<<"\n";
       
       t--;
    }    
    return 0;
}
