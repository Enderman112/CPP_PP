//
// Created by 徐耀石 on 2025/9/4.
//

#ifndef TEST_DMA_H
#define TEST_DMA_H
#include <iostream>
using namespace std;

class baseDMA {
private:
     char *label;
     int rating;
public:
     baseDMA(const char *l="null",int r=0);
     baseDMA(const baseDMA &rs);
     virtual ~baseDMA();
     baseDMA &operator=(const baseDMA &rs);
     friend ostream &operator<<(ostream &os,const baseDMA &rs);
};

class lacksDMA:baseDMA {
private:
     static const int col_len=40;
     char color[col_len];
public:
     lacksDMA(const char *c="blank",const char *l="null",int r=0);
     lacksDMA(const char *c,const baseDMA &rs);
     friend ostream &operator<<(ostream &os,const lacksDMA &rs);
};

class hasDMA:baseDMA {
private:
     char *style;
public:
     hasDMA(const char *s="none",const char *l="blank",int r=0);
     hasDMA(const char *s, const baseDMA &rs);
     hasDMA(const hasDMA &hs);
     ~hasDMA();
     hasDMA &operator=(const hasDMA &rs);
     friend ostream &operator<<(ostream &os,const hasDMA &rs);
};
#endif //TEST_DMA_H