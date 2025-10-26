//
// Created by 徐耀石 on 2025/9/7.
//

#ifndef TEST_QUEUETP_H
#define TEST_QUEUETP_H

template<typename Item>
class queueTP {
private:
    static const int q_size=10;
    class Node {
    public:
        Item item;
        Node *next;
        Node(const Item &i):item(i),next(nullptr);
    };
};//todo我懒

#endif //TEST_QUEUETP_H