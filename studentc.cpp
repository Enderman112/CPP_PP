#include "studentc.h"
//
// Created by 徐耀石 on 2025/9/4.
//
using namespace std;
/*c
double student::average() const {
    if (scores.size()>0) {
        return scores.sum()/scores.size();
    }
    else {
        return 0;
    }
}

const string &student::Name() const {
    return name;
}

double &student::operator[](int i) {
    return scores[i];
}

double student::operator[](int i) const {
    return scores[i];
}

ostream &student::arr_out(ostream &os) const {
    int i;
    int lim=scores.size();
    if (lim>0) {
        for (i=0;i<lim;i++) {
            os<<scores[i]<<" ";
            if (i%5==4) {
                os<<endl;
            }
        }
        if (i%5!=0) {
            os<<endl;
        }
    }
    else {
        os<<"空数组";
    }
    return os;
}

//friends
istream &operator>>(istream &is, student &stu) {
    is>>stu.name;
    return is;
}

istream &getline(istream &is, student &stu) {
    getline(is,stu.name);
    return is;
}

ostream &operator<<(ostream &os, const student &stu) {
    os<<stu.name<<"的分数是："<<endl;
    stu.arr_out(os);
    return os;
}
*/

//i
double student::average() const {
    if (arraydb::size()>0) {
        return arraydb::sum()/arraydb::size();
    }
    else {
        return 0;
    }
}

const string &student::Name() const {
    return (const string &)*this;
}

double &student::operator[](int i) {
    return arraydb::operator[](i);
}

double student::operator[](int i) const {
    return arraydb::operator[](i);
}

ostream &student::arr_out(ostream &os) const {
    int i;
    int lim=arraydb::size();
    if (lim>0) {
        for (i=0;i<lim;i++) {
            os<<arraydb::operator[](i)<<" ";
            if (i%5==4) {
                os<<endl;
            }
        }
        if (i%5!=0) {
            os<<endl;
        }
    }
    else {
        os<<"空数组";
    }
    return os;
}

//friends
istream &operator>>(istream &is, student &stu) {
    is>>(string &)stu;
    return is;
}

istream &getline(istream &is, student &stu) {
    getline(is,(string &)stu);
    return is;
}

ostream &operator<<(ostream &os, const student &stu) {
    os<<(const string &)stu<<"的分数是："<<endl;
    stu.arr_out(os);
    return os;
}





