#include <iostream>
class linkedlist
{
private:
struct ll
{
  int data;
  ll* next;
};
ll* head;
ll* current;
ll* temp;
public:
linkedlist();
void Add_node(int toadd);
bool searchval(int searchval);
void deletenode(int del);
void reverselist();
void printval();
};
