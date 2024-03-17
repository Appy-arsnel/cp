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
 int T,n,d;
 float mid;
 int cornerRow1, cornerCol1, cornerRow2, cornerCol2;
 cin >> T;
 while (T--) {
    cin>>n;
    char table[n][n];
    int arst_location[4],point=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        cin>>table[i][j];
        if(table[i][j]=='*'){
            arst_location[point] = i;
            arst_location[point+1] = j;
            point+=2;

        }
    }

    
    mid=n/2;
    if ( arst_location[0] == arst_location[2]) {
        // Marked cells are in the same row
        if(mid>arst_location[0])
        {cornerRow1 = arst_location[0] + 1;
        cornerCol1 = arst_location[1];
        cornerRow2 = arst_location[2] + 1;
        cornerCol2 = arst_location[3];}
        else{
        cornerRow1 = arst_location[0] - 1;
        cornerCol1 = arst_location[1];
        cornerRow2 = arst_location[2] - 1;
        cornerCol2 = arst_location[3];
        }
    } 
    else if (arst_location[1] == arst_location[3]) {
        // Marked cells are in the same column
        if(mid>arst_location[1])
        {
        cornerRow1 = arst_location[0];
        cornerCol1 = arst_location[1] + 1;
        cornerRow2 = arst_location[2];
        cornerCol2 = arst_location[3] + 1;
        }
        else{
        cornerRow1 = arst_location[0];
        cornerCol1 = arst_location[1] - 1;
        cornerRow2 = arst_location[2];
        cornerCol2 = arst_location[3] - 1;
        }
    }
   
    else {
        // Marked cells are neither in the same row nor column
        cornerRow1 = arst_location[0];
        cornerCol1 = arst_location[3];
        cornerRow2 = arst_location[2];
        cornerCol2 = arst_location[1];
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if ((i == arst_location[0] && j == arst_location[1]) || (i == arst_location[2] && j == arst_location[3])) {
                cout << "*";
            } else if ((i == cornerRow1 && j == cornerCol1) || (i == cornerRow2 && j == cornerCol2)) {
                cout << "*";
            } else {
                cout << ".";
            }
    }
    cout<<"\n";
    }


 }

 return 0;
}


