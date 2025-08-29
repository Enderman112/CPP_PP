//
// Created by 徐耀石 on 2025/8/29.
//
/*
#import  <iostream>
#import "namesp.h"
using namespace std;

namespace pers {
    using std::cout;
    using std::cin;
    void getperson(person &rp) {
        cout<<"输入名: ";
        cin>>rp.fname;
        cout<<"输入姓: ";
        cin>>rp.lname;
    }
    void showperson(const person &rp) {
        cout<<rp.lname<<", "<<rp.fname;
    }
}

namespace debts {
    void getdebt(debt &rd) {
        getperson(rd.name);
        cout<<"输入欠款金额: ";
        cin>>rd.amount;
    }
    void showdebt(const debt &rd) {
        showperson(rd.name);
        cout<<rd.amount<<"元"<<endl;
    }
    double sumdebts(const debt ar[], int n) {
        double total=0;
        for (int i=0;i<n;i++) {
            total+=ar[i].amount;
        }
        return total;
    }
}
*/

