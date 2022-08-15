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
string rev(string su){
    string s1;
    for(int i=su.length()-1;i>=0;i--){
        s1+=su[i];
    }
    return s1;
}
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 int T;
 cin >> T;
  int K,N,n=0;
 string s;
    int ans[1000000];
 while (T--) {
 cin >>N>>K>>s;
    FOR (i,K)
    {
        s+=rev(s);
    }
     unordered_set<char> sh;
   FOR(i,s.length()){
    sh.insert(s[i]);
   }
   ans[n]=(int)sh.size();
   n++;
 }
 FOR(i,n-1){
     cout<<ans[i]<<endl; 
 }
  
 return 0;
}
