#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
  fstream inFile("input.txt");
  string line;
  vector<char> alp;
  vector<int> priority;
  while(!inFile.eof()){
    char lower = ' ';
    char upper = ' ';  
    int score_lower = 1;
    int score_upper = 27;
    string temp1 = "";
    string temp2 = "";
    string temp3 = "";
    getline(inFile, line);
    int lengthHalf = line.length()/2;
    for(int i = 0; i < lengthHalf; i++){
      temp1 += line[i];
    }
    for(int j = lengthHalf; j < line.length(); j++)
      temp2 += line[j];
    for(int k = 0; k < temp1.length(); k++){
      for(int l = 0; l < temp2.length(); l++){
        if(temp1[k] == temp2[l])
        {
          temp3 = temp1[k];          
        }
      }
    }
    for(lower = 'a'; lower <= 'z'; lower++){
      if(temp3[0] == lower){
        //cout << temp3[0] << " is equal to " << lower << " at priority " << score_lower << endl;
        priority.push_back(score_lower);
        break;
        }
      else
        score_lower++;
    }
    for(upper = 'A'; upper <= 'Z'; upper++){
      if(temp3[0] == upper){
        //cout << temp3[0] << " is equal to " << upper << " at priority " << score_upper << endl;
        priority.push_back(score_upper);
        break;
        }
      else
        score_upper++;
    }
  }
  cout << "The sum of priorities is: " << accumulate(priority.begin(), priority.end(), 0) << endl;
  return 0;
}