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
 while (T--) {
 int n;
 cin>> n;
 int a[n];
 FOR(i,n){
    cin>>a[i];
 }
 int max=a[0],min=a[0];
 FOR(i,n){
    if(a[i]>max){
        max=a[i];
    }
    if(a[i]<min){
        min=a[i];
    }
 }
  cout<<max-min<<endl;
 }
 

 return 0;
}
