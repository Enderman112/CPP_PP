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
using namespace std;
#define ZERO 0;

/*
int month(int year){
    return year * 12;
}

int main(){
    int a;
    cin>> a;
    int m = month(a);
    cout<< m;
}
*/

/*
void zuhe(int ho, int mi) {
    cout<<ho<<":"<<mi;
}

int main(){
    int h,m;
    cin>> h;
    cin>> m;
    zuhe(h, m);
    return 0;
}
*/

/*
int main(){
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    //sizeof operator yields size of type or of variable
    cout<<"int is "<<sizeof(int)<<" bytes."<<endl;
    cout<<"short is "<<sizeof n_short<<" bytes."<<endl;
    cout<<"long is "<<sizeof n_long<<" bytes."<<endl;
    cout<<"long long is "<<sizeof n_llong<<" bytes."<<endl;
    cout<<endl;

    cout<<"Maximum values:"<<endl;
    cout<<"int: "<<n_int<<endl;
    cout<<"short: "<<n_short<<endl;
    cout<<"long: "<<n_long<<endl;
    cout<<"long long: "<<n_llong<<endl;
    cout<<endl;

    cout<<"Minimum int value = "<<INT_MIN<<endl;
    cout<<"Bits per byte = "<<CHAR_BIT<<endl;
    return 0;
}
*/

/*
int main(){
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited."<<endl
        <<"Add $1 to each account."<<endl<<"Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited.\nPoor Sam!"<<endl;

    sam = ZERO;
    sue = ZERO;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited."<<endl
        <<"Take $1 from each account."<<endl<<"Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited.\nLucky Sue!"<<endl;
}
 */

/*
int main(){
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout<<"Monsieur cuts a striking figure!"<<endl;
    cout<<"chest = "<<chest<<" (42 in decimal)"<<endl;
    cout<<"waist = "<<waist<<" (0x42 in hex)"<<endl;
    cout<<"inseam = "<<inseam<<" (042 in octal)"<<endl;
    return 0;
}
*/

/*
int main(){
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout<<"Monsieur cuts a striking figure!"<<endl;
    cout<<"chest = "<<chest<<" (decimal for 42)"<<endl;
    cout<<hex;
    cout<<"waist = "<<waist<<" (hexadecimal for 42)"<<endl;
    cout<<oct;
    cout<<"inseam = "<<inseam<<" (octal for 42)"<<endl;
    return 0;
}
 */

/*
int main(){
    char ch = 'M';
    int i = ch;
    cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

    cout<<"Add one to the character code:"<<endl;
    ch = ch + 1;
    i = ch;
    cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

    cout<<"Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    cout.put('!');

    cout<<endl<<"Done"<<endl;
    return 0;
}
*/

/*
int main(){
    char alarm = '\a';
    cout<<alarm<<"Don't do that again!"<<endl;
    cout<<"Ben \"Buggsie\" Hacker\nwas here!"<<endl;
}
*/

/*
int main(){
    cout<< "\aOperation \"HyperHype\" is now activated!\n";
    cout<< "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long long code;
    cin>> code;
    cout<< "\aYou entered "<<code<<"...\n";
    cout<< "\aCode verified! Proceed with Plan Z3!\n";
    return code;
}
 */

/*
int main(){
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0/3.0;
    double mint = 10.0/3.0;
    const float million = 1.0e6;

    cout<<"tub = "<<tub;
    cout<<", a million tubs = "<<million*tub;
    cout<<",\nand ten million tubs = ";
    cout<<10*million*tub<<endl;

    cout<<"mint = "<<mint<<" and a million mints = ";
    cout<<million*mint<<endl;
    return 0;
}
*/

/*
int main(){
    float d,m,s;
    cout<<"degrees:";
    cin>>d;
    cout<<"minutes:";
    cin>>m;
    cout<<"seconds:";
    cin>>s;
    const int m2d =60;
    const int s2d = 3600;
    double dfinal = d + m/m2d + s/s2d;
    cout<<d<<" degrees, "<<m<<" minutes, "<<s<<" seconds = "<<dfinal<<" degrees";
    return 0;
}
 */

/*
int main(){
    long long global,china;
    cout<<"Enter the world's population:";
    cin>>global;
    cout<<"Enter the population of China:";
    cin>>china;
    double percent = china*1.0/global*100;
    cout<<"The population of the China is "<<percent<<"% of the world population.";
}
 */

/*
int main(){
    int yams[3];
    yams[0]=7;
    yams[1]=8;
    yams[2]=6;

    int yamcosts[3]={20,30,5};

    cout<<"Total yams = ";
    cout<<yams[0]+yams[1]+yams[2]<<endl;
    cout<<"The package with "<<yams[1]<<" yams costs ";
    cout<<yamcosts[1]<<" cents per yam.\n";
    int total = yams[0]*yamcosts[0]+yams[1]*yamcosts[1];
    total = total+yams[2]*yamcosts[2];
    cout<<"The total yam expense is "<<total<<" 🤨cents.\n";

    cout<<"\nSize of yams array = "<<sizeof yams;
    cout<<" bytes.\n";
    cout<<"Size of one element = "<<sizeof yams[0];
    cout<<" bytes.\n";
    return 0;
}
*/

/*
int main(){
    const int size = 15;
    char name1[size];
    char name2[size] = "C++owboy";

    cout<<"Howdy! I'm "<<name2;
    cout<<"! What's your name?\n";
    cin>>name1;
    cout<<"Well, "<<name1<<", your name has ";
    cout<<strlen(name1)<<" letters and is stored\n";
    cout<<"in an array of "<<sizeof name1<<" bytes.\n";
    cout<<"Your initial is "<<name1[0]<<".\n";
    name2[3] = '\0';
    cout<<"Here are the first 3 characters of my name: ";
    cout<<name2<<endl;
    return 0;

}
*/

