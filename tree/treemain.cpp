#include<iostream>
#include "tree.h"
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
  firstobj.inorder();
  firstobj.postorder();
  return 0;
}
