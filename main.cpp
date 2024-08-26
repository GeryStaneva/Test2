#include <iostream>
using namespace std;

void lineOne() {
    cout << "+---+---+---+" << endl;
}

void lineTwo() {
    cout << "|   |   |   |" << endl;
}

int main () {
    for (int i=0; i<3; i++) {
        lineOne();
        lineTwo();   
    }
    lineOne();
    return 1;
}