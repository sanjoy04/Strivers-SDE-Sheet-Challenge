#include <bits/stdc++.h>

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    vector<int> v = permutation;
    int i = n-2, j;

    while(i >=0 && v[i+1] < v[i]){
        i--;
    }

    if(i < 0){
        reverse(v.begin(), v.end());
    }else{
        j = n-1;

        while(j >= 0 && v[i] > v[j]){
            j--;
        }
        swap(v[i], v[j]);
        reverse(v.begin()+i+1, v.end());
    }

    return v;
}