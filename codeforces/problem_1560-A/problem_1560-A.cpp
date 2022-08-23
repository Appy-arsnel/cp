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
 int T,n;
 cin >> T;
 int ans[T],k=0,c;
 while (T--) {
    cin>>n;
    if(n%3==0){
        ans[k]=n+1;
        k++;
        continue;
    }
    c=n%10;
    if(c%10==3){
         ans[k]=n+1;
        k++;
        continue;
    }
    ans[k]=n;
    k++;
 }
 for(auto it:ans)
 cout<<it<<endl;
 return 0;
}
