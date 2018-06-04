#include <iostream>
#include "tree.h"
#include <queue>
using namespace std;
tree::tree()
{
  root=nullptr;
}
void tree::add_element(int temp)
{
 tree::add_element1(root,temp);
}
void tree::add_element1(node* current,int temp1)
{
  if(current==nullptr)
  {
    node* newnode=new node;
    newnode->data=temp1;
    newnode->left=nullptr;
    newnode->right=nullptr;
    root=newnode;
  }
  else if(temp1>current->data)
  {
    if(current->right==nullptr)
    {
      node* newnode=new node;
      newnode->data=temp1;
      newnode->left=nullptr;
      newnode->right=nullptr;
      current->right=newnode;
    }
    else
    {
    add_element1(current->right,temp1);
    }
  }
  else if(temp1<current->data)
  {
    if(current->left==nullptr)
    {
      node* newnode=new node;
      newnode->data=temp1;
      newnode->left=nullptr;
      newnode->right=nullptr;
      current->left=newnode;
    }
    else
    {
    add_element1(current->left,temp1);
    }
  }
}
void tree::print_allelements()
{
     tree::print_allelements1(root);
}
void tree::inorder()
{
     tree::inorder1(root);
}
void tree::postorder()
{
     tree::postorder1(root);
}
void tree::print_allelements1(node* current1)
{
if(current1==nullptr)
{
  return;
}
print_allelements1(current1->left);
cout << current1->data << endl;
print_allelements1(current1->right);
}
void tree::inorder1(node* current1)
{
  if(current1==nullptr)
  {
    return;
  }
  cout << current1->data << endl;
  print_allelements1(current1->left);
  print_allelements1(current1->right);
}
void tree::postorder1(node* current1)
{
  if(current1==nullptr)
  {
    return;
  }
  print_allelements1(current1->left);
  print_allelements1(current1->right);
  cout << current1->data << endl;
}
bool tree::search(int search_element)
{
bool temp=tree::search1(root,search_element);
return temp;
}
bool tree::search1(node* current,int search_element1)
{
  if(root==nullptr)
  {
    return false;
  }
  while(current!=nullptr)
  {
   if(current->data==search_element1)
   {
     return true;
   }
   else if(search_element1>current->data)
   {
     current=current->right;
   }
   else if(search_element1<current->data)
   {
    current=current->left;
   }
  }
  return false;
}
bool tree::bfssearch(int search_element1)
{
 bool temp1=bfssearch1(root,search_element1);
 return temp1;
}
bool tree::bfssearch1(node* current,int& search_element)
{
if(root==nullptr)
{
  return false;
}
queue<node*> q;
q.push(root);
while(!q.empty())
{
  node* temp=q.front();
  if(temp->data==search_element)
  {
    return true;
  }
  if(temp->right!=nullptr)
  {
    q.push(temp->right);
  }
  if(temp->left!=nullptr)
  {
    q.push(temp->left);
  }
  q.pop();
}
return false;
}
