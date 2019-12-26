#include <iostream>
#include <fstream>
#include "bracechecker.h"
using namespace::std;
bool brace = true;
int main(){
    string problem, name;
    cout << "Write name of file " << endl;
    cin >> name;
    ifstream file(name,ifstream::in);
    if (!file.good()){
        cerr << "Can't open file " << name << endl;
        return 1;
    }
    file >> problem;
    if (bracechecker::isbalanced(problem)){
        cout << "Balanced" << endl;
    }
    else {
        cout << "Not balanced" << endl;
    }

}
