#include <bits/stdc++.h>
using namespace std;
// #define max(a, b) (a < b ? b : a)
// #define min(a, b) ((a > b) ? b : a)
// #define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
// #define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
// #define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
// #define INF 1000000000000000003
typedef long long int ll;
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
 ll n;
 cin>> n;
 unordered_map<string,int> a={ {"Tetrahedron", 4},
            {"Cube", 6},
            {"Octahedron", 8},
            {"Dodecahedron", 12},
            {"Icosahedron", 20}};

int ans=0;
 string arr[n];
 FOR(i,n){
    cin>>arr[i];
}
 FOR(i,n){
    auto it =a.find(arr[i]);
    ans=ans+it->second;
 }
 cout<<ans<<endl;
 return 0;
}
