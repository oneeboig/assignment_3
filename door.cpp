#include <iostream>
using namespace std;
class Door{
private:
bool isopen;
bool isclose;
public:
Door();
void opendoor(){
    // door open function body
}
void closedoor(){
      // door close function body
}
void lockdoor();
void unlockdoor();
bool isdooropen();
bool isdoorclose();
}
Door::bool isdooropen(){
    return isopen;
}
int main(){
    return 0;
}