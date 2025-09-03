//
// Created by 徐耀石 on 2025/8/30.
//

#ifndef TEST_STACK_H
#define TEST_STACK_H

typedef unsigned long item;

class stacks {
private:
    enum {max=10};
    item items[max];
    int top;
public:
    stacks();
    bool isempty() const;
    bool isfull() const;
    bool push(const item &item1);
    bool pop(item &item1);
};

#endif //TEST_STACK_H

