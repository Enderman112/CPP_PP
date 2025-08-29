//
// Created by 徐耀石 on 2025/8/29.
//

#ifndef TEST_NAMESP_H
#define TEST_NAMESP_H
#import <string>
namespace pers {
    struct person {
        std::string fname;
        std::string lname;
    };
    void getperson(person &);
    void showperson(const person &);
}

namespace debts {
    using namespace pers;

    struct debt {
        person name;
        double amount;
    };
    void getdebt(debt &);
    void showdebt(const debt &);
    double sumdebts(const debt ar[], int n);
}
#endif //TEST_NAMESP_H