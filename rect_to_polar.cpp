//
// Created by 徐耀石 on 2025/8/28.
//
#import <iostream>
#import <cmath>
#import "coordin.h"
using namespace std;

polar rect_to_polar(rect xypos) {
    polar answer;

    answer.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angle=atan2(xypos.y,xypos.x);
    return answer;
}

void show_polar(polar dapos) {
    const double rad2deg=57.29577951;

    cout<<"距离："<<dapos.distance;
    cout<<", 角度："<<dapos.angle*rad2deg;
    cout<<"度"<<endl;
}