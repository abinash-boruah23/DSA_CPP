#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reverse_arr(vector <int> &v, int l, int r){
    if(l==r){
        return;
    }
    else{
        int temp = v[l];
        v[l] = v[r];
        v[r] = temp;
        reverse_arr(v,l+1,r-1);
    }
}

int main(){
    vector <int> v = {1,2,3,4,5};
    int l = 0, r = v.size()-1;
    reverse_arr(v, l, r);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
