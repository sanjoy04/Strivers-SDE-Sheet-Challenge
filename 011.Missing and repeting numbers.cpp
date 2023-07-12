#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here
	vector<int> v(n+1, 0);
	for(int i = 0; i<n; i++){
		v[arr[i]]++;
	}
	pair<int, int>ans;
	for(int i = 1; i<n+1; i++){
		if(v[i] == 0){
			ans.first = i;
		}
		if(v[i] == 2){
			ans.second = i;
		}
	}
	return ans;
	
}
