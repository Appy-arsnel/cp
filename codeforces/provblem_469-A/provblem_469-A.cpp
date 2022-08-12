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
 int N;
 cin >> N;
 
 int levels_passed[N];
 
 FOR(i,N){
    levels_passed[i]=0;
 }
 int p1,p2;
 cin>>p1;
int level1[p1];
FOR(i,p1){
    cin>>level1[i];
 }
 
 FOR(i,p1){
    levels_passed[level1[i]-1]=1;
 }
 cin>>p2;
 int level2[p2];
 FOR(i,p2){
    cin>>level2[i];
 }
 FOR(i,p2){
        levels_passed[level2[i]-1]=1;

 }
 FOR(j,N){
    if(levels_passed[j] == 0){
        cout<<"Oh, my keyboard!";
        exit(0);
    }
 }
 cout<<"I become the guy.";
 return 0;
}

