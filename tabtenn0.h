//
// Created by 徐耀石 on 2025/9/3.
//

#ifndef TEST_TABTENN0_H
#define TEST_TABTENN0_H
#include <string>
using std::string;

class tabletennisplayer {
private:
    string fname;
    string lname;
    bool hastable;
public:
    tabletennisplayer(const string &fn="none",const string &ln="none",bool ht=false);
    void name() const;
    bool Hastable() const{return hastable;};
    void resettable(bool v){hastable=v;}
};
//new
class ratedplayer:public tabletennisplayer {
private:
    unsigned int rating;
public:
    ratedplayer(unsigned int n=0,const string &fn="none",const string &ln="none",bool ht=false);
    ratedplayer(unsigned int r,const tabletennisplayer &tp);
    unsigned int Rating() const{return rating;}
    void resetrating(unsigned int r){rating=r;}
};
#endif //TEST_TABTENN0_H