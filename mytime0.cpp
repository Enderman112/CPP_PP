//
// Created by 徐耀石 on 2025/8/31.
//
/*
#include "mytime0.h"

#import <iostream>

times::times() {
     hours=minutes=0;
}
times::times(int h, int m) {
     hours=h;
     minutes=m;
}
void times::addmin(int m) {
     minutes+=m;
     hours+=minutes/60;
     minutes%=60;
}
void times::addhr(int h) {
     hours+=h;
}
void times::reset(int h, int m) {
     hours=h;
     minutes=m;
}
/*
times times::sum(const times &t) const {
     times sum;
     sum.minutes=minutes+t.minutes;
     sum.hours=hours+t.hours+sum.minutes/60;
     sum.minutes%60;
     return sum;
}old one
*/

/*
times times::operator+(const times &t) const {
     times sum;
     sum.minutes=minutes+t.minutes;
     sum.hours=hours+t.hours+sum.minutes/60;
     sum.minutes%=60;
     return sum;
}

//new two
times times::operator-(const times &t) const {
     times diff;
     int tot1, tot2;
     tot1=t.minutes+60*t.hours;
     tot2=minutes+60*minutes;
     diff.minutes=(tot2-tot1)%60;
     diff.hours=(tot2-tot1)/60;
     return diff;//??
}

times times::operator*(double mult) const {
     times result;
     long totalmin=hours*mult*60+minutes*mult;
     result.hours=totalmin/60;
     result.minutes=totalmin%60;
     return result;
}

/*
void times::show() const {
     std::cout<<hours<<"小时"<<minutes<<"分钟";
}replace by cout
*/
/*
std::ostream &operator<<(std::ostream &os, const times &t) {
     os<<t.hours<<"小时"<<t.minutes<<"分钟";
     return os;
}
*/