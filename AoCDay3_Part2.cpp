#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
  fstream inFile("input.txt");
  string line;
  vector<int> priority;
  while(!inFile.eof()){
    char lower = ' ';
    char upper = ' ';  
    int score_lower = 1;
    int score_upper = 27;
    string temp1 = "";
    string temp2 = "";
    string temp3 = "";
    string temp4 = "";
    getline(inFile, line, '\n');
    for(int i = 0; i < line.length(); i++){
      temp1 += line[i];
    }
    getline(inFile, line, '\n');
    for(int j = 0; j < line.length(); j++){
      temp2 += line[j];
    }
    getline(inFile, line, '\n');
    for(int k = 0; k < line.length(); k++){
      temp3 += line[k];
    }
    
    for(int m = 0; m < temp1.length(); m++){
      for(int n = 0; n < temp2.length(); n++){
        for(int o = 0; o < temp3.length(); o++){
          if(temp1[m] == temp2[n] && temp2[n] == temp3[o])
          {
            temp4 = temp1[m];          
          }
        }
      }
    }
    for(lower = 'a'; lower <= 'z'; lower++){
      if(temp4[0] == lower){
        //cout << temp3[0] << " is equal to " << lower << " at priority " << score_lower << endl;
        priority.push_back(score_lower);
        break;
        }
      else
        score_lower++;
    }
    for(upper = 'A'; upper <= 'Z'; upper++){
      if(temp4[0] == upper){
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