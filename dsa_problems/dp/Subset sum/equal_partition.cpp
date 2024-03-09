#include <bits/stdc++.h>


using namespace std;

bool equal_partition(int arr[],int n){

    
        int total =0;
    for(int i=0;i<n;i++){
        total+=arr[i];
    }

    if(total%2==1){
        return false;
    }
    
   
        int sum = total/2;
        int dp[n+1][sum];
        for(int j=0;j<sum+1;j++)
        dp[0][j]=false;
        for(int i=0;i<n+1;i++)
        dp[i][0]=true;

        for(int i=1;i<n+1;i++)
        for(int j=1;j<sum+1;j++){
        if(j>=arr[i-1]){
            dp[i][j] = dp[i-1][j-arr[i-1]]||dp[i-1][j];
        }
        else 
            dp[i][j]=dp[i-1][j];
        }
   

        return dp[n][sum];

}

int main(){
    

    int n,sum;

    cout<<"Enter the number of elements in array: \t ";
    cin>>n;
    

    int arr[n];
    cout<<"Enter elements of array";
    for (int i=0; i<n; i++)
    cin>>arr[i];

    cout<<"Output: \t"<<equal_partition(arr,n);

    return 0;
}