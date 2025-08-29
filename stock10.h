//
// Created by 徐耀石 on 2025/8/29.
//

#ifndef TEST_STOCK10_H
#define TEST_STOCK10_H
#import <string>

class  stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){total_val=shares*share_val;};

public:
    stock();
    stock(const std::string &co, long n=0, double pr=0.0);
    ~stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif //TEST_STOCK10_H