#include <bits/stdc++.h>

using namespace std;
bool subsetSum(int arr[],int sum, int n){
    bool dp[n+1][sum+1];

for (int j=0; j<sum+1;j++)
    dp[0][j] = false;

for (int i=0; i<n+1;i++)
    dp[i][0] = true;

for(int i=1; i<n+1;i++)
for(int j=1;j<sum+1;j++){

    if(j>=arr[i-1]){
        dp[i][j] = dp[i-1][j-arr[i-1]]||dp[i-1][j];

    }
    else
    dp[i][j]=dp[i-1][j];




}

cout<<"\n\n";
  for(int i=0; i< n+1; i++)
     {for(int j=0; j< sum+1; j++){
        cout<<dp[i][j]<<"\t";

     }
     cout<<endl;
     }
return dp[n][sum];
}

int main(){


    int n,sum;

    cout<<"Enter the number of elements in array: \t ";
    cin>>n;
    cout<<"Enter sum of subset:\t";
    cin>>sum;


    int arr[n];
    cout<<"Enter elements of array";
    for (int i=0; i<n; i++)
    cin>>arr[i];

    cout<<"Output: \t"<<subsetSum(arr,sum,n);
    return 0;
}

