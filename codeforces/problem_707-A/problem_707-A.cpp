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
 int n,m;
 cin>>n>>m;
 char a[n][m];
 int ans[n][m];
 FOR(i,n)
 FOR(j,m){
    cin>>a[i][j];
    ans[i][j]=0;
 }
    FOR(i,n)
  FOR(j,m){
    if(a[i][j]=='W'|| a[i][j]=='G'||a[i][j]=='B' ){
        ans[i][j]=1;
    }
 }
 int flag=0;
 FOR(i,n)
   FOR(j,m){
    if(ans[i][j]==0){
        flag=1;
    }
   }
   if(flag==1)
   cout<<"#Color";
   else
   cout<<"#Black&White";
 return 0;
}
