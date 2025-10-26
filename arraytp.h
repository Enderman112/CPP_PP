//
// Created by 徐耀石 on 2025/9/6.
//

#ifndef TEST_ARRAYTP_H
#define TEST_ARRAYTP_H
#include <iostream>
#include <cstdlib>

template<typename T,int n>
class arraytp {
private:
    T ar[n];
public:
    arraytp() {}
    explicit arraytp(const T &v);
    virtual T &operator[](int i);
    virtual T operator[](int i) const;
};

template<typename T, int n>
arraytp<T, n>::arraytp(const T &v) {
    for (int i=0;i<n;i++) {
        ar[i]=v;
    }
}

template<typename T, int n>
T &arraytp<T, n>::operator[](int i) {
    if (i<0 || i>=n) {
        std::cerr << "超出数组"<<i<<"的限制"<<std::endl;
        exit(EXIT_FAILURE);
    }
    return ar[i];
}

template<typename T, int n>
T arraytp<T, n>::operator[](int i) const {
    if (i<0 || i>=n) {
        std::cerr << "超出数组"<<i<<"的限制"<<std::endl;
        exit(EXIT_FAILURE);
    }
    return ar[i];
}

#endif //TEST_ARRAYTP_H