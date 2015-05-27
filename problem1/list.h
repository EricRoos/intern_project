#ifndef LIST_H
#define LIST_H

#include "node.h"

class List{
  public:
    List();
    List(List & l);
    ~List();

    void insert(int data);
    void remove(int data);

    void traverse();

  private:
    Node * head;
};
#endif
