//
// Created by 徐耀石 on 2025/9/8.
//

#ifndef TEST_EXC_MEAN_H
#define TEST_EXC_MEAN_H
#include <iostream>

class bad_hmean {
private:
    double v1;
    double v2;
public:
    bad_hmean(double a=0,double b=0):v1(a),v2(b){}
    void msg();
};

inline void bad_hmean::msg() {
    std::cout << "hmean("<<v1<<","<<v2<<"):"
    <<"无效参数：a=-b"<<endl;
}

class bad_gmean {
public:
    double v1;
    double v2;
    bad_gmean(double a=0,double b=0):v1(a),v2(b){}
    const char *msg();
};

inline const char *bad_gmean::msg() {
    return "gmean()参数应当大于等于0";
}



#endif //TEST_EXC_MEAN_H