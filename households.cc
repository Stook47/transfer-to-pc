
#include "household.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Constructors
Household::Household(){
    //house_head = hd;
    //address = add;
    //occupants = num;
    //income = inc;
}

//Mutators
void Household::set_head(const string& hd){
    house_head == hd;
}
void Household::set_address(const string& add){
    address == add;
}
void Household::set_occupants(int num){
    occupants = num;
}
void Household::set_income(int inc){
    income = inc;
}

//Accessors
string Household::get_head()const{
    return house_head;
}
string Household::get_address()const{
    return address;
}
int Household::get_occupants()const{
    return occupants;
}
int Household::get_income()const{
    return income;
}

//Input and output
void Household::input(istream& ins){
    if(ins.eof()){
        cout << "You have reached the end of the file" << endl;
        return;
    }
    while(ins.peek() == '\n' || ins.peek() == '\r'){
        ins.ignore();
    }
    getline(ins, house_head);
    getline(ins, address);
    ins >> occupants;
    ins.ignore();
    ins >> income;
    ins.ignore();
}
void Household::output(ostream& outs)const{
    outs << house_head << endl;
    outs << address << endl;
    outs << occupants << endl;
    outs << income << endl;
}

//Overloaded i/o operators
istream&  operator >>(istream& ins, Household& h){
    h.input(ins);
    return ins;
}
ostream& operator <<(ostream& outs, const Household& h){
    h.output(outs);
    return outs;
}