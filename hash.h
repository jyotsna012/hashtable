#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

class hashmap{

  private:
    static const int tableSize = 10;
    struct Student {
      char firstName[20];
      char lastName[20];
      int studentId;
      float GPA;
      student* next;
    };
  
    item* HashTable[tableSize];
  
  public:
    hashmap();
    int Hash(char* key);




};
