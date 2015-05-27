#include "stack.h"  
Stack::Stack(){
  this->capacity = 1;
  this->head = 0;
  this->size = 0;
  this->data = new int[capacity];
}
Stack::~Stack(){
  delete data;
}


bool Stack::isEmpty(){
  return size == 0;
}
void Stack::push(int data){
  if(size >= capacity){
    int * newData = new int[capacity*2];
    for(int i = 0 ; i < size ; i++){
      newData[i] = this->data[i];
    }
    head = size;
    capacity *=2;
  }

  size++;
  this->data[head] = data;
  head = head+1 % this->capacity;
}

int Stack::pop(){
  if(size > 0){
    size--;
    head = (head - 1 ) % capacity;
    int ret = data[head];
    return ret; 
  }else{
    return -1;
  }
}


/* Members
  int * data;
  int capacity;
  int size;
  int head;
*/
