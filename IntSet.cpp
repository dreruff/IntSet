/*
Greg Ruffin gruffin gregoryaruffin@gmail.com
IntSet.cpp
Assignment 3 Integer Sets
code status: working
*/


#include <iostream>
#include <string>
#include <sstream>
#include "IntSet.h"

// IntSet takes up to five intial elements
IntSet::IntSet(int firstInt, int secondInt, int thirdInt, int fourthInt, int fifthInt){
  for(int i=0; i<=MAXSETVAL; i++)
    data[i] = 0;  
  insertElement(firstInt);
  insertElement(secondInt);   
  insertElement(thirdInt);   
  insertElement(fourthInt);   
  insertElement(fifthInt); 
}

// Insert int into IntSet
void IntSet::insertElement(int addNum){
  if(0 <= addNum && addNum <= MAXSETVAL){ data[addNum]=true; }
}

// Removes int from IntSet
void IntSet::deleteElement(int removeNum){
  if(0 <= removeNum && removeNum <= MAXSETVAL){ data[removeNum]=false; }
}

// Prints out set. 
std::string IntSet::toString() const{
  std::stringstream temp;
  for(int i=0;i<=MAXSETVAL;i++){
    if(data[i]==true){
      temp << ", " << i;
    }
  }
  temp << "}";
  std::string str = temp.str();
  str.replace(str.begin(),str.begin()+2,"{");
  return str;
}

// Union of two sets. All elements of both sets.
void IntSet::unionOf(IntSet &intSetA, IntSet &intSetB){
  for(int i=0;i<=MAXSETVAL;i++){
    data[i] = intSetA.data[i]||intSetB.data[i];
  }
}

// Intersection of two sets. Elements that both set share.
void IntSet::intersectionOf(IntSet &intSetA, IntSet &intSetB){
  for(int i=0;i<=MAXSETVAL;i++){
    data[i] = intSetA.data[i]&&intSetB.data[i];
  }
}

// Compares set to see if int sets are equal.
bool IntSet::equals(IntSet intSet) const{
  if(intSet.data == 0) return false;
  for(int i=0;i<=MAXSETVAL;i++){
    if(data[i]!=intSet.data[i]) return false;
  }
  return true;
}

// Checks if element is in int set
bool IntSet::hasElement(int element) const{
  if(0 <= element <= MAXSETVAL){
    return data[element];
  }
  return false;
}

