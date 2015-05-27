#ifndef STACK_H
#define STACK_H

class Stack{

  public:
    Stack();
    ~Stack();


    bool isEmpty();
    void push(int data);
    int pop();

  private:
    int * data;
    int capacity;
    int size;
    int head;
};
#endif
