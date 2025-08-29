#include <iostream>
#import <cmath>
#import <climits>
#import <cstring>
#import <vector>
#import <array>
#import <ctime>
#import <cctype>
#import <fstream>
#import <cstdlib>
#include <__locale>
#include <__chrono/formatter.h>
#import <new>
#import "namesp.h"
#import "coordin.h"
#import "stock00.h"
#import "stock10.h"

using namespace std;
#define ZERO 0;
// Created by 徐耀石 on 2025/8/23.

/*
int main() {
    int rats=101;
    int &rodents=rats; // rodents is a reference to rats
    cout<<"rats = "<<rats;
    cout<<"rodents = "<<rodents<<endl;
    rodents++;
    cout<<"rats = "<<rats;
    cout<<"rodents = "<<rodents<<endl;
    cout<<"rats的地址: "<<&rats<<endl;
    cout<<"rodents的地址: "<<&rodents<<endl;
}
*/

/*
int main() {
    int rats=101;
    int &rodents=rats; // rodents is a reference to rats
    cout<<"rats = "<<rats;
    cout<<" rodents = "<<rodents<<endl;

    cout<<"rats的地址: "<<&rats;
    cout<<" rodents的地址: "<<&rodents<<endl;

    int bunnies=50;
    rodents=bunnies;
    cout<<"bunnies = "<<bunnies;
    cout<<"rats = "<<rats;
    cout<<" rodents = "<<rodents<<endl;

    cout<<"bunnies的地址: "<<&bunnies;
    cout<<" rats的地址: "<<&rats;
    cout<<" rodents的地址: "<<&rodents<<endl;
    return 0;
}
*/

/*
void swapr(int &a, int &b);
void swapp(int *p, int *q);
void swapv(int a, int b);
int main() {
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "钱包1: " << wallet1 << ", 钱包2: " << wallet2 << endl;

    cout<<"使用引用交换钱包的值:\n";
    swapr(wallet1,wallet2);
    cout << "钱包1: " << wallet1 << ", 钱包2: " << wallet2 << endl;

    cout<<"使用指针交换钱包的值:\n";
    swapp(&wallet1,&wallet2);
    cout << "钱包1: " << wallet1 << ", 钱包2: " << wallet2 << endl;

    cout<<"尝试直接传递交换值\n";
    swapv(wallet1, wallet2);
    cout << "钱包1: " << wallet1 << ", 钱包2: " << wallet2 << endl;

    return 0;
}

void swapr(int &a, int &b) {
    int temp;
    temp = a;
    a=b;
    b=temp;
}
void swapp(int *p, int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void swapv(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
*/

/*
double cube(double a);
double refcube(double &ra);
int main() {
    double x=3.0;

    cout<<cube(x);
    cout<<"是"<<x<<"的立方"<<endl;
    cout<<refcube(x);
    cout<<"是"<<x<<"的立方"<<endl;

    return 0;
}

double cube(double a) {
    a *= a*a;
    return a;
}
double refcube(double &ra) {
    ra*=ra*ra;
    return ra;
}
*/

/*
struct free_throws {
    string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws &ft);
void set_pc(free_throws &ft);
free_throws &accumulate(free_throws &target, const free_throws &source);

int main() {
    free_throws one={"Ifelsa Branch",13,14};
    free_throws two={"Andor Knott",10,16};
    free_throws three={"Minnie Max",7,9};
    free_throws four={"Whily Looper",5,9};
    free_throws five={"Long Long",6,14};
    free_throws team={"Throwgoods",0,0};

    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team,one);
    display(team);

    display(accumulate(team,two));
    accumulate(accumulate(team,three),four);
    display(team);

    dup=accumulate(team,five);
    cout<<"当前团队为："<<endl;
    display(team);
    cout<<"在assignment后显示dup"<<endl;
    display(dup);
    set_pc(four);

    accumulate(dup,five)=four;
    cout<<"在ill-advised assignment后显示dup"<<endl;
    display(dup);
    return 0;
}

void display(const free_throws &ft) {
    cout<<"姓名："<<ft.name<<endl;
    cout<<"投篮命中数："<<ft.made<<endl;
    cout<<"投篮出手数："<<ft.attempts<<endl;
    cout<<"命中率："<<ft.percent<<endl;
}

void set_pc(free_throws &ft) {
    if (ft.attempts!=0) {
        ft.percent=100.0f*float(ft.made)/float(ft.attempts);
    } else {
        ft.percent=0;
    }
}

free_throws &accumulate(free_throws &target, const free_throws &source) {
    target.attempts+=source.attempts;
    target.made+=source.made;
    set_pc(target);
    return target;
}
*/

