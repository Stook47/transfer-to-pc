#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "ward.h"
#include "household.h"
using namespace std;



static const size_t CAP=200;

void Ward::load(ifstream& ins){
    Household tmp;
    while(!ins.eof()){
        ins >> tmp;
        data[used] = tmp;
        used++;
    }
}
void save(ofstream& outs){

}
void Ward::add(Household& tmp){
}
void Ward::display(ostream& outs){
    while(size_t i = 0 < used){
        cout << data[i].get_head() << endl;
        cout << data[i].get_address() << endl;
        cout << data[i].get_occupants() << endl;
        cout << data[i].get_income() << endl;
        i++;
    }
}
void remove(string name){

}
int find(string name){

}
void display_richest(){

}
void display_avg_income(){

}
void display_avg_people(){

}
void sort_by_income(){

}
void sort_by_name(){

}