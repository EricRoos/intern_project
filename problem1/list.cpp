#include "list.h"

List::List(){
  this->head = 0;
}
List::List(List & l){
}
List::~List(){
  if(this->head){
    delete this->head;
  }
}

void List::insert(int data){
  //cout << "Inserting " << data << endl;
  Node * newNode = new Node(data);
  if(this->head){
    Node * itr = head;
    bool inserted = false;
    if(itr->getData() > data){
      newNode->setNextNode(this->head);
      this->head = newNode;
    }else{
      Node * prev = itr;
      while(itr->getNextNode() && !inserted){
        if(itr->getNextNode()->getData() >= data){
          //cout << "middle insert" << endl;
          newNode->setNextNode(itr->getNextNode());
          itr->setNextNode(newNode);
          inserted = true;
        }
        itr = itr->getNextNode();
        prev = itr;
      }
      if(!inserted){
        //cout << "inserting at tail" << endl;
        //cout << prev->getData() << " now points to " << data << endl;
        prev->setNextNode(newNode);
      }
    }
  }else{
    this->head = newNode;
  }
}
void List::remove(int data){}

void List::traverse(){
  Node * itr = head;
  while(itr){
    cout << itr->getData() << endl;
    itr = itr->getNextNode();
  }
}
