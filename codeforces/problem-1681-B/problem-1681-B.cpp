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
 int T;
 cin >> T;
 while (T--) {
 int N;
 cin >> N;
 int a[N];
 FOR(i, N)
 cin >> a[i];
 int shuffle;
 cin>>shuffle;
 int b[shuffle];
 FOR(i, shuffle)
 cin >> b[i];
int index,temp,d;
FOR(i,shuffle)
{
    index=b[i];
        d=0;

    for(int j=index;j<N;j++){

        for(int k=j;k>d;k--){
          temp=a[k-1];
          a[k-1]=a[k];
          a[k]=temp;
        }

            d++;

    }

}
cout<<a[0]<<endl;
 }
 return 0;
}
