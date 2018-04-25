#include <iostream>
#include <vector>
#include "hashmap.h"
using namespace std;
hashmap::hashmap()
{
this->tablesize=10;
(this->v).reserve(tablesize);
for(int i=0;i<tablesize;i++)
{
  v[i]=new hash;
  v[i]->name="Null";
  v[i]->dateofbirth="Null";
  v[i]->next=nullptr;
  v.push_back(v[i]);
}
}
int hashmap::Create_hash(string name)
{
cout << name << endl;
int result=0;
for(int i=0;i<name.length();i++)
{
result=result+(int)(name[i]);
}
cout << result << endl;
result=result%tablesize;
return result;
}
void hashmap::print()
{
  cout << this->v.size() << endl;
  for(int i=0;i<tablesize;i++)
  {
    cout << v[i]->name << endl;
    cout << v[i]->dateofbirth << endl;
  }
}
void hashmap::update()
{
  int i=0;
  v[i]->name="hello";
  v[i]->dateofbirth="How are you";
  v[i]->next=nullptr;
}
