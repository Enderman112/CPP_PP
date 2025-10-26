//
// Created by 徐耀石 on 2025/9/4.
//

#ifndef TEST_BRASS_H
#define TEST_BRASS_H

#include <algorithm>
#include <string>

class brass {
private:
    std::string fullname;
    long acctnum;
    double balance;
public:
    brass(const std::string &s="nullbody",long an=-1,double bal=0.0);
    void deposit(double amt);
    virtual void withdraw(double amt);
    double Balance() const;
    virtual void viewacct() const;
    virtual ~brass();
};

class brassplus:public brass {
private:
    double maxloan;
    double rate;
    double owesbank;
public:
    brassplus(const std::string &s="nullbody",long an=-1,double bal=0.0,double ml=500,double r=0.11125);
    brassplus(const brass &ba,double ml=500,double r=0.11125);
    virtual void viewacct() const;
    virtual void withdraw(double amt);
    void resetmax(double m){maxloan=m;}
    void resetrate(double r){rate=r;}
    void resetowes(){owesbank=0;}
};

#endif //TEST_BRASS_H