#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include "linkedlist.h"
using namespace std;
linkedlist::linkedlist()
{
  head=nullptr;
  current=nullptr;
}
void linkedlist::Add_node(int toadd)
{
  ll* newnode = new ll;
  newnode->data=toadd;
  newnode->next=nullptr;
  if(head==nullptr)
  {
    head=newnode;
  }
  else
  {
    current=head;
    while(current->next!=nullptr)
    {
      current=current->next;
    }
    current->next=newnode;
  }
}
bool linkedlist::gethead()
{
  return linkedlist::palindrome_linkedlistcheck(head);
}
bool linkedlist::searchval(int val_search)
{
current=head;
while(current!=nullptr)
{
  if(current->data==val_search)
  {
    return true;
  }
  current=current->next;
}
return false;
}
void linkedlist::reverselist()
{
  ll* prev=nullptr;
  ll* temp;
  current=head;
  while(current!=nullptr)
  {
    temp=current->next;
    current->next=prev;
    prev=current;
    current=temp;
  }
  head=prev;
}
void linkedlist::delete_atindex(int index)
{
  int count=0;
  current=head;
  ll* prev;
  while(current!=nullptr)
  {
    if(count==index)
    {
      break;
    }
    count=count+1;
    prev=current;
    current=current->next;
  }
  if(current==nullptr)
  {
    cout << "Index not present in the list" << endl;
  }
  else
  {
    ll* temp=current->next;
    prev->next = temp;
    delete current;
    cout << "Element Deleted" << endl;
  }
}
void merge_sort()
{
  cout << "Merge sort" << endl;
}
bool linkedlist::check_reverse(vector<int>& original)
{
int j=original.size()-1;
for(int i=0;i<original.size()/2;i++)
{
  if(original[i]!=original[j])
  {
    return false;
  }
  j=j-1;
}
return true;
}
bool linkedlist::palindrome_linkedlistcheck(ll* temp)
{
vector<int> v;
while(temp!=nullptr)
{
  v.push_back(temp->data);
  temp=temp->next;
}
bool result=check_reverse(v);
return result;
}
void linkedlist::printval()
{
  current=head;
  while(current!=nullptr)
  {
    cout << current->data << endl;
    current=current->next;
  }
}
