#pragma once
#include <iostream>
#include "Node.h"

class OList{
 private:
  Node *head;
 public:
  OList();
  void insert(std::string data);
  void insert(int loc, std::string data); //0 indexed
  int length();
  std::string OList::find(std::string data);

  std::string toString(); // for testing purposes

  bool contains(std::string item);
  std::string OList::get(int loc);
  void OList::reverse();
  void remove(int loc);
  ~OList();
};
