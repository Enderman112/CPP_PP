//
// Created by 徐耀石 on 2025/8/28.
//

#ifndef TEST_COORDIN_H
#define TEST_COORDIN_H

struct polar {
    double distance;
    double angle;
};
struct rect {
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif //TEST_COORDIN_H