/*
int main(){
    char char1[20];
    char char2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout<<"Enter a kind of feline: ";
    cin>>char1;
    cout<<"Enter another kind of feline: ";
    cin>>str1;
    cout<<"Here are some felines:\n";
    cout<<char1<<" "<<char2<<" "
        <<str1<<" "<<str2
        <<endl;
    cout<<"The third letter in "<<char2<<" is "<<char2[2]<<endl;
    cout<<"The third letter in "<<str2<<" is "<<str2[2]<<endl;
    return 0;
}
*/

/*
int main(){
    string s1 = "penguin";
    string s2, s3;
    cout<<"You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout<<"s1: "<<s1<<", s2: "<<s2<<endl;
    cout<<"You can assign a C-style string to a string object.\n";
    cout<<"s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout<<"s2: "<<s2<<endl;
    cout<<"You can concatenate string: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout<<"s3: "<<s3<<endl;
    cout<<"You can append strings.\n";
    s1 += s2;
    cout<<"s1 += s2 yields s1 = "<<s1<<endl;
    s2 += " for a day";
    cout<<"s2 += \" for a day\" yields s2 = "<<s2<<endl;
    return 0;
}
 */

/*
int main(){
    char charr[20];
    string str1;

    cout<<"Length of string in charr before input: "
        <<strlen(charr)<<endl;
    cout<<"Length of string in str1 before input: "
        <<str1.size()<<endl;
    cout<<"Enter a line of text:\n";
    cin.getline(charr,20);
    cout<<"You entered: "<<charr<<endl;
    cout<<"Enter another line of text:\n";
    getline(cin,str1);
    cout<<"You entered: "<<str1<<endl;
    cout<<"Length of string in charr after input: "
        <<strlen(charr)<<endl;
    cout<<"Length of string in str1 after input: "
        <<str1.size()<<endl;
    return 0;
}
 */

/*
int main(){
    struct inflatable{
        string name;
        float volume;
        double price;
    };

    inflatable guest {
            "Glorious Gloria",
            1.88,
            29.99
    };

    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99
    };

    cout<<"Expand your guest list with "<<guest.name;
    cout<<" and "<<pal.name<<"!\n";
    cout<<"You can have both for $";
    cout<<guest.price+pal.price<<"!\n";
    return 0;
}
*/

/*
int main(){
    struct inflatable{
        char name[20];
        float volume;
        double price;
    };
    inflatable bouquet = {
            "sunflowers",
            0.20,
            12.49
    };
    inflatable choice;
    cout<<"bouquet: "<<bouquet.name<<" for $";
    cout<<bouquet.price<<endl;

    choice = bouquet;
    cout<<"choice:"<<choice.name<<" for $";
    cout<<choice.price<<endl;
    return 0;
}
*/

/*
int main(){
struct inflatable{
        char name[20];
        float volume;
        double price;
    };
    inflatable guests[2] = {
            {"Bambi",0.5,21.99},
            {"Godzilla",2000,565.99},
    };
    cout<<"The guests "<<guests[0].name<<" and "<<guests[1].name
        <<"\nhave a combined volume of "
        <<guests[0].volume+guests[1].volume<<" cubic feet.\n";
    return 0;
}
*/

/*
int main(){
    int donuts = 6;
    double cups = 4.5;

    cout<<"donuts value = "<<donuts;
    cout<<" and donuts address = "<<&donuts<<endl;

    cout<<"cups value = "<<cups;
    cout<<" and cups address = "<<&cups<<endl;
    return 0;
}
*/

/*
int main(){
    enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
    int band;
    band = blue;
    cout<<band<<endl;
    band = 3 + red;
    cout<<band<<endl;
    return 0;
}
 */

/*
int main(){
    int updates=6;
    int *p_updates;
    p_updates = &updates;

    cout<<"Values: updates = "<<updates;
    cout<<", *p_updates = "<<*p_updates<<endl;

    cout<<"Addresses: &updates = "<<&updates;
    cout<<", p_updates = "<<p_updates<<endl;

    *p_updates += 1;
    cout<<"Now updates = "<<updates<<endl;
    return 0;
}
*/

/*
int main(){
    int higgens = 5;
    int *pt = &higgens;

    cout<<"Value of higgens = "<<higgens;
    cout<<"; Address of higgens = "<<&higgens<<endl;

    cout<<"Value of *pt = "<<*pt;
    cout<<"; Value of pt = "<<pt<<endl;
    return 0;
}
*/

/*
int main(){
    double *p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout<<"p3[1] is "<<p3[1]<<".\n";
    p3 = p3 + 1;
    cout<<"Now p3[0] is "<<p3[0]<<" and ";
    cout<<"p3[1] is "<<p3[1]<<".\n";
    p3 = p3 - 1;
    delete [] p3;
    return 0;
}
*/

/*
int main(){
    double wages[3] = {10000.0,20000.0,30000.0};
    short stacks[3] = {3,2,1};

    double *pw = wages;
    short *ps = &stacks[0];

    cout<<"pw = "<<pw<<", *pw = "<<*pw<<endl;
    pw = pw + 1;
    cout<<"add 1 to the pw pointer:\n";
    cout<<"pw = "<<pw<<", *pw = "<<*pw<<"\n\n";

    cout<<"ps = "<<ps<<", *ps = "<<*ps<<endl;
    ps = ps + 1;
    cout<<"add 1 to the ps pointer:\n";
    cout<<"ps = "<<ps<<", *ps = "<<*ps<<"\n\n";

    cout<<"access two elements with array notation\n";
    cout<<"stacks[0] = "<<stacks[0]<<", stacks[1] = "<<stacks[1]<<endl;
    cout<<"access two elements with pointer notation\n";
    cout<<"*stacks = "<<*stacks<<", *(stacks + 1) = "<<*(stacks + 1)<<endl;

    cout<<sizeof(wages)<<" = size of wages array\n";
    cout<<sizeof(pw)<<" = size of pw pointer\n";
    return 0;
}
*/

