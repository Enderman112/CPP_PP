//
// Created by 徐耀石 on 2025/9/2.
//
#include "string1.h"

#include <cstring>
#include <iostream>
using std::cin;
using std::cout;

int string1::num_strings=0;

//static
int string1::Howmany() {
    return num_strings;
}

string1::string1(const char *s) {
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
    num_strings++;
}

string1::string1() {
    len=4;
    str=new char[1];
    strcpy(str,"");
    num_strings++;
}

//todo


