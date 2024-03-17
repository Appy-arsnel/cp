/* 
url:  https://www.geeksforgeeks.org/given-a-string-find-its-first-non-repeating-character/
Given a string S consisting of lowercase Latin Letters, the task is to find the first non-repeating character in S.

Examples: Input: “geeksforgeeks”
Output: f
Explanation: As ‘f’ is first character in the string which does not repeat. */

#include <bits/stdc++.h>
using namespace std;
std::vector<std::pair<char, int>>::iterator findElementByKey(std::vector<std::pair<char, int>>& pairs, char key) {
    return std::find_if(pairs.begin(), pairs.end(),
                        [key](const std::pair<char, int>& pair) {
                            return pair.first == key;
                        });
}
char firstNon_repeating(string s){
    
    char f_non_repeating_ch;
    unordered_map <char,int> occurance;
    for(char c: s){
        occurance[c]++;
    }

    for(char c: s){
        if(occurance[c]==1){
        f_non_repeating_ch=c;
        break;
        }
    }
    return f_non_repeating_ch;
}
int main(){

    int test_case;
    cin>>test_case;

    while(test_case>0){

        string s;
        cin>>s;
        cout<<firstNon_repeating(s)<<endl;
        test_case--;

    }

    
    return 0;
}