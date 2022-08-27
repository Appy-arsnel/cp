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
 int T,flag,ans=0;
 cin >> T;
 while (T--) {
 int s;
 cin>>s;
 int ans=0,b=1,flag=0;
 int n=0;
for(int j=1;j<=9;j++){
    n=0;
 for(int k=0;k<4;k++){
    
    n+=b*pow(10,k);
    //cout<<n<<endl;
     ans+=k+1;
     if(n==s){
        cout<<ans<<endl;
        flag=1;
        break;

    }
   
 }
 b++;
 if(flag==1){
    break;
 }
}
 }
 return 0;
}
