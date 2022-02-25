#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;


class hashmap{
public:
  //private:
    struct Student {
      char firstName[20];
      char lastName[20];
      int studentId;
      float GPA;
      Student* next;
    };
 
  
  //public:
    int tableSize;
    hashmap(int tableSize);
    int Hash(char* key);
    void addStudent(char* firstName, char* lastName, int studentId, float GPA);
    int numItemsIndex(int index);
    void print();
    //Student* HashTable[tableSize];

};

