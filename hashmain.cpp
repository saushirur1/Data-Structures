#include <iostream>
#include <vector>
#include "hashmap.h"
using namespace std;
int main()
{
  hashmap h;
  //h.print();
//  h.print();
  cout << "testing" << endl;
  cout << "Enter your name" << endl;
  string name1="";
  cin >> name1;
  string dob="";
  cout << "Enter your dateofbirth" << endl;
  cin >> dob;
  h.update(name1,dob);
  string new1="ronmak";
  string new2="10/10/10";
  h.update(new1,new2);
//h.print();
//int t = h.Create_hash(name1);
//h.helper(t);
string found=h.searchdob("ronmak");
cout << found << endl;
  return 0;
}