/*
int main(){
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;

    cout<<animal<<" and ";
    cout<<bird<<"\n";

    cout<<"Enter a kind of animal: ";
    cin>>animal;

    ps = animal;
    cout<<ps<<"!\n";
    cout<<"Before using strcpy():\n";
    cout<<animal<<" at "<<(int *) animal<<endl;
    cout<<ps<<" at "<<(int *) ps<<endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps,animal);
    cout<<"After using strcpy():\n";
    cout<<animal<<" at "<<(int *) animal<<endl;
    cout<<ps<<" at "<<(int *) ps<<endl;
    delete [] ps;
    return 0;
}
*/

/*
int main(){
    struct inflatable
    {
        char name[20];
        float volume;
        double price;
    };

    inflatable *ps = new inflatable;
    cout<<"Enter name of inflatable item: ";
    cin.get(ps->name,20);
    cout<<"Enter volume in cubic feet: ";
    cin>>(*ps).volume;
    cout<<"Enter price: $";
    cin>>ps->price;
    cout<<"Name: "<<(*ps).name<<endl;
    cout<<"Volume: "<<ps->volume<<" cubic feet\n";
    cout<<"Price: $"<<ps->price<<endl;
    delete ps;
    return 0;
}
*/

/*
int main(){
    char *getname(void);
    char *name;

    name = getname();
    cout<<name<<" at "<<(int *) name<<endl;
    delete [] name;

    name = getname();
    cout<<name<<" at "<<(int *) name<<endl;
    delete [] name;
    return 0;
}

char *getname(){
    char temp[80];
    cout<<"Enter last name: ";
    cin>>temp;
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn,temp);
    return pn;
}
*/

/*
int main(){
    string *lastname = new string;
    string *firstname = new string;
    cout<<"姓: ";
    cin>>*lastname;
    cout<<"名: ";
    cin>>*firstname;
    cout<<"你的预期成绩:";
    char *grade = new char;
    cin>>*grade;
    *grade = *grade + 1;
    int age;
    cout<<"你的年龄: ";
    cin>>age;
    cout<<"姓名: "<<*lastname<<" "<<*firstname<<endl;
    cout<<"成绩: "<<*grade<<endl;
    cout<<"年龄: "<<age<<endl;
    delete lastname;
    delete firstname;
    delete grade;
}
*/

/*
int main(){
    array<double,3> *pb = new array<double,3>;
    cout<<"输入三次40m跑成绩: ";
    cin>>(*pb)[0]>>(*pb)[1]>>(*pb)[2];
    cout<<"次数="<<(*pb).size()<<endl;
    cout<<"平均成绩="<<((*pb)[0]+(*pb)[1]+(*pb)[2])/(*pb).size()<<endl;
    delete pb;
}
*/

/*
int main(){
    struct pizza{
        string name;
        float ZhiJing;
        float ZhongLiang;
    };

    pizza *p = new pizza;
    cout<<"请输入披萨的名称: ";
    cin>>p->name;
    cout<<"请输入披萨的直径: ";
    cin>>p->ZhiJing;
    cout<<"请输入披萨的重量: ";
    cin>>p->ZhongLiang;
    cout<<"披萨的名称: "<<p->name<<endl;
    cout<<"披萨的直径: "<<p->ZhiJing<<endl;
    cout<<"披萨的重量: "<<p->ZhongLiang<<endl;
    delete p;
    return 0;
}
*/

/*
int main(){
    cout<<"输入一个单词:";
    string *word = new string;
    cin>>*word;

    for (int i = word->size()-1;i>=0;i--){
        cout<<(*word)[i];
    }
    delete word;
}
*/

/*
int main(){
    std::cout<<"五个数字";
    double num;
    double sum=0.0;
    for(int i;i<=5;i++){
        cout<<"第"<<i<<"个数字:";
        cin>> num;
        sum+=num;
    }
    cout<<"平均值"<<sum/5<<endl;
    return 0;
}
*/

/*
int main(){
    cout<<"word"<<endl;
    string word;
    cin>>word;

    char temp;
    int i,j;
    for(j=0,i=word.size()-1;j<i;j++,i--){
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout<<word;
    return 0;
}
*/

/*
int main(){
    char word[5]="?ate";
    for(char ch='a'; std::strcmp(word,"mate");ch++){
        std::cout<<word<<endl;
        word[0]=ch;
    }
    std::cout<<"循环之后的word:"<<word<<endl;
    return 0;
}
*/

/*
int main(){
    string word="?ate";
    for(char ch='a';word!="mate";ch++){
        cout<<word<<endl;
        word[0]=ch;
    }
    cout<<"循环之后的word:"<<word<<endl;
    return 0;
}
*/

/*
int main(){
    const int ArSize = 20;
    char name[ArSize];
    cout<<"名";
    cin>>name;
    int i=0;
    while(name[i]!='\0'){
        cout<<name[i]<<":"<<int(name[i])<<endl;
        i++;
    }
    return 0;
}
*/

/*
int main(void){
    cout<<"输入延迟时间(秒): ";
    float secs;
    cin>>secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout<<"开始\a\n";
    clock_t start=clock();
    while(clock()-start<delay)
        ;
    cout<<"结束\a\n";
    return 0;
}
*/

