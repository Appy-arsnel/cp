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
 int arr[4],arr_new[3];
 int a,b,c,sum,max;
 FOR(i,4)
 cin>>arr[i];

 max=arr[0];

 for(int i=1;i<4;i++){
    if(max<arr[i]){
        max=arr[i];
        sum=i;
    }
 }
 int j=0;
FOR(i,4)
if(i!=sum){
    arr_new[j]=arr[i];
    j++;
}

 c=max-arr_new[0];
 a=max-arr_new[2];
 b=max-c-a;
 cout<<a<<" "<<b<<" "<<c;
 return 0;
}
