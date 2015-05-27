#include "node.h"

Node::Node(int data){
  this->data = data;
  this->next = 0;
}
Node::Node(Node & n){
  this->data = n.data;
  if(n.getNextNode()){
    //this->next = new Node(n.nextNode());
  }
}

int Node::getData(){
  return data;
}
Node::~Node(){
  if(next){
    delete next;
  }
}

Node * Node::getNextNode(){
  return next;
}
void Node::setNextNode(Node * n){
  this->next = n;
}

/*
private:
  int data;
  Node * next;
*/
