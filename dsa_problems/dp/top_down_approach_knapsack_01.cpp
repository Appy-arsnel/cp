#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];
// using Top Down Approach (Tabular Form- Iteration only)

int knapsack_01(int wt[],int v[], int W,int n){

    for(int i=0; i< n+1; i++)
    for(int j=0; j< W+1; j++){
        //Initalize the table with 0
        if(i==0||j==0)
         dp[i][j]==0;

        // Recursive to Iterative 
        else if(W>=wt[i-1]){
            dp[i][j] = max(v[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);

        }
        else
            dp[i][j] = dp[i-1][j];        
        
    }


    return dp[n][W];
    
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
   
    
    cout<<"Max Profit of 0/1 Knapsack is :\t" <<knapsack_01(weight,value,capacity,n);
    
    return 0;

}