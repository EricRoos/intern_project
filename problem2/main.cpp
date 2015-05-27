/*
* Program 2 for intern interview.
*
* Takes in a input stream (stdin) that is expecting a one line
* comma seperated list and an CLI param of the index of the CSV
* to return
*
* Eric Roos
*/

#include<iostream>
#include<string>
#include "stdlib.h"


using namespace std;

int main(int argc, char ** argv){
  string input;
  getline(cin, input);
  cout << input << endl;

  int pos = 0;
  int head = 0;
  int goalPos = atoi(argv[1]);

  string result;
  const char *itr = input.c_str();

  int count = 0;
  while(*itr != '\0'){
    if(count == goalPos){
      if(*itr != ',' && *itr != ' ' && *itr != '\t'){
        result += *itr;
      }
    }
    if(*itr == ','){
      count++;
    }
    itr++;
  }
  if(result.size() == 0){
    cout << "Specified column doesnt exist" << endl;
  }else{
    cout << result << endl;
  }
  return 0;
}
