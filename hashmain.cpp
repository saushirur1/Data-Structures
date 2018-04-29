#include <iostream>
#include <vector>
#include "hashmap.h"
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
  hashmap h;
  //h.print();
//  h.print();
  int loopcount;
  cout << "Enter the number of inputs" << endl;
  cin >> loopcount;
  while(loopcount>0)
  {
  cout << "Enter your name" << endl;
  string name1="";
  cin >> name1;
  string dob="";
  cout << "Enter your dateofbirth" << endl;
  cin >> dob;
  h.update(name1,dob);
  loopcount=loopcount-1;
 }
  h.print();
 cout << "Enter the name to delete" << endl;
  string name2="";
  cin >> name2;
  h.Delete_entry(name2);
  h.print();
  return 0;
}