/*
string ver1(const string &s1, const string &s2);
const string &ver2(string &s1, const string &s2);
const string &ver3(string &s1, const string &s2);//bad one

int main() {
    string input;
    string copy;
    string result;

    cout<<"输入一行字：";
    getline(cin,input);
    copy=input;
    cout<<"你输入了："<<input<<endl;
    result=ver1(input,"***");
    cout<<"通过ver1得到的结果："<<result<<endl;
    cout<<"原始字符串："<<input<<endl;

    result=ver2(input,"###");
    cout<<"通过ver2得到的结果："<<result<<endl;
    cout<<"原始字符串："<<input<<endl;

    cout<<"正在重置原始字符串"<<endl;
    input=copy;
    result=ver3(input,"@@@");
    cout<<"通过ver3得到的结果："<<result<<endl;
    cout<<"原始字符串："<<input<<endl;

    return 0;
}

string ver1(const string &s1, const string &s2) {
    string temp;
    temp=s2+s1+s2;
    return temp;
}
const string &ver2(string &s1, const string &s2) {
    s1=s2+s1+s2;
    return s1;
}
const string &ver3(string &s1, const string &s2) {
    string temp;
    temp=s2+s1+s2;
    //返回局部变量的引用是不安全的
    return temp;
}
*/

/*
void file_it(ostream &os, double fo, const double fe[], int n);
const int limit=5;
int main() {
    ofstream fout;
    const char *fn="ep-data.txt";
    fout.open(fn);
    if (!fout.is_open()) {
        cout<<"无法读取文件"<<fn<<",程序终止"<<endl;
        exit(EXIT_FAILURE);
    }
    double obj;
    cout<<"以mm为单位输入你的望远镜焦距: ";
    cin>>obj;
    double eps[limit];
    cout<<"以mm为单位输入"<<limit<<"个目镜焦距: "<<endl;
    for (int i=0;i<limit;i++) {
        cout<<"目镜#"<<i+1<<": ";
        cin>>eps[i];
    }
    file_it(fout,obj,eps,limit);
    file_it(cout,obj,eps,limit);
    cout<<"完成"<<endl;
    return 0;
}

void file_it(ostream &os, double fo, const double fe[], int n) {
    ios_base::fmtflags initial;
    initial=os.setf(ios_base::fixed);
    os.precision(0);
    os<<"焦距为"<<fo<<"mm:"<<endl;
    os.setf(ios_base::showpoint);
    os.precision(1);
    os.width(12);
    os<<"目镜焦距";
    os.width(15);
    os<<"放大倍数"<<endl;
    for (int i=0;i<n;i++) {
        os.width(12);
        os<<fe[i];
        os.width(15);
        os<<int(fo/fe[i]+0.5)<<endl;
    }
    os.setf(initial);
}
*/

/*
const int arsize=80;
char *left(const char *str, int n=1);
int main() {
    char sample[arsize];
    cout<<"输入一段字"<<endl;
    cin.getline(sample,arsize);
    char *ps=left(sample,4);
    cout<<ps<<endl;
    delete [] ps;
    ps=left(sample);
    cout<<ps<<endl;
    delete [] ps;
    return 0;
}

char *left(const char *str, int n) {
    if (n<0) {
        n=0;
    }
    char *p=new char[n+1];
    int i;
    for (i=0; i<n&&str[i]; i++) {
        p[i]=str[i];
    }
    while (i<=n) {
        p[i++]='\0';
    }
    return p;
}
*/

