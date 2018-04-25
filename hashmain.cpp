#include <iostream>
#include <vector>
#include "hashmap.h"
using namespace std;
int main()
{
  hashmap h;
  h.print();
//  h.print();
  cout << "testing" << endl;
  cout << "Enter your name" << endl;
  string name1="";
  cin >> name1;
  string dob="";
  cout << "Enter your dateofbirth" << endl;
  cin >> dob;
  h.update(name1,dob);
  h.print();
  return 0;
}