/*
int main(){
    int n;
    cout<<"1到10之间猜一个数";
    do{
        cin>>n;
    }while (n!=7);
    cout<<"猜对了";
    return 0;
}
*/

/*
int main(){
    for(int x: {1,2,3,4,5}){
        cout<<x<<endl;
    }
}
*/

/*
int main(){
    char ch;
    int count=0;

    cout<<"输入一段文字,以#结束";
    cin.get(ch);
    while(ch!='#'){
        cout<<ch;
        ++count;
        cin.get(ch);
    }
    cout<<endl<<count<<"个字符";
    return 0;
}
*/

/*
int main(){
    char ch;
    int count=0;
    cin.get(ch);
    while(cin.fail()==false){
        cout<<ch;
        ++count;
        cin.get(ch);
    }
    cout<<endl<<count<<"个字符";
    return 0;
}
*/

/*
int main(){
    int ch;
    int count=0;

    while((ch=cin.get())!=EOF){
        cout.put(char(ch));
        ++count;
    }
    cout<<endl<<count<<"个字符";
    return 0;
}
*/

/*
int main(){
    const int cities = 5;
    const int years = 4;
    const array<string,cities> Cities={
            "kunming",
            "shanghai",
            "chongqing",
            "beijing",
            "nanjing",
    };

    int maxtemps[years][cities]={
            {20,21,13,13,21,},//编四组数据
            {21,22,14,14,22,},
            {22,23,15,15,23,},
            {23,24,16,16,24,},
    };

    cout<<"最高温度表"<<endl;
    for(int city=0;city<cities;city++) {
        cout << Cities[city] << ":\t";
        for (int year = 0; year < years; year++) {
            cout << maxtemps[year][city] << "\t";
            cout << endl;
        }
    }
        return maxtemps[0][1];
}
*/

//add by xu 2023.2.20
/*
int main(){
    int all[11];
    for(int month=1;month<=12;month++){
        cout<<"第"<<month<<"个月的销售额:";
        cin>>all[month];
    }
    int sum=0;
    for(int month=1;month<=12;month++){
        sum+=all[month];
    }
    cout<<"一年的销售额:"<<sum<<endl;
    return 0;
}
*/

/*
int main(){
    int n;
    cout<<"你希望收集多少个汽车信息? ";
    cin>>n;
    cin.get();
    struct car{
        string name;
        int year;
    };
    car *p=new car[n];
    for(int i=1;i<=n;i++) {
        cout << "请输入汽车的名称: ";
        getline(cin,p[i].name);
        cout << "请输入汽车的年份: ";
        cin >> p[i].year;
        cin.get();
    }
    for (int i = 1; i <= n; ++i) {
        cout <<p[i].name <<" "<<p[i].year<<endl;
    }
    delete[] p;
}
*/

/*
int main(){
    int n;
    cout<<"要显示几行";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
int main(){
    char ch;
    int spaces=0;
    int total=0;
    cin.get(ch);
    while(ch!='.'){
        if(ch==' '){
            spaces++;
        }
        total++;
        cin.get(ch);
    }
    cout<<spaces<<"个空格"<<endl;
    cout<<total<<"个字符"<<endl;
    return 0;
}
*/

/*
int main(){
    char ch;
    cout<<"打字，然后我会重复";
    cin.get(ch);
    while(ch!='.'){
        if(ch=='\n'){
            cout<<ch;
        }else{
            cout<<++ch;
        }
        cin.get(ch);
    }
    cout<<"请注意，我会把你的输入转换成下一个字符"<<endl;
    return 0;
}
*/

/*
int main(){
    const int fave=27;
    int n;

    cout<<"输入一个数字(1-100)来找到我的最喜欢的数字: ";
    do{
        cin>>n;
        if(n<fave){
            cout<<"太小了"<<endl;
        }else if(n>fave){
            cout<<"太大了"<<endl;
        }else{
            cout<<fave<<"就是我最喜欢的数字"<<endl;
        }
    }while(n!=fave);
    return 0;
}
*/

/*
int main(){
    cout<<"这个程序可能会损坏你的计算机"<<endl;
    cout<<"你确定要继续吗？(y/n)";
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y'){
        cout<<"你的计算机已经被破坏"<<endl;
    }else if(ch=='n'||ch=='N'){
        cout<<"你的计算机没有被破坏"<<endl;
    }else{
        cout<<"你的输入有误"<<endl;
    }
    return 0;
}
*/

/*
int main(){
    const int Arsize=6;
    float NAAQ[Arsize];
    cout<<"输入你的邻居的NAAQs"<<endl;
    cout<<"程序将会在你输入自己的NAAQ或者输入负数后终止"<<endl;

    int i=0;
    float temp;
    cin>>temp;
    while(i<Arsize&&temp>=0){
        NAAQ[i]=temp;
        ++i;
        if(i<Arsize){
            cout<<"输入下一个值:";
            cin>>temp;
        }
    }
    if (i==0) {
        cout << "没有输入数据" << endl;
    }
    else{
        cout<<"你的NAAQ是:";
        float you;
        cin>>you;
        int count;
        for (int j=0;j<i;j++){
            if(NAAQ[j]>you){
                count++;
            }
        }
        cout<<count<<"个邻居比你更好"<<endl;
    }
    return 0;
}
*/

/*
int main(){
    const char *quality[4]={
           "极好",
              "好",
                "一般",
                    "差",
    };
    int age;
    cout<<"输入你的年龄";
    cin>>age;
    int ageof;

    if(age>17 && age<35){
   ageof=0;
    }
    else if(age>=35 && age<50){
        ageof=1;
    }
    else if(age>=50 && age<65){
        ageof=2;
    }
    else{
        ageof=3;
    }
    cout<<"你的年龄是"<<quality[ageof]<<endl;
    return 0;
}
*/

