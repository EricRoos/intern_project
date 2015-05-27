#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;
class Node{
  public:
    Node(int);
    Node(Node & n);
    ~Node();
    Node * getNextNode();
    void setNextNode(Node * n);
    int getData();
    
  private:
    int data;
    Node * next;
};
#endif
