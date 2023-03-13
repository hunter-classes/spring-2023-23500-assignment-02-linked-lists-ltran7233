#include <iostream>
#include "OList.h"
#include "List.h"

int main()
{
  List *l = new List();
  std::cout << l->toString() << " " << l->length() << "\n";
  l->insert(0,"a");
  std::cout << l->toString() << " " << l->length() << "\n";
  std::cout << l->toString() << " " << l->contains("a") << "\n";
  l->insert(0,"b");
  l->insert(0,"c");
  l->insert(0,"d");
  try {
    l->insert(10,"x");
  } catch (std::exception e){
    std::cout << "Insert x didn't work\n";
  }
  std::cout << l->toString() << "\n";
  l->insert(2,"inserted at 2");
  std::cout << l->toString() << "\n";
  l->insert(5,"inserted at end");
  std::cout << l->toString() << " " << l->length() << "\n";
  l->remove(0);
  std::cout << l->toString() << " " << l->length() << "\n";
  
  delete l;
  
  std::cout << "\n\nOList results: " << "\n";
  OList *o = new OList();
  
  o->insert("x");
  o->insert("y");
  o->insert("z");
  std::cout << o->toString() << " " << o->length() << "\n";
  std::cout << "does olist contain a?" << " " << o->contains("a") << "\n";
  std::cout << "2nd value in list: " << o->get(2) << "\n";
  o->insert(3,"a");
  std::cout << o->toString() << " " << o->length() << "\n";
  o->remove(3);
  std::cout << o->toString() << " " << o->length() << "\n";
  o->reverse();
  std::cout << o->toString() << "\n";
  
  delete o;
  std::cout << "\n";
  
  return 0;
}

