#include <cstdlib>
#include <iostream>
#include <cstring>

#include "hash.h"

using namespace std;

hashmap::hashmap(){
  char emptys[] = "empty";
  for(int i =-; i < tableSize; i++){
    HashTable[i] = new Student;
    HashTable[i] -> strcpy(firstName, emptys);  
    HashTable[i] -> strcpy(lastName, emptys);  
    HashTable[i] -> studentID = 0;
    HashTable[i] -> GPA = 0.00;
    HashTable[i] -> next = NULL;
  }

}

int hashmap::Hash(char* key){
  int hash = 0;
  int index;
  
  index = strlen(key);
  
  for(int i =0; i < strlen(key); i++){
    hash = hash + (int)key[i];
  }
  
  index = hash % tableSize;
  return index;
  
}
