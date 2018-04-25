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
//cout << name << endl;
int result=0;
for(int i=0;i<name.length();i++)
{
result=result+(int)(name[i]);
}
//cout << result << endl;
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
void hashmap::helper(int index1)
{
  cout << "here in helper" << endl;
  hash* current1=v[index1];
  while(current1!=nullptr)
  {
  cout << "here in helper loop" << endl;
  cout << "name: " << current1->name << "dob: " << current1->dateofbirth << endl;
  current1=current1->next;
  }
}
void hashmap::update(string& name,string& dateofbirth1)
{
  int index=Create_hash(name);
  if(v[index]->name=="Null" && v[index]->dateofbirth=="Null")
  {
    v[index]->name=name;
    v[index]->dateofbirth=dateofbirth1;
  }
  else
  {
  hash* current=v[index];
  while(current->next!=nullptr)
  {
    current=current->next;
  }
  hash* newnode=new hash;
  newnode->name=name;
  newnode->dateofbirth=dateofbirth1;
  newnode->next=nullptr;
  current->next=newnode;
  }
}
