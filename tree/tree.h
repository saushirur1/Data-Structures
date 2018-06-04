#include <iostream>
#include <queue>
class tree
{
public:
  tree();
  void add_element(int y);
  void print_allelements();
  void inorder();
  void postorder();
  bool search(int search_element);
  bool bfssearch(int search_element);
private:
  struct node
  {
    int data;
    node* left;
    node* right;
  };
  node* root;
  void add_element1(node* current,int x);
  void print_allelements1(node* current1);
  void inorder1(node* current1);
  void postorder1(node* current1);
  bool search1(node* current,int search_element);
  bool bfssearch1(node* current,int& search_element);
};
