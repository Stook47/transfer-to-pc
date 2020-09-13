#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "ward.h"
#include "household.h"
using namespace std;


void Ward::load(istream& ins){
    Household tmp;
    while(!ins.eof()){
        ins >> tmp;
        data[used] = tmp;
        used++;
    }
}
void Ward::save(ostream& outs){
    for(size_t tmp = 0; tmp <= used; tmp++){
        outs << data[tmp].get_head() << endl;
        outs << data[tmp].get_address() << endl;
        outs << data[tmp].get_occupants() << endl;
        outs << data[tmp].get_income() << endl;
    }
}
void Ward::add(Household& tmp){
    data[used + 1] = tmp;
}
void Ward::display(ostream& outs){
    size_t i = 0;
    while(i < used){
        outs << data[i].get_head() << '\n';
        outs << data[i].get_address() << '\n';
        outs << data[i].get_occupants() << '\n';
        outs << data[i].get_income() << '\n';
        i++;
    }
}
void Ward::remove(string name){
    size_t i = 0;
    cout << data[0].get_head() << " " << data[1].get_head() << endl;
    while(i <= used){
        if(name == data[i].get_head()){
            data[i] = data[i + 1];
        }
        return;
        i++;
    } 
}
Household Ward::find(string name){
    Household tmp;
    for(size_t i = 0; i <= used; i++){
        if(data[i].get_head() == name){
            tmp = data[i];
        }
    }
    return tmp;
}
void Ward::display_richest(){
    int tmp = 0;
    for(size_t i = 0; i <= used; i++){
        if(data[i].get_income() > tmp){
            tmp = data[i].get_income();
        }
    }
    for(size_t i = 0; i <= used; i++){
        if(data[i].get_income() == tmp){
            cout << data[i] << endl;
        }
    }
}
void Ward::display_avg_income(){
    int tmp;
    for(size_t i = 0; i <= used; i++){
        tmp += data[i].get_income();
    }
    cout << "The average income in the ward is $" << tmp << endl;
}
void Ward::display_avg_people(){
    int tmp;
    for(size_t i = 0; i <= used; i++){
        tmp += data[i].get_occupants();
    }
    cout << "The average number of occubants in the ward is " << tmp << endl;
}
void Ward::sort_by_income(){

}
void Ward::sort_by_name(){

}