#include <cstdlib>
#include <iostream>
#include <cstring>

#include "hash.h"

using namespace std;

int main(){
  hashmap Hashy;
  
  Hashy.addStudent("Paul", "Locha", 1, 1.11);
	Hashy.addStudent("Kim", "Iced Mocha", 2, 2.22);
	Hashy.addStudent("Emma", "Strawberry Smoothie", 3, 3.33);
	Hashy.addStudent("Annie", "Hot Chocolate", 4, 4.44);
	Hashy.addStudent("Sarah", "Passion Tea", 5, 5.55);
	Hashy.addStudent("Pepper", "Caramel Mocha", 6, 6.66);
	Hashy.addStudent("Mike", "Chai Tea", 7, 7.77);
	Hashy.addStudent("Steve", "Apple Cider", 8, 8.88);
	Hashy.addStudent("Bill", "Root Beer", 9, 9.99);
	Hashy.addStudent("Marie", "Skinny Latte", 11, 1.123);
	Hashy.addStudent("Susan", "Water", 12, 2.123);
	Hashy.addStudent("Joe", "Green Tea", 13, 3.123);
  
  
  Hashy.print();
}


