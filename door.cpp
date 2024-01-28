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
void closedoor();
void lockdoor();
void unlockdoor();
bool isdooropen();
bool isdoorclose();
}
int main(){
    return 0;
}