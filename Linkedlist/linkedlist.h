#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
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
bool gethead();
bool searchval(int searchval);
void deletenode(int del);
void reverselist();
void delete_atindex(int index);
void merge_sort();
bool palindrome_linkedlistcheck(ll* temp);
bool check_reverse(std::vector<int>& original);
void printval();
};
