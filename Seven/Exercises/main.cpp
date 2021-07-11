
/*
#include "iostream"
#include "Sales_data.h"

using namespace std;

int main(){
    cout << " input the information " << endl;
    Sales_data total;            // 保存求和结果  (一个变量)。
    if (cin >> total){           // 读入第一笔交易记录。
        Sales_data trans;        // 保存下一条交易数据。 （另一个变量）
        while (cin >> trans){    // 读入剩下的交易记录。
            if (total.isbn() == trans.isbn())   // 判断isbn是否相等。
                total += trans;    // 若相等，怎更新数据，也就是之前的结果加上现在的数据等于一个新的求和结果。
            else{
                cout << total << endl;   // 输出这本书的求和结果。
                total = trans;   // 一本书处理完后，换下本书。
            }
        }
        cout << total << endl;   // 输出最后一本书的求和结果。
    }
    else{
        cout << " NO ? " << endl;
        return -1;   // 确定是否还有信息没有输入。
    }
    return 0;
}
*/




/*
class Sales_data{
private:
    string bookNo;                  // 书的编号，初始化为空。
    unsigned units_sold = 0;        // 销售量，初始化为空。
    double sellingorice = 0.0;      // 原始售价
    double saleprice = 0.0;         // 实际售价
    double discount = 0.0;          // 折扣价格。
public:
    string isbn() const{ return bookNo;}     // isbn 函数只有一条语句，返回 bookNo
    Sales_data& combine(const Sales_data &rhs){    // combine 函数用于把两个 ISBN 相同的销售记录合并在一起
        units_sold += rhs.units_sold;     // 把 rhs 的成员加到 this 对象的成员上
        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold)
                / (rhs.units_sold + units_sold);   // 计算平均实际售价
        if (sellingorice != 0)
            discount = saleprice / sellingorice;    // 计算 this 对象的折扣
        return *this;
    }
};*/


/*
class Person {
private:
    string Name;
    string address;
public:
    Person() = default;
    Person(consts string &name,const string &addr){
        Name = name;
        address = addr;
    }
    Person(std::istream &is) { read(is,*this); }

    string getname() const { return name;}
    string getaddress() const { return address;}  // 公有函数成员， 只读取数据，不做改变。

    std::istream &read(std::istream &is, Person &per);
    std::ostream &print(std::ostream &os, const Persong &per);
};

std::istream & Person::read(std::istream &is, Person &per) {
    is >> per.strName >> per.strAddress;
    return is;
}

std::ostream & Person::print(std::ostream &os, const Persong &per) {
    os << per.getName() << per.getAddress();
    return os;
}
*/




/*
Sales_data add(const Sales_data &1hs,const Sales_data &rhs){
    Sales_data sum = 1hs;
    sun.combine(rhs);
    return sum;
}

istream &read(istream &is,Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sole;
    return is;
}

ostream &print(ostream &os,const Sales_data &item){
    os << item,isbn() << " " << item.units_sold << " " <<
          item.revenus << " " << item.ave_price;
    return os;
}*/



/*
7.7 （ 7.13 ）
#include "iostream"
#include "Sales_data.h"

using namespace std;

int main(){
    cout << " input the information " << endl;
    Sales_data total;
    if (total.read(cin,total)){
        Sales_data trans;
        while (trans.read(cin,trans)) {
            if (total.isbn() == trans.isbn())
                total = total.add(total, trans);
            else {
                total.print(cout, total) << endl;
                total = trans;
            }
        }
        total.print(cout,total) << endl;
    } else{
        cout << " NO " << endl;
        return -1;
    }
    return 0;
}
*/


/*
class Person{
private:
    string name;
    string address;
public:
    Person() = default;

    Person(const string &name, const string &addr) {
        strName = name;
        strAddress = addr;
    }
    Person(std::istream &is) { read(is, *this); }


    string name() const { return  name; }   // 返回名字。
    string address() const { return address; }  // 返回地址。
    std::istream &read(std::istream &is,Person &per);   // 在标准输入流中读取数据并写给定的person对象。
    std::ostream &print(std::ostream &os,const Person &per);   //  负责数据的输出。
};
srd:: istream & Person::(std::istream &is,Person &Per){
    is >> per.name >> per.address;
    return is;
}
std::ostream & Person::print(std::ostream &os, const Person &per) {
    os << per.name() << per.address();
    return os;
}

*/



