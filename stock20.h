//
// Created by 徐耀石 on 2025/8/30.
//

#ifndef TEST_STOCK20_H
#define TEST_STOCK20_H
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
    void show() const;
    const stock &topval(const stock &s) const;
};


#endif //TEST_STOCK20_H