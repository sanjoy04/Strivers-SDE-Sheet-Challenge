#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> pascalT;
  pascalT.push_back({1});
  for(int i = 1; i<n; i++){
    int first = 0;
    int second = 1;
    vector<long long int> temp;
    for(int j = 0; j <= i; j++){
      if(j == 0 || j == i){
        temp.push_back(1);

      }else{
        temp.push_back(pascalT[i-1][first] + pascalT[i-1][second]);
        first++;
      second++;
      }
      
    }

    pascalT.push_back(temp);
  }

  return pascalT;
}
