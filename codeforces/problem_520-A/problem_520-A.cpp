#include <bits/stdc++.h>
using namespace std;
// #define max(a, b) (a < b ? b : a)
// #define min(a, b) ((a > b) ? b : a)
// #define mod 1e9 + 7
 #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
// #define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
// #define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
// #define INF 1000000000000000003
// typedef long long int ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// #define F first
// #define S second
// #define PB push_back
// #define POB pop_back
// #define MP make_pair
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
   int a[26]={0};
 int n,diff;
 cin >> n;
 string s;
 cin>>s;
 transform(s.begin(),s.end(),s.begin(),::tolower);
 FOR(i,s.length()){
 diff=(int)s[i]-'a';
 a[diff]=1;
 }
 int flag=0;
 FOR(i,26)
 if(a[i]==0)
 flag=1;

 if(flag==0){
    cout<<"YES";
 }else{
    cout<<"NO";
 }
 return 0;
}