/* 不可用
int main() {
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
}
*/

/*
bool is_int(double);
int main() {
    double num;

    cout<<"嘿，老兄，输入一个整数:";
    cin>>num;
    while(!is_int(num)) {
        cout<<"超出范围了，请重新输入一个整数:";
        cin>>num;
    }
    int val=int (num);
    cout<<"你输入的整数是:"<<val<<endl;
    return 0;
}

bool is_int(double x) {
    if (x <= INT_MAX && x >= INT_MIN) {
        return true;
    } else {
        return false;
    }
}
*/

/*
int main() {
    cout<<"输入一段文本用以测试，以@结束"<<endl;
    char ch;
    int whitespace=0;int digits=0;int chars=0;int puncts=0;int others=0;

    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch)) {
            chars++;
        }
        else if (isspace(ch)) {
            whitespace++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (ispunct(ch)) {
            puncts++;
        }
        else {
            others++;
        }
        cin.get(ch);
    }
    cout<<chars<<"字母，"
        <<whitespace<<"空格，"
        <<digits<<"数字，"
        <<puncts<<"标点符号，"
        <<others<<"其他"<<endl;
    return 0;
}
*/

/*
int main() {
    int a,b;
    cout<<"输入两个整数:";
    cin>>a>>b;
    cout<<a<<"大还是"<<b<<"大? ";
    int c = a>b?a:b;
    cout<<c<<"大"<<endl;
    return 0;
}
*/

/*
void showmenu();
void report();
void comfort();
int main() {
    showmenu();
    int choice;;
    cin>> choice;
    while (choice != 5) {
        switch (choice) {
            case 1: cout<< "你选择了1" << endl;
                break;
            case 2: report();
                break;
            case 3: cout<<"boss全天在线"<<endl;
                break;
            case 4: comfort();
                break;
                default: cout<<"无效的选择"<<endl;
        }
        showmenu();
        cin>> choice;
    }
    cout<< "退出程序" << endl;
    return 0;
}

void showmenu() {
    cout<<"请输入选项1,2,3,4或者5退出\n"
    "1)测试用 2)报告 3)老板在线 4)安慰 5)退出\n";
}

void report() {
    cout<<"这是一个报告"<<endl;
}

void comfort() {
    cout<<"你是一个好人"<<endl;
}


void showmenu();
void report();
void comfort();
int main() {
    showmenu();
    char choice;;
    cin>> choice;
    while (choice != 'q' && choice != 'Q') {
        switch (choice) {
            case 'a':
            case 'A': cout<< "你选择了1" << endl;
                break;

            case 'r':
            case 'R': report();
                break;

            case 'l':
            case 'L': cout<<"boss全天在线"<<endl;
                break;

            case 'c':
            case 'C': comfort();
                break;
            default: cout<<"无效的选择"<<endl;
        }
        showmenu();
        cin>> choice;
    }
    cout<< "退出程序" << endl;
    return 0;
}

void showmenu() {
    cout<<"请输入选项a,r,l,c或者q退出\n"
    "a)测试用 r)报告 l)老板在线 c)安慰 q)退出\n";
}

void report() {
    cout<<"这是一个报告"<<endl;
}

void comfort() {
    cout<<"你是一个好人"<<endl;
}

*/

/*#include <iostream>
enum {red, orange, yellow, green, blue, violet, indigo};
int main() {
    cout<<"请输入一个颜色的数字(0-6): ";
    int color;
    cin>>color;
    while(color >= red && color <= indigo) {
        switch (color) {
            case red: cout<<"红色"<<endl; break;
            case orange: cout<<"橙色"<<endl; break;
            case yellow: cout<<"黄色"<<endl; break;
            case green: cout<<"绿色"<<endl; break;
            case blue: cout<<"蓝色"<<endl; break;
            case violet: cout<<"紫色"<<endl; break;
            case indigo: cout<<"靛蓝色"<<endl; break;
        }
        cout<<"请输入一个颜色的数字(0-6): ";
        cin>>color;
    }
    cout<<"再见"<<endl;
    return 0;
}
*/

/*
const int ArSize=80;
int main() {
    char line[ArSize];
    int spaces=0;

    cout<<"输入一行文字(最多"<<ArSize<<"个字符): ";
    cin.get(line,ArSize);
    cout<<"完成输入"<<endl<<line<<endl;
    cout<<"保留第一句话"<<endl;
    for (int i=0; line[i]!='\0'; i++) {
        cout<<line[i];
        if (line[i]=='.') {
            break;
        }
        if (line[i]!=' ') {
            continue;
        }
        spaces++;
    }
    cout<<"空格数: "<<spaces<<endl;
    cout<<"完成"<<endl;
    return 0;
}
*/

/*
const int Max=5;
int main() {
    double fish[Max];
    cout<<"请输入你钓到的"<<Max<<"条鱼的重量(单位:千克):"<<endl;
    cout<<"输入q来结束输入"<<endl;
    cout<<"鱼#1";
    int i=0;
    while (i<Max and cin>>fish[i]) {
        if(++i<Max) {
            cout<<"鱼#"<<i+1<<": ";
        }
    }

    double total=0.0;
    for (int j=0; j<i; j++) {
        total += fish[j];
    }

    if (i==0) {
        cout<<"没有钓到鱼"<<endl;
    }
    else {
        cout<<total<<"千克,平均每条鱼"<<total/i<<"千克"<<endl;
        cout<<"再见"<<endl;
    }
    return 0;
}
*/

