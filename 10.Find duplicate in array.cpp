#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int,int> mp;
	for(auto it:arr){
		mp[it]++;
	}

	int ans;
	
	for(auto a:mp){
		if(a.second > 1){
			ans = a.first;
		}
	}
	return ans;
}
