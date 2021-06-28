

/*
2.3
#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
    return 0;
}
*/


/*
2.8
#include "iostream"

int main(){
    std::cout << "\50\77\xa";
    std::cout << "---------------" << std::endl;
    std::cout << "\50";
    std::cout << "\x9";
    std::cout << "\77";
    std::cout << "\xa";

    return 0;
}
*/


/*
2.10
#include "iostream"

std::string global_str;
int global_int;
int main(){
    int local_int;
    std::string local_str;
    std::cout << "global_str=" << global_str <<std::endl;
    std::cout << "global_int=" << global_int <<std::endl;
    std::cout << "local_int=" << local_int <<std::endl;
    std::cout << "local_str=" << local_str <<std::endl;

    return 0;
}
*/

/*
2.11
extern int ix = 1024;  	  // 定义
int iy;		              // 声明并定义 iy
extern int iz;		      // 声明 iz 而非定义 iz
*/


/*
2.12
int double = 3.14  //错误，c++关键字 double 不能做标符。
int _;  // 正确。
int catch-22;  // 错误，标识符有数字，字母和下划线组成。
int 1_or_2 = 1; // 错误，标识符必须以字母或下划线开头。
double Double = 3.14 //正确，标识符长度没有限制，大小写敏感。
 */


/*
2.14
#include "iostream"

int main(){
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++ i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
    return 0;
}
*/


/*
2.16
#include "iostream"

int main(){
    int i = 0, &r1 = i;
    double  d = 0, &r2 = d;
    r2 = 3.14159;
    std::cout << r2 << " " << std::endl;
    r2 = r1;
    std::cout << r2 << " " << std::endl;
    i = r2;
    std::cout << i << " " << std::endl;
    r1 = d;
    std::cout << r1 << " " << std::endl;

    return 0;
}
*/

/*
2.17
#include "iostream"

int main(){
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;

    return 0;
}
*/


/*
2.18
#include "iostream"

int main(){
    int v = 12, *p = &v;
    std::cout << " v = " << v << " " << " *p = " << *p <<std::endl;
    v = 22;
    std::cout << " v = " << v << " " << " *p = " << *p <<std::endl;
    *p = 32;
    std::cout << " v = " << v << " " << " *p = " << *p <<std::endl;

    return 0;
}

*/


/*
2.20
#include <iostream>

int main () {
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << "i = " << i << " " << "*p1 = " << *p1;

    return 0;
}
*/

/*
2.22
#include "iostream"

int main(){
    int i = 12;
    int *p = &i; // p被初始化，存有i的地址。  p指向一个 int 型的数。
    std::cout << " p = " << p << " " << " *P = " << *p << std::endl;
    if(p)
        std::cout << " ture " << std::endl;
    else
        std::cout << " false " << std::endl;
    if(*p)
        std::cout << " ture " << std::endl;
    else
        std::cout << " false " << std::endl;

    i = 0; // i重新赋值。
    p = &i;  // p值被改变，指向i。
    std::cout << " p = " << p << " " << " *p = " << *p << std::endl;
    if(*p)
        std::cout << " ture " <<std::endl;
    else
        std::cout << " false " << std::endl;
    if(p)
        std::cout << " ture " << std::endl;
    else
        std::cout << " false " << std::endl;

    return 0;
}*/

/*
2.34
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << std::endl;
    a = 42;
    b = 42;
    c = 42;
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << std::endl;

    return 0;
}
*/

/*
const int i = 42;    i是整型常量。
auto j = i;    j是整数。
const auto &k = i; auto *p = &i;  k是整型常量，p是指向整型常量的指针。
const auto j2 = i, &k2 = i;  j2为整型常量，k2为引用。
 */


/*
2.36
#include "iostream"
#include "typeinfo"

int main(){
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    return 0;
}*/

/*
3.38

auto 和 decltype 的区别主要有三方面：

    1.auto 类型说明符用编译器计算变量的初始值来推断其类型，而 decltype 虽然也让编译器分析表达式并得到它的类型，但是不实际计算表达式的值。
    2.编译器推断出来的 auto 类型有时候和初始值的类型并不完全一样，编译器会适当地改变结果类型使其更符合初始化规则。
    例如，auto 一般会忽略掉顶层 const，而把底层 const 保留下来。与之相反，decltype 会保留变量的顶层 const。
    3.与 auto 不同，decltype 的结果类型与表达式密切相关，如果变量名加上了一对括号，则得到的类型与不加括号时会有不同。
    如果 decltype 使用的是一个不加括号的变量，则得到的结果就是该变量的类型；如果给变量加上了一层或多层括号，则编译器将推断得到引用类型。


#include <iostream>
#include <typeinfo>

int main() {
    int a = 3;
    auto c1 = a;
    decltype(a) c2 = a;
    decltype((a)) c3 = a;

    const int d = 5;
    auto f1 = d;
    decltype(d) f2 = d;

    std::cout << typeid(c1).name() << std::endl;	// int
    std::cout << typeid(c2).name() << std::endl;	// int
    std::cout << typeid(c3).name() << std::endl;	// int &
    std::cout << typeid(f1).name() << std::endl;	// int
    std::cout << typeid(f2).name() << std::endl;	// const int

    std::cout << a << " " << c1 << " " << c2 << " " << c3 << " " << f1 << " " << f2 << std::endl;

    return 0;
}
*/


/*
2.39
#include "iostream"

struct Foo { };
int main(){
    return 0;
}*/

/*
2.40
#include "iostream"

struct Sales_data{
    std::string book_no;
    unsigned units_sold = 0;
    float price = 0.0;
    float reuenue = 0.0;
};
*/

/*
2.41 （1.20）
#include <iostream>
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data book;
    std::cout << "记录" << std::endl;
    while (std::cin >> book) {
        std::cout << "ISBN、售出本数、原始价格、实售价格、折扣为：" << book << std::endl;
    }

    return 0;
}
*/

/*
2.41(1.21)
#include <iostream>
#include "Sales_data.h"

using namespace std;

int main() {
    Sales_data trans1, trans2;
    std::cout << "请输入两条 ISBN 相同的销售记录：" << std::endl;
    std::cin >> trans1 >> trans2;
    if (compareIsbn(trans1, trans2))
        std::cout << "汇总信息：ISBN、销售本数、原始价格、实售价格、折扣为："
                  << "\n" << trans1 + trans2 << std::endl;
    else
        std::cout << "两条销售记录的 ISBN 不同" << std::endl;

    return 0;
}
*/

/*
//2.41(1.22)
#include <iostream>
#include "Sales_data.h"

using namespace std;

int main() {
    Sales_data total, trans;  // 总销售记录 已经循环过的销售记录
    std::cout << "请输入几条 ISBN 相同的销售记录：" << std::endl;
    if (std::cin >> total) {   // 输入数据总数
        while (std::cin >> trans)  // 循环销售记录。
            if (compareIsbn(total, trans))
                total += trans;  // 若此时处理的是同一本书，则更新数据。
            else {
                std::cout << " " << std::endl;   //处理的不是同一本书。
                break;
            }
        std::cout << "书的想信息："<< "\n" << total << std::endl;  // \n 换行符。
    } else {
        std::cout << "没有数据" << std::endl;
        return -1;
    }

    return 0;
}
*/

