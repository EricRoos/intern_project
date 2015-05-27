#include<iostream>
using namespace std;
#include "list.h"

int main(){
  List list;
  list.insert(8);
  list.insert(5);
  list.insert(6);
  list.insert(7);
  list.insert(1);
  list.traverse();

  return 0;
}