/*
const int Max=5;
int main() {
    int golf[Max];
    cout<<"请输入你的高尔夫分数"<<endl;
    cout<<"需输入5轮分数"<<endl;
    int i;
    for (i=0; i<Max; i++) {
        while (!(cin>>golf[i])) {
            cin.clear();
            while (cin.get()!='\n') {
                continue;
            }
            cout<<"请输入一个有效数字：";
        }
    }

    double total=0.0;
    for (i=0; i<Max; i++) {
        total+=golf[i];
    }

    cout<<"你的总分是"<<total<<endl;
    cout<<"平均分是"<<total/Max<<endl;
    return 0;
}
*/

/*
int main() {
    char automobile[50];
    int year;
    double a_price;
    double b_price;

    ofstream outfile;
    outfile.open("carinfo.txt");

    cout<<"输入汽车的名称: ";
    cin.get(automobile,50);
    cout<<"输入汽车的年份: ";
    cin>>year;
    cout<<"输入汽车的原价: ";
    cin>>a_price;
    b_price=0.913*a_price;

    cout<< fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout<<"汽车名称: "<<automobile<<endl;
    cout<<"汽车年份: "<<year<<endl;
    cout<<"汽车原价: $"<<a_price<<endl;
    cout<<"汽车现价: $"<<b_price<<endl;

    outfile<<fixed;
    outfile.precision(2);
    outfile.setf(ios_base::showpoint);
    outfile<<"汽车名称: "<<automobile<<endl;
    outfile<<"汽车年份: "<<year<<endl;
    outfile<<"汽车原价: $"<<a_price<<endl;
    outfile<<"汽车现价: $"<<b_price<<endl;
    outfile.close();

    return 0;
}
*/

/*
const int SIZE=60;
int main() {
    char filename[SIZE];
    ifstream infile;
    cout<<"输入文件名: ";
    cin.getline(filename,SIZE);
    infile.open(filename);
    if (!infile.is_open()) {
        cout<<"无法打开文件，程序终止";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum=0.0;
    int count=0;

    infile>>value;
    while (infile.good()) {
        ++count;
        sum+=value;
        infile>>value;
    }
    if (infile.eof()) {
        cout<<"文件结束";
    }
    else if (infile.fail()) {
        cout<<"程序因数据不匹配而终止";
    }
    else {
        cout<<"程序因未知原因终止";
    }
    if (count==0) {
        cout<<"没有读取到数据"<<endl;
    }
    else {
        cout<<"物品读取："<<count<<endl;
        cout<<"总和："<<sum<<endl;
        cout<<"平均："<<sum/count<<endl;
    }
    infile.close();
    return 0;

}
*/

/*
void simple();
int main() {
    cout<<"main函数将执行simple函数"<<endl;
    simple();
    cout<<"main函数执行完毕"<<endl;
    return 0;
}
void simple() {
    cout<< "simple函数正在执行" << endl;
}
*/

/*
void cheers(int);
double cube(double x);
int main() {
    cheers(5);
    cout<<"给我一个数字：";
    double side;
    cin>>side;
    double volume=cube(side);
    cout<<"一个"<<side<<"足立方体的体积是"<<volume<<"立方厘米"<<endl;
    cheers(cube(2));
    return 0;
}
void cheers(int n) {
    for (int i=0;i<n;i++) {
        cout<<"cheers! ";
    }
    cout<<endl;
}
double cube(double x) {
    return x*x*x;
}
*/

/*
void n_chars(char,int);
int main() {
    int times;
    char ch;

    cout<<"输入一个字符：";
    cin>>ch;
    while (ch!='q') {
        cout<<"输入一个整数：";
        cin>>times;
        n_chars(ch,times);
        cout<<"\n输入下一个字符或按q退出";
        cin>>ch;
    }
    cout<<"现在是"<<times<<"点"<<endl;
    cout<<"Bye\n";
    return 0;
}
void n_chars(char c, int n) {
    while (n-->0) {
        cout<<c;
    }
}
*/

/*
long double probability(unsigned numbers, unsigned picks);
int main() {
    double total, choices;
    cout<<"输入选择的数字和选择的卡数\n";
    while ((cin>>total>>choices) && choices<=total) {
        cout<<"你获胜的概率是";
        cout<<probability(total,choices);
        cout<<"请继续输入，或按q退出";
    }
    cout<<"再见\n";
    return 0;
}
long double probability(unsigned numbers, unsigned picks) {
    long double result=1.0;
    long double n;
    unsigned p;

    for (n=numbers, p=picks;p>0;n--, p--) {
        result=result * n / p;
        return result;
    }
}
*/

/*
const int arsize=8;
int sum_arr(int arr[],int n);
int main() {
    int cookies[arsize]={1,2,3,8,16,32,64,128};
    int sum=sum_arr(cookies,arsize);
    cout<<"总共吃了"<<sum<<"块饼干"<<endl;
    return 0;
}
int sum_arr(int arr[], int n) {
    int total=0;
    for (int i=0;i<n;i++)    {
        total=total+arr[i];

    }
    return total;
}
*/

/*
const int arsize=8;
int sum_arr(int arr[],int n);
int main() {
    int cookies[arsize]={1,2,3,8,16,32,64,128};
    int sum=sum_arr(cookies,arsize);
    cout<<cookies<<"是cookies的地址,"<<sizeof(cookies)<<"是cookies的大小"<<endl;
    cout<<"总共吃了"<<sum<<"块饼干"<<endl;
    return 0;
}
int sum_arr(int arr[], int n) {
    int total=0;
    for (int i=0;i<n;i++)    {
        total=total+arr[i];

    }
    return total;
}
*/