/*
#include "Sales_data.h"

int main() {
    Sales_data data1;
    Sales_data data2("978-7-121-15535-2");
    Sales_data data3("978-7-121-15535-2", 100, 128, 109);
    Sales_data data4(std::cin);

    return 0;
}
*/



/*
class Sales_data {
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);

private:                            // 定义私有数据成员
    std::string bookNo;             // 书籍编号，隐士初始化为空串
    unsigned units_sold = 0;        // 销售量，显示初始化为 0
    double sellingprice = 0.0;      // 原始售价，显示初始化为 0.0
    double saleprice = 0.0;         // 实售价格，显示初始化为 0.0
    double discount = 0.0;          // 折扣，显示初始化为 0.0
};
*/



/*
calss Screen{
private:
    unsigned height = 0, wight = 0;
    unsigned cursor = 0;
    string contents;

public:
    Screen() = default;
    Screen(unsigned ht,unsigned wd) : height(ht),width(wd),
           contents(ht * wd,' '){ }
    Screen(unsigned ht,unsigned wd,char c)
          : height(ht),width(wd),contents(ht * wd,c){}
};
 */


/*
calss Sales_data{   // 隐式内联。
public:
    double avg_price() const{
        if(units_sold)
            return revebue / units_sold;
        else
            return 0;
    }
};


calss Sales_data{   // 显示内联。
    double avg_price() const;
};
inline double Sales_data::avg_price() const{
    if(units_sold)
        return revenue / units_sold;
    else
        return 0;
}*/


/*
#include "iostream"
#include "Screen.h"

int main(){
    Screen fact(5,5,'X');
    fact.move(4,0).set('#').display(std::cout);
    std::cout << "\n";
    fact.display(std::cout);
    std::cout << "\n";

    return 0;
}
*/



/*
#include "iostream"
#include "string"
using namespace std;

class Window_mgr{
public:
    void clear();  // 在 window 中声明 clear函数。
};

class Screen {
   friend void Window_mgr::clear();   // 在screen中声明友元函数。

private:
    unsigned height = 0,width = 0;
    unsigned cursor;
    std::string contents;
public:
    Screen() = default;
    Screen(unsigned ht,unsigned wd,char c)
           : height(ht),width(wd),contents( ht * wd,c) {}
};

void Window_mgr::clear() {
    Screen fact(10,20,'x');
    cout << " information " << endl;
    cout << fact.contents << endl;
    fact.contents = " ";
    cout << " information after " << endl;
    cout << fact.contents << endl;
}

 int main(){
    Window_mgr w;
    w.clear();
     return 0;
}
*/




/*
typedef string Type;            // 声明类型别名 Type 表示 string
Type initVal();                 // 声明函数 initVal，返回类型是 Type
class Exercise {                // 定义一个新类 Exercise
public:
    typedef double Type;        // 在内层作用域重新声明类型别名 Type 表示 double
    Type setVal(Type);          // 声明函数 setVal，参数和返回值的类型都是 Type
    Type initVal();             // 在内层作用域重新声明函数 initVal，返回类型是 Type

private:
    int val;                    // 声明私有数据成员 val
};
// 定义函数 setVal，此时的 Type 显然是外层作用域的
Type Exercise::setVal(Type parm) {
    val = parm + initVal();     // 此处使用的是类内的 initVal 函数
    return val;
}
*/



#include "iostream"
using namespace std;

class NoDefault{
public:
    NoDefault(int i){
        v = i;
    }
    int v;
};

class C{
public:
    NoDefault n;
    C(int i = 0) : n(i){}
};
int main(){
    C c;  // 使用了C的默认构造函数。
    cout << c.n.v << endl;  // c调用n，n调用了v.
    return 0;
}