#include <iostream>
class tree
{
public:
  tree();
  void add_element(int y);
  void print_allelements();
private:
  struct node
  {
    int x;
    node* left;
    node* right;
  };
  node* root;
};
