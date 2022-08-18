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
 cin >> n;
 int arr[n],officers=0,ans=0,curr,diff;
FOR(i,n)
cin>>arr[i];

FOR(i,n){
    

     if(officers==0 && arr[i]==-1){
        ans++;
    }else{
         officers+=arr[i];
   
     if(officers<0){
        ans++;
         officers=0;
    }
   
    }    

}
cout<<ans;

 return 0;
}
