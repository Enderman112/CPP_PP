//
// Created by 徐耀石 on 2025/8/30.
//
#import <iostream>

#include "stock20.h"
using namespace std;

stock::stock() {
    cout<<"默认配置"<<endl;
    company="no name";
    shares=0;
    share_val=0.0;
    total_val=0.0;
}

stock::stock(const std::string &co, long n, double pr) {
    company=co;

    if (n<0) {
        cout<<"持有股票数量不能为负数，"<<company<<"股票已设置为0"<<endl;
        shares=0;
    }
    else {
        shares=n;
    }
    share_val=pr;
    set_tot();
}

stock::~stock() {
    cout<<"再见"<<company<<endl;
}

void stock::buy(long num, double price) {
    if (num<0) {
        cout<<"股票购买数量不能为负数,交易已取消"<<endl;
    }
    else {
        shares+=num;
        share_val=price;
        set_tot();
    }
}

void stock::sell(long num, double price) {
    if (num<0) {
        cout<<"售出数量不能为负数"<<endl;
    }
    else if (num>shares) {
        cout<<"不能售出多于持有数量的股票！"<<endl;
    }
    else {
        shares-=num;
        share_val=price;
        set_tot();
    }
}

void stock::update(double price) {
    share_val=price;
    set_tot();
}

void stock::show() const{
    //可选
    ios_base::fmtflags orig=cout.setf(ios_base::fixed,ios_base::floatfield);
    streamsize prec=cout.precision(3);
    //
    cout<<"公司："<<company
    <<"持有股票数："<<shares<<endl
    <<"每股价格："<<share_val;
    cout.precision(2);//
    cout<<"总价值："<<total_val<<endl;
    //
    cout.setf(orig,ios_base::floatfield);
    cout.precision(prec);
    //
}

const stock &stock::topval(const stock &s) const {
    if (s.total_val>total_val) {
        return s;
    }
    else {
        return *this;
    }
}
