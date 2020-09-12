#include<iostream>
#include<fstream>
#include "household.h"
#include "ward.h"
using namespace std;

// The menu function displays the menu and returns the user's choice
int menu();

int main(){
    Household tmp;
    Ward neighborhood;
    ifstream ins;
    ins.open("households.txt");
    if(ins.fail()){
        cout << "Error: failed to open file." << endl;
    }
    neighborhood.load(ins);
    ins.close();
    neighborhood.display(cout);
    return 0;
}