//
// Created by 徐耀石 on 2025/9/1.
//
#import <cmath>
#import <iostream>
#include "vect.h"
/*
using namespace std;

namespace VECTOR {
    const double Rad2Deg=45.0/atan(1.0);//57.2957795130823

    //private
    void Vector::set_mag() {
        mag=sqrt(x*x+y*y);
    }

    void Vector::set_ang() {
        if (x==0.0 and y==0.0) {
            ang=0.0;
        }
        else {
            ang=atan2(y,x);
        }
    }

    void Vector::set_x() {
        x=mag*cos(ang);
    }

    void Vector::set_y() {
        y=mag*sin(ang);
    }

    //public
    Vector::Vector() {
        x=y=mag=ang=0.0;
        mode=RECT;
    }

    Vector::Vector(double n1, double n2, Mode form) {
        mode=form;
        if (form==RECT) {
            x=n1;
            y=n2;
            set_mag();
            set_ang();
        }
        else if (form==POL) {
            mag=n1;
            ang=n2/Rad2Deg;
            set_x();
            set_y();
        }
        else {
            cout<<"不正确的数值，向量值设置为0"<<endl;
            x=y=mag=ang=0.0;
            mode=RECT;
        }


    }


}
*/