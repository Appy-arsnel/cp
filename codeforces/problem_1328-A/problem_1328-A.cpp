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
 int a,b,j=0;
 cin >> T;
  int ans[T];

 while (T--) {
 cin>>a>>b;
 for(int i=0;;i++){
    if(a%b==0){
        ans[j]=i+1;
        j++;
        break;
    }
    a=a+1;
 }
 }
 FOR(i,T){
     cout<<ans[i]<<endl;

 }
 return 0;
}
