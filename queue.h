//
// Created by 徐耀石 on 2025/9/3.
//

#ifndef TEST_QUEUE_H
#define TEST_QUEUE_H

class customer {
private:
    long arrive;
    int processtime;
public:
    customer(){arrive=processtime=0;}
    void set(long when);
    long when() const{return arrive;}
    int ptime() const{return processtime;}
};

typedef customer Item;

class Queue {
private:
    //node
    struct node{Item item; struct node* next;};
    static const int Q_size=10;
    node *front;
    node *rear;
    int items;

    const int qsize=10;
    Queue(const Queue &q):qsize(0){}
    Queue &operator=(const Queue &q){return *this;}
public:
    Queue(int qs=Q_size);
    ~Queue();
    bool is_empty() const;
    bool is_full() const;
    int queuecount() const;
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
};

#endif //TEST_QUEUE_H