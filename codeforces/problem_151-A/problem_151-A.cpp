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
 int n, k, l, c, d, p, nl, np,toasts =0,p_r,k_r;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 int kl,cd;
 p_r=np*n;
 kl=k*l;
 cd=c*d;
 k_r=nl*n;
 while(kl>=k_r&&cd>=n&&p>=p_r){
    kl=kl-nl*n;
    p=p-np*n;
    cd=cd-n;
   
     
    toasts++;
 }
  if(n==1)
 cout<<toasts;
 else{
    cout<<toasts;
 }

 return 0;
}
