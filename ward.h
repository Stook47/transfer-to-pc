#include<iostream>
#include<string>
#include<fstream>
#include "household.h"
#ifndef WARD_H
#define WARD_H

class Ward{
    public:
        static const size_t CAP=200;
        void load(std::istream& ins);
        void save(std::ostream& outs);
        void add(Household& tmp);
        void display(std::ostream& outs);
        void remove(std::string name);
        Household find(std::string name);
        void display_richest();
        void display_avg_income();
        void display_avg_people();
        void sort_by_income();
        void sort_by_name();

    private:
        Household data[CAP];
        size_t used = 0;

};
#endif