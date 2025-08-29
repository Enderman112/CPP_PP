//
// Created by 徐耀石 on 2025/8/29.
//
/*
#import <iostream>

using namespace std;
extern double warming;

void update(double dt);
void local();

void update(double dt) {
    extern double warming;
    warming+=dt;
    cout<<"全球变暖升高到"<<warming<<"度。"<<endl;
}

void local() {
    double warming=0.8;

    cout<<"本地变暖升高到"<<warming<<"度。"<<endl;
    cout<<"但全局变暖为"<<::warming<<"度。"<<endl;
}
*/