/*
unsigned long left(unsigned long num, unsigned ct);
char *left(const char *str, int n=1);
int main() {
    char *trip="Hawaii!!";
    unsigned long n=12345678;
    int i;
    char *temp;

    for (i=1; i<10; i++) {
        cout<<left(n,i)<<endl;
        temp=left(trip,i);
        cout<<temp<<endl;
        delete [] temp;
    }
    return 0;
}

unsigned long left(unsigned long num, unsigned ct) {
    unsigned digits=1;
    unsigned long n=num;

    if (ct==0 or num==0) {
        return 0;
    }
    while (n/=10) {
        digits++;
    }
    if (digits>ct) {
        ct=digits=ct;
        while (ct--) {
            num/=10;
        }
        return num;
    }
    else {// digits<=ct
        return num;
    }
}

char *left(const char *str, int n) {
    if (n<0) {
        n=0;
    }
    char *p=new char[n+1];
    int i;
    for (i=0; i<n&&str[i]; i++) {
        p[i]=str[i];
    }
    while (i<=n) {
        p[i++]='\0';
    }
    return p;
}
*/

/*
template <typename T>
void aswap(T &a, T &b);

int main() {
    int i=10;
    int j=20;
    cout<<"i,j="<<i<<","<<j<<endl;
    cout<<"调用aswap()"<<endl;
    aswap(i,j);
    cout<<"现在i,j="<<i<<","<<j<<endl;

    double x=24.5;
    double y=81.7;
    cout<<"x,y="<<x<<","<<y<<endl;
    cout<<"调用aswap()"<<endl;
    aswap(x,y);
    cout<<"现在x,y="<<x<<","<<y<<endl;
    return 0;
}

template <typename T>
void aswap(T &a, T &b) {
    T temp;
    temp=a;
    a=b;
    b=temp;
}
*/

/*
template <typename T>
void Swap(T &a,T &b);

template <typename T>
void Swap(T *a,T *b, int n);
void Show(int a[]);
const int lim=8;
int main() {
    int i=10,j=20;
    cout<<"i,j="<<i<<","<<j<<endl;
    cout<<"调用Swap()"<<endl;
    Swap(i,j);
    cout<<"现在i,j="<<i<<","<<j<<endl;

    int d1[lim]={0,7,0,4,1,7,7,6};
    int d2[lim]={0,7,2,0,1,9,6,9};
    cout<<"原始数组为"<<endl;
    Show(d1);
    Show(d2);
    cout<<"调用Swap()"<<endl;
    Swap(d1,d2,lim);
    cout<<"交换后的数组为"<<endl;
    Show(d1);
    Show(d2);
    return 0;
}

template <typename T>
void Swap(T &a,T &b) {
    T temp;
    temp=a;
    a=b;
    b=temp;
}

template <typename T>
void Swap(T *a,T *b, int n) {
    T temp;
    for (int i=0; i<n; i++) {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}

void Show(int a[]) {
    cout<<a[0]<<a[1]<<"/";
    cout<<a[2]<<a[3]<<"/";
    for (int i=4; i<lim; i++) {
        cout<<a[i];
    }
    cout<<endl;
}
*/

/*
template <typename T>
void Swap(T &a, T &b);

struct job {
    char name[40];
    double salary;
    int floor;
};
// 显式具体化
template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);
int main() {
    cout.precision(2);
    cout.setf(ios::fixed,ios::floatfield);
    int i=10, j=20;
    cout<<"i,j="<<i<<","<<j<<endl;
    cout<<"调用Swap()"<<endl;
    Swap(i,j);
    cout<<"现在i,j="<<i<<","<<j<<endl;

    job sue={"susan yaffee",73000.60,7};
    job sid={"sidney taffee",78060.72,9};
    cout<<"交换前："<<endl;
    Show(sue);
    Show(sid);
    cout<<"调用Swap()"<<endl;
    Swap(sue,sid);
    cout<<"交换后："<<endl;
    Show(sue);
    Show(sid);
    return 0;
}

template <typename T>
void Swap(T &a, T &b) {
    T temp;
    temp=a;
    a=b;
    b=temp;
}

template <> void Swap<job>(job &j1, job &j2) {
    double t1;
    int t2;
    t1=j1.salary;
    j1.salary=j2.salary;
    j2.salary=t1;
    t2=j1.floor;
    j1.floor=j2.floor;
    j2.floor=t2;
}

void Show(job &j) {
    cout<<j.name<<" "<<j.salary<<"在"<<j.floor<<"楼"<<endl;
}
*/

