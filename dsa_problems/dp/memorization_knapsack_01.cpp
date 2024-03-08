#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];
// using memorization method
int knapsack_01(int wt[],int v[], int W,int n){
    if(W==0||n==0)
    return 0;

    if(dp[W][n]!=-1)
    return dp[W][n];

    if(W>=wt[n-1]){
        return dp[W][n]=max(v[n-1]+knapsack_01(wt,v,W-wt[n-1],n-1),knapsack_01(wt,v,W,n-1));
    }
    

    return dp[W][n] = knapsack_01(wt,v,W,n-1);
    
}

int main(){

    
    int n;
    cout<<"Enter the number of items: \t";
    cin>>n;

    

    cout<< "Number of Item in Knapsack is: \t"<< n<<endl;


    int weight[n],value[n],capacity;

    cout<<"Enter capasity of knapsack bag:\t";
    cin>>capacity;

    for(int i = 0; i < n; i++ ){
        cout<<"Enter the weight and value respectiely of Item "<<i+1<<":";
        cin>>weight[i]>>value[i];
    }
   
    
    ///set value of all elemetes in table to -1

    memset(dp,-1,sizeof(dp));
    
    cout<<"Max Profit of 0/1 Knapsack is :\t" <<knapsack_01(weight,value,capacity,n);
    
    return 0;

}