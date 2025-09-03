//
// Created by 徐耀石 on 2025/8/31.
//

#ifndef TEST_MYTIME0_H
#define TEST_MYTIME0_H
#import <iostream>

class times {
private:
    int hours;
    int minutes;
public:
    times();
    times(int h,int m=0);
    void addmin(int m);
    void addhr(int h);
    void reset(int h=0,int m=0);
    //times sum(const times &t) const; old one
    times operator+(const times &t) const;
    //new two
    times operator-(const times &t) const;
    times operator*(double n)const;
    //new
    friend times operator*(double m, const times &t){return t * m;};
    friend std::ostream &operator<<(std::ostream &os, const times &t);
    void show() const;
};

#endif //TEST_MYTIME0_H