/*
template <typename T>
void showarr(T arr[], int n);

template <typename T>
void showarr(T *arr[], int n);

struct debts {
    char name[50];
    double amount;
};

int main() {
    int things[6]={13,31,103,301,310,130};
    struct debts mr_E[3]={
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double *pd[3];

    for (int i=0; i<3; i++) {
        pd[i]=&mr_E[i].amount;
    }
    cout<<"E先生数到的事物是"<<endl;
    showarr(things,6);
    cout<<"E先生的债务是："<<endl;
    showarr(pd,3);
    return 0;
}

template <typename T>
void showarr(T arr[], int n) {
    cout<<"模版A"<<endl;
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

template <typename T>
void showarr(T *arr[], int n) {
    cout<<"模版B"<<endl;
    for (int i=0;i<n;i++) {
        cout<<*arr[i]<<" ";
    }
    cout<<endl;
}
*/

/*
template <typename T>
T lesser(T a, T b) {
    return a<b?a:b;
}

int lesser(int a, int b) {
    a=a<0?-a:a;
    b=b<0?-b:b;
    return a<b?a:b;
}

int main() {
    int m=20, n=-30;
    double x=15.5, y=25.9;

    cout<<lesser(m,n)<<endl;
    cout<<lesser(x,y)<<endl;
    cout<<lesser<>(m,n)<<endl;
    cout<<lesser<int>(x,y)<<endl;
    return 0;
}
*/

/*
int main() {
    rect rplace;
    polar pplace;

    cout<<"输入x和y坐标：";
    while (cin>>rplace.x>>rplace.y) {
        pplace=rect_to_polar(rplace);
        show_polar(pplace);
        cout<<"请继续输入或q退出：";
    }
    cout<<"再见"<<endl;
    return 0;
}
*/

/*
//autoscp
void oil(int x);
int main() {
    int texas=31;
    int years=2011;
    cout<<"在main函数中，texas的值为："<<texas
    <<"texas的地址为："<<&texas<<endl;
    cout<<"years的值为："<<years
    <<"years的地址为："<<&years<<endl;
    oil(texas);
    cout<<"在main函数中，texas的值为："<<texas
    <<"texas的地址为："<<&texas<<endl;
    cout<<"years的值为："<<years
    <<"years的地址为："<<&years<<endl;
    return 0;
}

void oil(int x) {
    int texas=5;
    cout<<"在oil函数中，texas的值为："<<texas
    <<"texas的地址为："<<&texas<<endl;
    cout<<"x的值为："<<x<<"x的地址为："<<&x<<endl;
    {//新的代码块
        int texas=113;
        cout<<"在oil函数中新代码块中，texas的值为："<<texas
        <<"texas的地址为："<<&texas<<endl;
        cout<<"x的值为："<<x<<"x的地址为："<<&x<<endl;
    }
    cout<<"离开新代码块后，texas的值为："<<texas
    <<"texas的地址为："<<&texas<<endl;
}
*/

/*
double warming=0.3;

void update(double dt);
void local();

int main() {
    cout<<"全球变暖了"<<warming<<"度"<<endl;
    update(0.1);
    cout<<"全球变暖了"<<warming<<"度"<<endl;
    local();
    cout<<"全球变暖了"<<warming<<"度"<<endl;
    return 0;
}
*/

/*
int tom=3;
int dick=30;
static int harry=300;

void remote_access();

int main() {
    cout<<"main中有如下地址"<<endl;
    cout<<&tom<<"=&tom,"<<&dick<<"=&dick";
    cout<<&harry<<"=&harry,"<<endl;
    remote_access();
    return 0;
}
*/

/*
const int arsize=10;

void strcount(const char *str);
int main() {
    char input[arsize];
    char next;

    cout<<"输入一行字"<<endl;
    cin.get(input,arsize);
    while (cin) {
        cin.get(next);
        while (next!='\n') {
            cin.get(next);
        }
        strcount(input);
        cout<<"输入下一行字或以空白退出"<<endl;
        cin.get(input,arsize);
    }
    cout<<"再见";
    return 0;
}

void strcount(const char *str) {
    static int total=0;
    int count=0;
    cout<<"\""<<str<<"\"有";
    while (*str++) {
        if (*str=='\0') { //fixed blank bug
            count-=1;
        }
        count++;
    }
    total+=count;
    cout<<count<<"个字"<<endl;
    cout<<"总共输入了"<<total<<"个字"<<endl;
}
*/

