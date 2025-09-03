//
// Created by 徐耀石 on 2025/9/3.
//
#include "queue.h"

#include <cstdlib>
/*
Queue::Queue(int qs):qsize(qs) {
    front=rear=nullptr;
    items=0;
}

Queue::~Queue(){
    node *temp;
    while (front!=nullptr) {
        temp=front;
        front=front->next;
        delete temp;
    }
}

bool Queue::is_empty() const {
    return items==0;
}

bool Queue::is_full() const {
    return items;
}

int Queue::queuecount() const {
    return items;
}


bool Queue::enqueue(const Item &item) {
    if (is_full()) {
        return false;
    }
    node *add=new node;
    add->item=item;
    add->next=nullptr;
    items++;
    if (front==nullptr) {
        front=add;
    }
    else {
        rear->next=add;
    }
    rear=add;
    return true;
}

bool Queue::dequeue(Item &item) {
    if (front==nullptr) {
        return false;
    }
    item=front->item;
    items--;
    node *temp=front;
    front=front->next;
    delete temp;
    if (items==0) {
        rear=nullptr;
    }
    return true;
}

void customer::set(long when) {
    processtime=std::rand()%3+1;
    arrive=when;
}
*/