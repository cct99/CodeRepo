#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream inFile("input.txt");
  vector<int> sum;
  int num = 0;
  string line;
  int total = 0;
  
  //Part 1
  while(getline(inFile, line))
    {
      if(line.empty())
      {
        sum.push_back(num);
        num = 0;
      }
      else
      {
        num += stoi(line);
      }
    }
  sort(sum.begin(), sum.end());
  for(int j: sum){
    cout << j << endl;
  }
  
  //Part 2
  for(int z = sum.size() - 3; z <= sum.size(); z++)
    {
      total += sum[z];
    }
  cout << "\n\n" << total << endl;
  return 0;
}

