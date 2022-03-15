
#include "mat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
int main() {
    bool  Tmp= true;
    try {
    while(Tmp){
            int Column;
            int Row;
            char a;
            char b;
            cout << "Please insert a  Column" << std::endl;
            cin >> Column;
            cout << "Please insert a  Row" << std::endl;
            cin >> Row;
            cout << "Please insert a  Char1" << std::endl;
            cin >> a;
            cout << "Please insert a  Char2" << std::endl;
            cin >> b;
            cout << ariel::mat(Column, Row, a, b) << std::endl;
    }
    } catch (std::out_of_range ex) {
        cout << ex.what()  << endl;
    }
    return 0;
}