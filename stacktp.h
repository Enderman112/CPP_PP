//
// Created by 徐耀石 on 2025/9/6.
//

#ifndef TEST_STACKTP_H
#define TEST_STACKTP_H
#include <__format/buffer.h>

template <typename type>
class stack2 {
private:
    static const int max=10;
    type items[max];
    int top;
public:
    stack2();
    bool isempty();
    bool isfull();
    bool push(const type &item);
    bool pop(type &item);
};

template<typename type>
stack2<type>::stack2():top(0) {}

template<typename type>
bool stack2<type>::isempty() {
    return top==0;
}

template<typename type>
bool stack2<type>::isfull() {
    return top==max;
}

template<typename type>
bool stack2<type>::push(const type &item) {
    if (top<max) {
        items[top++]=item;
        return true;
    }
    else {
        return false;
    }
}

template<typename type>
bool stack2<type>::pop(type &item) {
    if (top>0) {
        item=items[--top];
        return true;
    }
    else {
        return false;
    }
}





#endif //TEST_STACKTP_H