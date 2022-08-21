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
 int n,m,r,c,flag=0;
 cin>>n>>m;
 char a[n][m];
 c=m;
 r=0;
 FOR(i,n)
 FOR(j,m)
 a[i][j]='.';
 FOR(i,n){
   if(i%2==0){

 FOR(j,m){
    if(i==r)
    a[r][j]='#';

 }
 r+=2;
   }
else{
 if(flag%2==0){
    a[i][m-1]='#';
    flag++;
 }
 else{
    a[i][0]='#';
    flag++;
 }

}
 }
 FOR(i,n){
    FOR(j,m){
        cout<<a[i][j];
    }
    cout<<endl;
 }
 
 return 0;
}
