#include <cstdlib>
#include <iostream>
#include <cstring>

#include "hash.h"

using namespace std;

hashmap::hashmap(){
  char emptys[] = "empty";
  for(int i = 0; i < tableSize; i++){
    HashTable[i] = new Student;
    strcpy(HashTable[i]->firstName, emptys);  
    strcpy(HashTable[i]->lastName, emptys);  
    HashTable[i] -> studentId = 0;
    HashTable[i] -> GPA = 0.00;
    HashTable[i] -> next = NULL;
  }

}

void hashmap::addStudent(char* firstName, char* lastName, int studentId, float GPA){
  
  int index = Hash(firstName);
  if(HashTable[index] -> firstName == "empty"){
    strcpy(HashTable[index]->firstName, firstName);  
    strcpy(HashTable[index]->lastName, lastName);  
    HashTable[index] -> studentId = studentId;
    HashTable[index] -> GPA = GPA;
    HashTable[index] -> next = NULL;

  }
  else{
  
    Student* ptr = HashTable[index];
    Student* n = new Student;
    strcpy(n->firstName, firstName);  
    strcpy(n->lastName, lastName);  
    n -> studentId = studentId;
    n -> GPA = GPA;
    n->next = NULL;
    while(ptr -> next != NULL){
      ptr = ptr -> next;
    }
    
    ptr -> next = n;
  
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

