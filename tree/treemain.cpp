#include<iostream>
#include "tree.h"
#include <queue>
using namespace std;
int main()
{
  tree firstobj;
  firstobj.add_element(1);
  firstobj.add_element(20);
  firstobj.add_element(4);
  firstobj.add_element(25);
  firstobj.add_element(19);
  firstobj.add_element(29);
  firstobj.add_element(23);
  firstobj.add_element(25);
  firstobj.add_element(2);
  firstobj.print_allelements();
  // firstobj.inorder();
  // firstobj.postorder();
  bool temp1=firstobj.search(25);
  bool temp2=firstobj.bfssearch(25);
  cout << temp1 << endl;
  cout << temp2 << endl;
  return 0;
}
