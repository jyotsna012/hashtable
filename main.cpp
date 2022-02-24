#include <cstdlib>
#include <iostream>
#include <cstring>

#include "hash.h"

using namespace std;

int main(){
  
  int index;
  char name[] = "Hellos"; 
  hashmap hashObj;
  index = hashObj.Hash(name);
  cout <<"index: " << index;

}


