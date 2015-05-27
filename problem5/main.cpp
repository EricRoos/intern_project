#include<iostream>
#include "stack.h"
using namespace std;

int main(){
  Stack stack;

  for(int i = 0 ; i < 100 ; i++){
    stack.push(i);
  }

  while(!stack.isEmpty()){
    cout << stack.pop() << endl;
  }
  return 0;
}
