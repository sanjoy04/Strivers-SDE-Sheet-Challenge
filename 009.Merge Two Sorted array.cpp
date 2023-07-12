//O((M+N)*log(M+N)) solution


#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	for(int i = 0; i < n; i++){
		arr1[m+i]=arr2[i];
	}

	sort(arr1.begin(), arr1.end());

	return arr1;
}



// O(M+N) solution

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    // Write your code here.
    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while(i >= 0 && j >= 0){
        if(arr1[i] > arr2[j]){
            arr1[k] = arr1[i];
            i--;
        }else{
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    while(j >= 0){
        arr1[k] = arr2[j];
        j--;
        k--;
    }

    return arr1;
}

// or
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i = m-1;
	int j = n-1;
	int lastIndex = m+n-1;
	
	while(j>=0){
		if(i>=0 && arr1[i]>arr2[j]){
			arr1[lastIndex] = arr1[i];
			i--;
		}else{
			arr1[lastIndex] = arr2[j];
			j--;
		}
		lastIndex--;
	}

	return arr1;
}