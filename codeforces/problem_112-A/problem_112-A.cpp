#include <bits/stdc++.h>
using namespace std;
// #define max(a, b) (a < b ? b : a)
// #define min(a, b) ((a > b) ? b : a)
// #define mod 1e9 + 7
// #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
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
 string s1,s2;
 cin>>s1;
 cin>>s2;
    
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
 transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

 if(s1==s2){
    cout<<"0";
 }
 else if(s1>s2){
    cout<<"1";
 }
 else {
    cout<<"-1";
 }
 return 0;
}
