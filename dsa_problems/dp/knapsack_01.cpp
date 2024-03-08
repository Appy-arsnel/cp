#include <bits/stdc++.h>
using namespace std;
// using recursion only
int knapsack_01(int wt[],int v[], int W,int n){
    if(W==0||n==0)
    return 0;

    if(W>=wt[n-1]){
        return max(v[n-1]+knapsack_01(wt,v,W-wt[n-1],n-1),knapsack_01(wt,v,W,n-1));
    }
    

    return knapsack_01(wt,v,W,n-1);
    
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