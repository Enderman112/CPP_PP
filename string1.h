//
// Created by 徐耀石 on 2025/9/2.
//

#ifndef TEST_STRING1_H
#define TEST_STRING1_H
#include <iostream>
using namespace std;

class string1 {
private:
    char *str;
    int len;
    static int num_strings;
    static const int cinlimit=80;
public:
    string1(const char *s);
    string1();
    string1(const string &);
    ~string1();
    int length() const{return len;};
    //overload
    string1 &operator=(const string &);
    string1 &operator+(const char *);
    char &operator[](int i);
    const char &operator[](int i) const;
    //friend overload
    friend bool operator<(const string1 &st1, const string1 &st2);
    friend bool operator>(const string1 &st1, const string1 &st2);
    friend bool operator==(const string1 &st1, const string1 &st2);
    friend ostream &operator<<(ostream &os, const string1 &st);
    friend istream &operator>>(istream &is, string1 &st);
    //static
    static int Howmany();
};

#endif //TEST_STRING1_H