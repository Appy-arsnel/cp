#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 int T;
 cin >> T;
 string s,s1;
 while (T--) {
  int n,flag=0,f=0,check=-1;
  cin>>n>>s1;
  s=s1;
  if(n!=5){
      cout<<"NO"<<endl;
    continue;
  }
 
    FOR(i,n){
        if(s1[i]=='T'){
            f=0;
            continue;
        }
        else if(s1[i]=='t'){
            f=-1;
            continue;
        }
      check= (int) s[i]-(int)tolower(s[i]);
       if(check!=0){
            f=-1;
        }
    }
    if(f!=0){
        cout<<"NO"<<endl;
        continue;
     }

      transform(s.begin(),s.end(),s.begin(),::tolower);

  FOR(i,n){
    if(s[i]!='t'){
        if(s[i]!='i')
        if(s[i]!='m')
        if(s[i]!='u')
        if(s[i]!='r'){
            flag=1;
        break;
        }
        
    }

     
  }
 if(flag==0||f==0)
    cout<<"YES"<<endl;
    if(flag==1)
    cout<<"NO"<<endl; 
  
 }
 return 0;
}
