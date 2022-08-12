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
 int n;
 cin>>n;
 int entry_exit[n][2],current_capacity=0,max_capacity=0;
  FOR(i,n){
    FOR(j,2)    
 cin>>entry_exit[i][j];
  }
 
 FOR(i,n){
    current_capacity-=entry_exit[i][0];
    current_capacity+=entry_exit[i][1];
    if(current_capacity>max_capacity){
        max_capacity=current_capacity;
    }
    
 }
 cout<<max_capacity;
 return 0;
}
