#include <cstdlib>
#include <iostream>
#include <cstring>

#include "hash.h"

using namespace std;

hashmap::hashmap(){
  tableSize = 10;

}

int hashmap::Hash(char* key){
  int hash = 0;
  int index;
  
  index = strlen(key);
  
  for(int i =0; i < strlen(key); i++){
    hash = hash + (int)key[i];
    cout << "hash = " << hash << endl;
  }
  
  index = hash % tableSize;
  return index;
  
}
