#include <bits/stdc++.h>

#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define ld long double
using namespace std;
// For ordered_set
template <typename T>
const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);

int main(){
   int k,l,m,n,d;
   cin>>k>>l>>m>>n>>d;
   int dragons[d];
   for(int i;i<d;i++)
   dragons[i]=0;
   int ans=0;
   for(int i=k-1;i<d;i+=k){
      if(dragons[i]==0){
         ans++;
         dragons[i]=-1;
      }

   }
   for(int i=l-1;i<d;i+=l){
      if(dragons[i]==0){
         ans++;
         dragons[i]=-1;
      }

   }
   for(int i=m-1;i<d;i+=m){
      if(dragons[i]==0){
         ans++;
         dragons[i]=-1;
      }

   }
   for(int i=n-1;i<d;i+=n){
     if(dragons[i]==0){
         ans++;
         dragons[i]=-1;
      }

   }
   cout<<ans;
   return 0;
}