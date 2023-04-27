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

// void shuffle_cards(int (&c)[],int n,int s){
//     int last=n-1;
//     FOR(i,s){
//         swap(c[i],c[last]);
//         last--;
//     }
    
//  }
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 int T,n,m,shuffle;
 cin >> T;
 while (T--) {
    cin>>n;
    int cards[n];
    FOR(i,n)
     cin>>cards[i];
    cin>>m;
    FOR(i,m){
        cin>>shuffle;
       // shuffle_cards(cards,n,shuffle);
        int last=n-1;
         FOR(j,shuffle){
             swap(cards[j],cards[last]);
             last--;
    }
        // swap(cards[shuffle],cards[n-1]);
    
}

    cout<<cards[0]<<"\n";
    
 }


 
 return 0;
}