/*
const int max1=5;
//Prototypes
int fill_arr(double ar[], int limit);
void show_arr(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main() {
    double proper[max1];

    int size=fill_arr(proper,max1);
    show_arr(proper,size);
    if (size>0) {
        cout<<"输入价格因子：";
        double fact;
        while (!(cin>>fact)) {
            cin.clear();
            while (cin.get()!='\n') {
                continue;
            }
            cout<<"错误的输入，请重新输入一个数字：";
        }
        revalue(fact,proper,size);
        show_arr(proper,size);
    }
    cout<<"完成"<<endl;
    cin.get();
    cin.get();
    return 0;
}

int fill_arr(double ar[], int limit) {
    double temp;
    int i;
    for (i=0;i<limit;i++) {
        cout<<"输入第"<<i+1<<"个房屋的价格：";
        cin>>temp;
        if (!cin) {
            cin.clear();
            while (cin.get()!='\n') {
                continue;
            }
            cout<<"错误的输入，输入结束"<<endl;
            break;
        }
        else if (temp<0) {
            break;
        }
        ar[i]=temp;
    }
    return i;
}

void show_arr(const double ar[], int n) {
    for (int i=0;i<n;i++) {
        cout<<"房产"<<i+1<<"号价格为：";
        cout<<ar[i]<<endl;
    }
}

void revalue(double r, double ar[], int n) {
    for (int i=0;i<n;i++) {
        ar[i]*=r;
    }
}
*/

/*
const int arsize=8;
int sum_arr(const int *begin,const int *end);
int main() {
    int cookie[arsize]={1,2,3,8,16,32,64,128};
    int sum=sum_arr(cookie,cookie+8);
    cout<<"总共吃了"<<sum<<"块饼干"<<endl;
    sum=sum_arr(cookie,cookie+3);
    cout<<"前三个吃了"<<sum<<"块饼干"<<endl;
    sum=sum_arr(cookie+4,cookie+8);
    cout<<"后四个吃了"<<sum<<"块饼干"<<endl;
    return 0;
}

int sum_arr(const int *begin, const int *end) {
    const int *pt;
    int total=0;

    for (pt=begin;pt!=end;pt++) {
        total=total+*pt;
    }
    return total;
}
*/

/*
unsigned int c_in_str(const char *str, char ch);
int main() {
    char mmm[15]="minimum";
    char *wail="ululate";
    unsigned int ms=c_in_str(mmm, 'm');
    unsigned int us=c_in_str(wail, 'u');
    cout<<ms<<"个m在"<<mmm<<endl;
    cout<<us<<"个u在"<<wail<<endl;
    return 0;
}

unsigned int c_in_str(const char *str, char ch) {
    unsigned int count=0;
    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}
*/

/*
char *buildstr(char c,int n);
int main() {
    int times;
    char ch;
    cout<<"输入一个字母：";
    cin>>ch;
    cout<<"输入一个整数：";
    cin>>times;
    char *ps =buildstr(ch,times);
    cout<<ps<<endl;
    delete []ps;
    ps=buildstr('+',20);
    cout<<ps<<"-完成-"<<ps<<endl;
    delete []ps;
    return 0;
}

char *buildstr(char c, int n) {
    char *pstr=new char[n+1];
    pstr[n]='\0';
    while (n-- >0) {
        pstr[n]=c;
    }
    return pstr;
}
*/

/*
struct tr_time {
    int hours;
    int minutes;
};
const int mins_per_h=60;

tr_time sum(tr_time t1,tr_time t2);
void show_time(tr_time t);
int main() {
    tr_time d1={5,45};
    tr_time d2={4,55};

    tr_time trip=sum(d1,d2);
    cout<<"旅行时间总共是：";
    show_time(trip);

    tr_time d3={4,32};
    cout<<"三天总共是";
    show_time(sum(trip,d3));
}

tr_time sum(tr_time t1, tr_time t2) {
    tr_time total;

    total.minutes=(t1.minutes+t2.minutes)%mins_per_h;
    total.hours=t1.hours+t2.hours+(t1.minutes+t2.minutes)/mins_per_h;
    return total;
}

void show_time(tr_time t) {
    cout<<t.hours<<"小时"
            <<t.minutes<<"分钟"<<endl;
}
*/

/*
struct polar {
    double distances;
    double angles;
};
struct rect {
    double x;
    double y;
};

polar react2polar(rect xypos);
void show_polar(polar dapos);

int main() {
    rect rroom;
    polar proom;

    cout<<"输入x和y坐标：";
    while (cin>>rroom.x>>rroom.y) {
        proom=react2polar(rroom);
        show_polar(proom);
        cout<<"请继续输入或q退出";
    }
    cout<<"再见"<<endl;
    return 0;
}

polar react2polar(rect xypos) {
    polar answer;

    answer.distances=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angles=atan2(xypos.y,xypos.x);
    return answer;
}

void show_polar(polar dapos) {
    const double rad2deg=57.29577951;
    cout<<"距离："<<dapos.distances;
    cout<<", 角度："<<dapos.angles*rad2deg;
    cout<<"度"<<endl;
}
*/

/*
struct polar {
    double distances;
    double angles;
};
struct rect {
    double x;
    double y;
};

void react2polar(const rect *pxy,polar *pda);
void show_polar(const polar *pda);

int main() {
    rect rroom;
    polar proom;

    cout<<"输入x和y坐标：";
    while (cin>>rroom.x>>rroom.y) {
        react2polar(&rroom,&proom);
        show_polar(&proom);
        cout<<"请继续输入或q退出";
    }
    cout<<"再见"<<endl;
    return 0;
}

void react2polar(const rect *pxy, polar *pda) {
    pda->distances=sqrt(pxy->x*pxy->x+pxy->y*pxy->y);
    pda->angles=atan2(pxy->y, pxy->x);
}

void show_polar(const polar *pda) {
    const double rad2deg=57.29577951;
    cout<<"距离："<<pda->distances;
    cout<<", 角度："<<pda->angles*rad2deg;
    cout<<"度"<<endl;
}
*/

