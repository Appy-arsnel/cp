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
 int T;
 cin >> T;
  string s[T];

 FOR(i,T) {
 cin >> s[i];
 transform(s[i].begin(),s[i].end(),s[i].begin(), ::toupper);
 if(s[i]=="YES"){
    s[i]="YES";
 }
 else{
   s[i] ="NO";
 }
 }
 FOR(i,T)
 cout<<s[i]<<endl;
 return 0;
}
