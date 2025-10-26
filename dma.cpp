//
// Created by 徐耀石 on 2025/9/4.
//
#include "dma.h"

#include <cstring>

using namespace std;

baseDMA::baseDMA(const char *l, int r) {
    label=new char[strlen(l)+1];
    strcpy(label,l);
    rating=r;
}

baseDMA::baseDMA(const baseDMA &rs) {
    label=new char[strlen(rs.label)+1];
    strcpy(label,rs.label);
    rating=rs.rating;
}

baseDMA::~baseDMA() {
    delete []label;
}

baseDMA &baseDMA::operator=(const baseDMA &rs) {
    if (this==&rs) {
        return *this;
    }
    delete []label;
    label=new char[strlen(rs.label)+1];
    strcpy(label,rs.label);
    rating=rs.rating;
    return *this;
}

ostream &operator<<(ostream &os,const baseDMA &rs) {
    os<<"Label: "<<rs.label<<endl;
    os<<"Rating: "<<rs.rating<<endl;
    return os;
}

//lacksDMA
lacksDMA::lacksDMA(const char *c, const char *l, int r):baseDMA(l,r) {
    strncpy(color,c,col_len-1);
    color[col_len-1]='\0';
}

lacksDMA::lacksDMA(const char *c, const baseDMA &rs):baseDMA(rs) {
    strncpy(color,c,col_len-1);
    color[col_len-1]='\0';
}

ostream &operator<<(ostream &os,const lacksDMA &ls) {
    os<<(const baseDMA &)ls;
    os<<"Color: "<<ls.color<<endl;
    return os;
}

//hasDMA
hasDMA::hasDMA(const char *s, const char *l, int r):baseDMA(l,r) {
    style=new char[strlen(s)+1];
    strcpy(style,s);
}

hasDMA::hasDMA(const char *s, const baseDMA &rs):baseDMA(rs) {
    style=new char[strlen(s)+1];
    strcpy(style,s);
}

hasDMA::hasDMA(const hasDMA &hs):baseDMA(hs) {
    style=new char[strlen(hs.style)+1];
    strcpy(style,hs.style);
}

hasDMA::~hasDMA() {
    delete []style;
}

hasDMA &hasDMA::operator=(const hasDMA &hs) {
    if (this==&hs) {
        return *this;
    }
    baseDMA::operator=(hs);
    delete []style;
    style=new char[strlen(hs.style)+1];
    strcpy(style,hs.style);
    return *this;
}

ostream &operator<<(ostream &os,const hasDMA &hs) {
    os<<(const baseDMA &)hs;
    os<<"Style"<<hs.style<<endl;
    return os;
}













