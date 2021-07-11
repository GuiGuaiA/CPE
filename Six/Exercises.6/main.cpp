
/*
#include "iostream"
#include "cmath"

using namespace std;

int fact(int v){
    if (v < 0)
        return -1;
    int r = 1;
    while (v > 1)
        r *= v--;
    return r;
}

double fact1(double v){
    if (v < 0)
        return -v;
    else
        return v;
}
double fact2(double v){
    return abs(v);
}

double fact3(double v1, double v2){
    double r = v1 + v2;
    static unsigned cnt = 0;
    ++cnt;
    cout << " " << cnt << endl;
    return r;
}

int fact4(){
    static unsigned cnt1 = -1;
    ++cnt1;
    return cnt1;
}

*/
/*int main(){
    int num;
    cout << " ";
    cin >> num;
    cout << num << " " << fact(num) << endl;
    return 0;
}*//*


*/
/*
int main(){
    double v;
    cout << " ";
    cin >> v;
    cout << v << " " << fact1(v) << endl;
    cout << v << " " << fact2(v) << endl;
    return 0;
}
*//*


*/
/*
int main(){
    double v1,v2;
    cout << " ";
    while (cin >> v1 >> v2) {
        cout << v1 << " " << v2 << " " << fact3(v1, v2) << endl;
        cout << " ";
    }
    return 0;
}
*//*


*/
/*
int main(){
    cout << " " << endl;
    char c;
    while (cin >> c){
        cout << " " << fact4() << endl;
    }
    return 0;
}*//*


*/


/*


#include "iostream"
using namespace std;

void fact5(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;

    cout << " " << a << endl;
    cout << " " << b << endl;
}

void reset(int &v){
    v = 0;
}

void fact6(int &a,int &b){
    int c = a;
    a = b;
    b = c;
}

*/
/*
int main(){
    int a = 5 ,b = 10;
    int *r = &a, *t = &b;
    cout << " exchange a =  " << a << " b = " << b << endl;
    cout << " " << r << endl;
    cout << " " << t << endl;
    fact5(r,t);
    cout << " finally " << a << " " << b << endl;
    return 0;
}*//*


*/
/*
int main(){
    int i = 33;
    reset(i);
    cout << " i = " << i << endl;
    return 0;
}*//*


int main(){
    int i = 5, j = 10;
    cout << " i = " << i << " j = " << j << endl;
    fact6(i,j);
    cout << " finally  i = " << i << " j = " << j << endl;
    return 0;
}*/


/*

#include "iostream"
#include "string"
using namespace std;

bool fact1(const string &s){
    for(auto c : s)
        if(isupper(c))
            return true;
    return false;  // 这里是判断是否有大写的字母，只是判断，不要更改，所以是常量引用。
}

void fact2(string &s){
    for(auto &c : s)
        c = tolower(c);  // 这里是判断过字母大小写了，需要把大写的字母改成小写的，需要用非常量引用。
}

int main(){
    cout << " ";
    string s;
    cin >> s;
    if (fact1(s)){
        fact2(s);
        cout << " " << s << endl;
    } else
        cout << " " << endl;
    return 0;
}*/


/*
#include "iostream"
#include "ctime"
#include "cstdlib"
using namespace std;

int fact(const int v,const int *p){
    return (v > *p) ? v : *p;
}
int main(){
    srand((unsigned) time(NULL));
    int a[10];
    for (auto &i : a)
        i = rand() % 100;
    cout << " Input a number ";
    int j;
    cin >> j;
    cout << " the max number " << fact(j,a) << endl;
    cout << " all number " << endl;
    for (auto i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}*/



/*

#include "iostream"
using namespace std;

void fact1(int *p,int *q){  // 不交换指针，但是交换指针所指的的内容。
    int c = *p;
    *p = *q;
    *q = c;
    cout << " p is " << p << " q is " << q << endl;
}

void fact2(int *p,int *q){  // 不交换指针，也不交换内容。
    int *c = p;
    p = q;
    q = c;
    cout << " p is " << p << " q is " << q << endl;
}

void fact3(int *p,int *q){  //  交换指针本身的值，即交换指针所指的内存地址。
    int c = *p;
    *p = *q;
    *q = c;
    cout << " p is " << p << " q is " << q << endl;
}

int main(){
    int a = 1,b = 2;
    int *r = &a,*s = &b;
    cout << " before " << endl;
    cout << " r is " << r << " s is " << s << endl;
    cout << " *r is " << *r << " *s is " << *s << endl;
    fact3(r,s);
    cout << " after " << endl;
    cout << " r is " << r << " s is " << s << endl;
    cout << " *r is " << *r << " *s is " << *s << endl;
    cout << endl;

    return 0;
}*/



