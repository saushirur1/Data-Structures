#include<iostream>
#include <iomanip>
#include "linkedlist.h"
using namespace std;
int main()
{
 linkedlist l;
 l.Add_node(10);
 l.Add_node(1029);
 l.printval();
  bool x = l.searchval(1029);
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
 l.delete_atindex(4);
 cout << "-----"<<endl;
 l.printval();
 cout << "------"<<endl;
  return 0;
}
