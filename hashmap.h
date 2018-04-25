#include <iostream>
#include <vector>
#include <string>
class hashmap
{
private:
int tablesize;
struct hash
{
std::string name;
std::string dateofbirth;
hash* next;
};
std::vector<hash*> v ;
public:
hashmap();
int Create_hash(std::string name);
void print();
void update(std::string& name,std::string& dateofbirth1);
void helper(int index1);
std::string searchdob(std::string name_tofind);
};
