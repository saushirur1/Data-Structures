#include<iostream>
#include "linkedlist.h"
using namespace std;
int main()
{
 linkedlist l;
 l.Add_node(10);
 l.Add_node(1029);
 l.printval();
 // bool x = l.searchval(1029);
 // if(x)
 // {
 //   cout << " element present" << endl;
 // }
 // else
 // {
 //   cout << "Element not present" << endl;
 // }
 l.reverselist();
 l.printval();
  return 0;
}
