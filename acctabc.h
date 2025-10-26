//
// Created by 徐耀石 on 2025/9/4.
//

#ifndef TEST_ACCTABC_H
#define TEST_ACCTABC_H
#include <iostream>
#include <string>

class acctabc {
private:
    std::string fullname;
    long acctnum;
    double balance;
protected:
    struct formatting {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string &Fullname() const{return fullname;}
    long Acctnum() const{return acctnum;}
    formatting setformat() const;
    void restore(formatting &f) const;
public:
    acctabc(const std::string &s="nullname",long an=-1,double bal=0.0);
    void deposit(double amt);
    virtual void withdraw(double amt)=0;
    double balance() const{return balance;}
    virtual viewacct() const=0;
    virtual ~acctabc();
};

class brass:public acctabc {

};

class brassplus:acctabc {

};

//Todo!!!
#endif //TEST_ACCTABC_H