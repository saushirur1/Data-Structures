#include <iostream>
#include <vector>
#include "hashmap.h"
using namespace std;
int main()
{
  hashmap h;
  h.print();
//  h.update();
  //h.print();
  //cout << "testing" << endl;
  int y =h.Create_hash("hellojww");
  cout << "hash index:" << y << endl;
  return 0;
}
