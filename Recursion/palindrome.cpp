#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check_palindrome(string word, int l, int r){
    if(word[l]!=word[r]){
        return false;
    }
    if(l>=r) return true;
    return check_palindrome(word,l+1,r-1);
}

int main(){
    string word = "EVE";
    int l = 0, r = word.size()-1;
    cout<<check_palindrome(word,l,r);
    return 0;
}
