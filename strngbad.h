//
// Created by 徐耀石 on 2025/9/1.
//

#ifndef TEST_STRNGBAD_H
#define TEST_STRNGBAD_H
#include <iostream>

class stringbad {
private:
    char *str;
    int len;
    static int num_strings;
public:
    stringbad(const char *s);
    stringbad();
    ~stringbad();
    //friend
    friend std::ostream &operator<<(std::ostream &os, const stringbad &st);
};


#endif //TEST_STRNGBAD_H