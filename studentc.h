//
// Created by 徐耀石 on 2025/9/4.
//

#ifndef TEST_STDENTC_H
#define TEST_STDENTC_H

#include <iostream>
#include <string>
#include <valarray>
using namespace std;
/* c
class student {
private:
    typedef valarray<double> arraydb;
    string name;
    arraydb scores;
    //output
    ostream &arr_out(ostream &os) const;
public:
    student():name("nullname"),scores(){}
    explicit student(const string &s):name(s),scores(){}
    explicit student(int n):name("nully"),scores(n){}
    student(const string &s, int n):name(s),scores(n){}
    student(const string &s, const arraydb &a):name(s),scores(a){}
    student(const char *str, const double *pd, int n):name(str),scores(pd,n){}
    ~student(){}
    double average() const;
    const string &Name() const;
    double &operator[](int i);
    double operator[](int i) const;
    //friends
    friend istream &operator>>(istream &is, student &stu);
    friend istream &getline(istream &is, student &stu);
    friend ostream &operator<<(ostream &os, const student &stu);
};*/

//i
class student :private string,private valarray<double> {
private:
    typedef valarray<double> arraydb;
    ostream &arr_out(ostream &os) const;
public:
    student():string("null student"),arraydb(){}
    explicit student(const string &s):string(s),arraydb(){}
    explicit student(int n):string("nully"),arraydb(n){}
    student(const string &s, int n):string(s),arraydb(n){}
    student(const string &s, const arraydb &a):string(s),arraydb(a){}
    student(const char *str, const double *pd, int n):string(str),arraydb(pd,n){}
    ~student(){}
    double average() const;
    const string &Name() const;
    double &operator[](int i);
    double operator[](int i) const;
    //friends
    friend istream &operator>>(istream &is, student &stu);
    friend istream &getline(istream &is, student &stu);
    friend ostream &operator<<(ostream &os, const student &stu);
};

#endif //TEST_STDENTC_H