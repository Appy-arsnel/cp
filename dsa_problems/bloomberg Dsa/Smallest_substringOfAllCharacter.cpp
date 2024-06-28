/* url: https://www.youtube.com/watch?v=5xuvqBjRkok

Smallest Substring of All Characters
Given an array of unique characters arr and a string str, Implement a function getShortest UniqueSubstring that finds the smallest substring of str containing all the characters in arr. Return (empty string) if such a substring doesn't "" exist.
Come up with an asymptotically optimal solution and analyze the time and space complexities.
Example:
input: arr = ['x','y','z'], str = "xyyzyzyx"
output: "zyx" */

#include<bits/stdc++.h>
using namespace std;
string UniqueSubstring(char arr[],string s){



    return "";
}
int main(){
    
    int n;
    char arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];


    string s;
    cin>>s;
    
    cout<<UniqueSubstring(arr,s);
    return 0;

}