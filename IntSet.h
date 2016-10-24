/*
Greg Ruffin gruffin gregoryaruffin@gmail.com
IntSet.h
Assignment 3 Integer Sets
code status: working
*/


#ifndef INTSET_H
#define INTSET_H

// CS19: C++ Integer Sets Program
// Starter Code by Steve J. Hodges
class IntSet{
 public:
  IntSet(int =-1,int =-1, int =-1, int =-1, int =-1);
  void insertElement(int);
  void deleteElement(int);
  std::string toString() const;
  void unionOf(IntSet &, IntSet &);
  void intersectionOf(IntSet &, IntSet &);
  bool equals(IntSet) const;
  bool hasElement(int) const;
  int static getMax(){ return MAXSETVAL; }
 private:
  static const int MAXSETVAL=1000;
  bool data[MAXSETVAL+1];
  };

#endif
