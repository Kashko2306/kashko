#include <iostream>
#include <string>

using namespace std;

class University {
public:
string name;

University(string name) {
this->name = name;
}

University* Clone() {
return new University(*this);
}
};

int main() {

University MNTU("MNTU University");

University* MNTUCopy = MNTU.Clone();

cout << MNTUCopy->name << endl;

delete MNTUCopy;

return 0;
}