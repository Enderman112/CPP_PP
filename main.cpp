#import <iostream>
#import <cmath>
#import <climits>
#import <cstring>
#import <vector>
#import <array>
#import <ctime>
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