/*

#include "iostream"
using namespace std;

void print(const int *beg,const int *end){
    while (beg != end)
        cout << *beg++ << endl;
}

void print1(const int *p){
    cout << *p << endl;
}

int main(){
    int i = 0, j[2] = {0,1};
    print( begin(j),end(j));
    cout << " j is " << endl;
    print1(&i);
    cout << " i is " << endl;
    return 0;
}*/


/*

#include "iostream"
#include "string"
using namespace std;

int main(int argc,char *argv[]){  // argc 为数组中字符串的数量，argv 为存有字符串的数组。
    string s;
    for (int i = 0; i != argc; i++){   // 判断argc是否为空，
        s += argv[i];  // 字符串s等于 s 加上 argv。
    }
    cout << s << endl;
    return 0;
}*/


/*

#include "iostream"
using namespace std;
int fact(initializer_list<int> i){
    int num = 0;
    for (auto v : i)  // 遍历 i 中的所有元素。
        num += v;
    return num;
}

int main(int a,char **v){    // a 为数组中的数量，v
    cout << " num is " << fact({1,2,3}) << endl;
    cout << " num is " << fact({3,3,3}) << endl;
    return 0;
}*/



/*
#include <iostream>
using namespace std;

bool str_subrange(const string &str1, const string str2) {
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size())
                ? str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i])
            return;
    }
}
int main(int argc, char **argv) {

        return 0;
}
*/



/*

#include "iostream"
#include "vector"

using namespace std;
int &get(int *arry,int index){
    return arry[index];
}

void fact(vector<int> v, unsigned i){
    unsigned sz =v.size();
    if (!v.empty() && i < sz){
        cout << v[i] << endl;
        fact(v,i+1);  // 关闭调试的。
    }
}

*/
/*
int main(int a,char **v){
    int i[10];
    for(int c : i)
        cout << c << " ";
    cout << endl;
    for (int b = 0; b != 10; ++b)
        get(i,b) = b;
    for(int c : i)
        cout << c << " ";
    cout << endl;
    return 0;
}*//*



int main(){
    vector<int> v ={1,2,3,4,5,6,7,33,222};
    fact(v,0);
    return 0;
}*/



/*
#include "iostream"
#include "string"
#include "vector"
using namespace std;

string make_plural(size_t s,const string &word,const string &ending = "s"){
    return (s > 1) ? word + ending : word;   // size_t 是计数值，后面的是单词，结束符。 然后判断计数值是否大于1，是的话是复数形式，否则是原型。
}

void fact(vector<int> v,unsigned i){   // v 是数组， 定义 i ，其表示一个范围，
    unsigned size = v.size();   // 定义size为 v 的大小。
    cout << " vector the size is  " << size << endl;
    if (!v.empty() && i < size){   // v 不是空的，且i表示的数位小于v的大小的话则输出数组，且每次输出后i加一，知道数组的元素全部输出。
        cout << v[i] << endl;
        fact(v,i + 1);   // 打开调试的。
    }
}


*/
/*
int main(){
    cout << " the singular is " << make_plural(1,"success","es") << endl;
    cout << " the plural is " << make_plural(2,"success","es") << endl;

    cout << " the singular is " << make_plural(1,"failure") << endl;
    cout << " the plural is " << make_plural(2,"failure") << endl;

    return 0;
}*//*



int main(){
    vector<int> v = {1,2,3,4,5,6};
    fact(v,0);
    return 0;
}*/




#include "iostream"
#include "vector"
using namespace std;

void f();
void f(int);
void f(int, int);
void f(double,double);



int fact1(int a,int b){
    return a + b;
}

int fact2(int a,int b){
    return a - b;
}

int fact3(int a,int b){
    return a * b;
}

int fact4(int a,int b){
    return a / b;
}

void compute(int a,int b, int (*p)(int,int)){  // 函数元素 指向  其  函数的指针。
    cout << p(a,b) << endl;
}

/*
int main(){
    f(42);
    f(42,0);
    f(2.56,3.14);

    return 0;
}
void f(){
    cout << " f() " << endl;
}

void f(int i){
    cout << " f(int i)" << endl;
}

void f(int i,int j){
    cout << " f(int i,int j) " << endl;
}

void f(double d1, double d2 = 3.14) {
    cout << " f(double, double) " << endl;
}*/


int main(){
    int i = 2, j = 3;
    decltype(fact1) *p1 = fact1,*p2 = fact2,*p3 = fact3,*p4 = fact4;  // decltype 直接得出最后计算结果的类型，然后一次调用fact1，2，3，4.
    vector<decltype(fact1) *> v = {p1,p2,p3,p4};  // 把调用函数计算出来的值储存在这个 数组v 中。 计算出来的结果是这个vector的元素， 后面有个*，其元素是指向fact1，2，3，4的指针。
    for (auto p : v) {   // 然后遍历循环出来。
        compute(i,j,p);  // p 等同于上面的 int（*p）（int,int） 是指向函数的指针。
    }
    return 0;
}