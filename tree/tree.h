#include <iostream>
class tree
{
public:
  tree();
  void add_element(int y);
  void print_allelements();
  void inorder();
  void postorder();
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
};