/*
const int SIZE=5;
void display(const string sa[], int n);
int main() {
    string list[SIZE];
    cout<<"输入你喜欢的"<<SIZE<<"个星体"<<endl;
    for (int i=0;i<SIZE;i++) {
        cout<<"星体#"<<i+1<<": ";
        getline(cin,list[i]);
    }
    cout<<"你输入的星体是："<<endl;
    display(list,SIZE);

    return 0;
}

void display(const string sa[], int n) {
    for (int i=0;i<n;i++) {
        cout<<i+1<<": "<<sa[i]<<endl;
    }
}
*/

/*
const int seasons=4;
const array<string,seasons> snames={"春天","夏天","秋天","冬天"};

void fill(array<double,seasons> *pa);
void show(array<double,seasons> da);

int main() {
    array<double,seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(array<double, seasons> *pa) {
    for (int i=0;i<seasons;i++) {
        cout<<"输入"<<snames[i]<<"的花费: ";
        cin>>(*pa)[i];
    }
}

void show(array<double, seasons> da) {
    double total=0.0;
    cout<<"\n花费情况：\n";
    for (int i=0;i<seasons;i++) {
        cout<<snames[i]<<": $"<<da[i]<<endl;
        total+=da[i];
    }
    cout<<"总花费：$"<<total<<endl;
}
*/

/*
void countdown(int n);

int main() {
    countdown(4);
    return 0;
}

void countdown(int n) {
    cout<<"倒计时"<<n<<endl;
    if (n>0) {
        countdown(n-1);
    }
    cout<<"结束!!!"<<endl;
}
*/

/*
const int len=66;
const int divs=6;
void subdiv(char ar[], int low, int high, int level);
int main() {
    char ruler[len];
    int i;
    for (i=1;i<len-2;i++) {
        ruler[i]=' ';
    }
    ruler[len-1]='\0';
    int max=len-2;
    int min=0;
    ruler[min]=ruler[max]='|';
    cout<<ruler<<endl;
    for (i=1;i<=divs;i++) {
        subdiv(ruler,min,max,i);
        cout<<ruler<<endl;
        for (int j=1;j<len;j++) {
            ruler[j]=' ';
        }
    }
    return 0;
}

void subdiv(char ar[], int low, int high, int level) {
    if (level==0) {
        return;
    }
    int mid=(low+high)/2;
    ar[mid]='|';
    subdiv(ar,low,mid,level-1);
    subdiv(ar,mid,high,level-1);
}
*/

/*
double betsy(int);
double pam(int);

void estimate(int lines, double (*pf)(int));
int main() {
    int code;
    cout<<"你的代码有几行";
    cin>>code;
    cout<<"这是betsy的预测:"<<endl;
    estimate(code,betsy);
    cout<<"这是pam的预测:"<<endl;
    estimate(code, pam);
    return 0;
}

double betsy(int lns) {
    return 0.05*lns;
}

double pam(int lns) {
    return 0.03*lns+0.0004*lns*lns;
}

void estimate(int lines, double (*pf)(int)) {
    cout<<lines<<"行代码需要花费";
    cout<<(*pf)(lines)<<"小时"<<endl;
}
*/

/*
const double *f1(const double ar[], int n);
const double *f2(const double [], int n);
const double *f3(const double *, int n);

int main() {
    double av[3]={1112.3,1542.6,2227.9};

    const double *(*p1)(const double *, int)=f1;
    auto p2=f2;
    cout<<"通过指针调用功能"<<endl;
    cout<<"地址  值："<<endl;
    cout<<(*p1)(av,3)<<": "<<*(*p1)(av,3)<<endl;
    cout<<p2(av,3)<<": "<<*p2(av,3)<<endl;

    const double *(*pa[3])(const double *, int)={f1,f2,f3};
    auto pb=pa;

    cout<<"\n通过数组指针调用功能"<<endl;
    cout<<"地址  值："<<endl;
    for (int i=0;i<3;i++) {
        cout<<pa[i](av,3)<<": "<<*pa[i](av,3)<<endl;
    }
    cout<<"通过指针指向指针调用功能"<<endl;
    cout<<"地址  值："<<endl;
    for (int i=0;i<3;i++) {
        cout<<pb[i](av,3)<<": "<<*pb[i](av,3)<<endl;
    }

    cout<<"\n通过指针数组调用功能"<<endl;
    cout<<"地址  值："<<endl;
    auto pc=&pa;
    cout<<(*pc)[0](av,3)<<": "<<*(*pc)[0](av,3)<<endl;

    const double *(*(*pd)[3])(const double *, int)=&pa;

    const double *pdb=(*pd)[1](av,3);
    cout<<pdb<<": "<<*pdb<<endl;

    cout<<(*(*pd)[2])(av,3)<<": "<<*(*(*pd)[2])(av,3)<<endl;
    //cin.get();
    return 0;
}

const double *f1(const double *ar, int n) {
    return ar;
}
const double *f2(const double ar[], int n) {
    return ar+1;
}
const double *f3(const double ar[], int n) {
    return ar+2;
}
*/

/*
inline double square(double x) {
    return x*x;
}

int main() {
    double a,b;
    double c=13.0;

    a=square(5.0);
    b=square(4.5+7.5);
    cout<<"a="<<a<<", b="<<b<<endl;
    cout<<"c="<<c;
    cout<<"，c的平方为"<<square(c++)<<endl;
    cout<<"现在c为"<<c<<endl;
    return 0;
}
*/