/*
const int buf=512;
const int n=5;
char buffer[buf];
int main() {
    double *pd1,*pd2;
    int i;
    cout<<"使用new和placement new分配内存"<<endl;
    pd1=new double[n];
    pd2=new (buffer)double[n];
    for (i=0;i<n;i++) {
        pd2[i]=pd1[i]=1000+20.0*i;
    }
    cout<<"内存地址"<<endl<<"heap: "<<pd1<<endl;
    cout<<"static:"<<(void *)buffer<<endl;
    cout<<"内存内容"<<endl;
    for (i=0;i<n;i++) {
        cout<<pd1[i]<<"在"<<&pd1[i]<<"; ";
        cout<<pd2[i]<<"在"<<&pd2[i]<<endl;
    }

    cout<<"第二次使用new和placement new分配内存"<<endl;
    double *pd3,*pd4;
    pd3=new double[n];
    pd4=new (buffer)double[n];
    for (i=0;i<n;i++) {
        pd4[i]=pd3[i]=1000+40.0*i;
    }
    cout<<"内存内容"<<endl;
    for (i=0;i<n;i++) {
        cout<<pd3[i]<<"在"<<&pd3[i]<<"; ";
        cout<<pd4[i]<<"在"<<&pd4[i]<<endl;
    }

    cout<<"第三次使用new和placement new分配内存"<<endl;
    delete [] pd1;
    pd1=new double[n];
    pd2=new (buffer+n*sizeof(double))double[n];
    for (i=0;i<n;i++) {
        pd2[i]=pd1[i]=1000+60.0*i;
    }
    cout<<"内存内容"<<endl;
    for (i=0;i<n;i++) {
        cout<<pd1[i]<<"在"<<&pd1[i]<<"; ";
        cout<<pd2[i]<<"在"<<&pd2[i]<<endl;
    }
    delete []pd1;
    delete []pd3;
}
*/

/*
void other(void);
void another(void);
int main(void) {
    using debts::debt;
    using debts::showdebt;

    debt golf={{"Benny","Goatsniff"},120.0};
    showdebt(golf);
    other();
    another();
    return 0;
}

void other(void) {
    using namespace std;
    using namespace debts;
    person dg={"doodles","glister"};
    showperson(dg);
    cout<<endl;
    debt zippy[3];
    int i;
    for (i=0;i<3;i++) {
        getdebt(zippy[i]);
    }
    for (i=0;i<3;i++) {
        showdebt(zippy[i]);
    }
    cout<<"全部债务"<<sumdebts(zippy,3)<<"元"<<endl;
    return;
}

void another(void) {
    using pers::person;
    person collector={"Milo","Rightshift"};
    pers::showperson(collector);
    cout<<endl;
}
*/

/*
int main() {
    stock fluffy_the_cat;
    fluffy_the_cat.acquire("nanosmart",20,12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15,18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400,20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000,40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000,0.125);
    fluffy_the_cat.show();
    return 0;
}
*/

/*
int main() {
    {
        cout<<"正在输入一个新公司"<<endl;
        stock stock1("nanosmart",12,20.0);
        stock1.show();
        stock stock2=stock("boddo objects",2,2.0);
        stock2.show();

        cout<<"将stock1复制给stock2"<<endl;
        stock2=stock1;
        cout<<"复制后："<<endl;
        stock1.show();
        stock2.show();

        cout<<"重置一个公司"<<endl;
        stock1=stock("nighty foods",10,50.0);
        cout<<"重新展示"<<endl;
        stock1.show();
        cout<<"完成"<<endl;
    }
    return 0;
}
*/

#import "stock20.h"
const int stks=4;
int main() {
    stock stocks[stks]={
        stock("nanosmart",12,20.0),
        stock("boffo objects",200,2.0),
        stock("monolithic obelisks",130,3.25),
        stock("fleep enterprise",60,6.5)
    };

    cout<<"你持有的股票为："<<endl;
    int st;
    for (st=0; st<stks; st++) {
        stocks[st].show();
    }

    const stock *top=&stocks[0];
    for (st=1;st<stks;st++) {
        top=&top->topval(stocks[st]);
    }

    cout<<"最有价值的股票为："<<endl;
    top->show();
    return 0;
}