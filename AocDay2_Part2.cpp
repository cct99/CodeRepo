#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
  int score = 0;
  string data_opp, data_me;
  ifstream inFile("input.txt");
  vector<int> total;
  while(!inFile.eof())
    {
      getline(inFile, data_opp, ' ');
      getline(inFile, data_me);

      if(data_opp == "A" && data_me == "X"){
        score = 3;
        }
      else if(data_opp == "A" && data_me == "Y")
      {  
        score = 4;
        }
      else if(data_opp == "A" && data_me == "Z")
      {
        score = 8;
        }
      else if(data_opp == "B" && data_me == "X")
      {
        score = 1;
        }
      else if(data_opp == "B" && data_me == "Y")
      {
        score = 5;
        }
      else if(data_opp == "B" && data_me == "Z")
      {
        score = 9;
        }
      else if(data_opp == "C" && data_me == "X")
      {
        score = 2;
        }
      else if(data_opp == "C" && data_me == "Y")
      {
        score = 6;
        }
      else if(data_opp == "C" && data_me == "Z")
      {
        score = 7;
        }
      total.push_back(score);
    }
  
  cout << accumulate(total.begin(), total.end(), 0) << endl;
  return 0;
}