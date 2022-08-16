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
 int n;
 cin>>n;
 int squad[n];
 FOR(i,n)
 cin>>squad[i];

 int min=0,max=0,g_min,h_max;
 FOR(i,n){
    if(min>squad[i])
    {
        g_min=i;
        min=squad[i];
    }
    

 }
 cout<<g_min<<endl;
 int ans=0,temp,a;
 for(int i=g_min;i<n-1;i++){
   squad[i]=temp;
   squad[i]=squad[i+1];
   squad[i+1]=temp;
   g_min++;
   ans++;
 }
 cout<<ans;
 FOR(i,n){
    if(squad[i]>max)
    {
        h_max=i;
        max=squad[i];
    }
 }
 ans+=h_max;
 cout<<ans;
 return 0;
}
