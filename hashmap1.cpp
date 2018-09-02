#include <iostream>
#include <vector>
#include "hashmap.h"
#include <algorithm>
#include <utility>
using namespace std;
hashmap::hashmap()
{
this->tablesize=10;
for(int i=0;i<tablesize;i++)
{
  v.push_back(nullptr);
}
for(int i=0;i<tablesize;i++)
{
  v[i]=new hash;
  v[i]->name="Null";
  v[i]->dateofbirth="Null";
  v[i]->next=nullptr;
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
    hash* print1=v[i];
    while(print1!=nullptr)
    {
      cout << print1->name << endl;
      cout << print1->dateofbirth << endl;
      print1=print1->next;
    }
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
string hashmap::searchdob(string name_tofind)
{
  int indextofind=Create_hash(name_tofind);
  hash* find=v[indextofind];
  string result="Not found";
  while(find!=nullptr)
  {
  if(find->name==name_tofind)
  {
    result=find->dateofbirth;
    break;
  }
  else
  {
    find=find->next;
  }
  }
  return result;
}
void hashmap::Delete_entry(const string& name_todelete)
{
int indextodelete=Create_hash(name_todelete);
cout << indextodelete << endl;
hash* current=v[indextodelete];
hash* current1;
if(current->next==nullptr && current->name==name_todelete)
{
  current->name="Null";
  current->dateofbirth="Null";
}
else
{
while(current!=nullptr)
{
  if(current->name==name_todelete)
  {
    hash* temp=current->next;
    current1=temp;
    delete current;
    cout << "Entry Deleted" << endl;
    return;
  }
  current1=current;
  current=current->next;
}
}
}
