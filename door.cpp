#include <iostream>
using namespace std;
class Door{
private:
bool isopen;
bool isclose;
public:
Door();
void opendoor();
void closedoor();
void lockdoor();
void unlockdoor();
bool isdooropen();
bool isdoorclose();
}
Door::bool isdoorclose(){
  return isclose;
}
int main(){
    return 0;
}