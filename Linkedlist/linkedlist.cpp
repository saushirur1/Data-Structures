#include <iostream>
#include <iomanip>
#include <vector>
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
void linkedlist::printval()
{
  current=head;
  while(current!=nullptr)
  {
    cout << current->data << endl;
    current=current->next;
  }
}
