#include <cstdlib>
#include <iostream>
#include <cstring>

#include "hash.h"

using namespace std;

int hashmap::Hash(char* key){
  int hash = 0;
  int index;
  
  index = strlen(key);
  
  
  cout << "key[0] = " << key[0] << endl;
  cout << "key[0] int = " << int(key[0]) << endl;

  return index;
  
}
