/*
//
// Created by sun on 2021/7/7.
//

#ifndef EXERCISES_SALES_DATA_H
#define EXERCISES_SALES_DATA_H

#endif //EXERCISES_SALES_DATA_H
#ifndef TEST_SALES_DATA_H
#define TEST_SALES_DATA_H

// Definition of Sales_data class and related functions goes here
#include <iostream>
#include <string>

// 头文件不应包含 using 声明
// using namespace std;

class Sales_data {
    // 友元函数
    friend std::istream &operator>>(std::istream &, Sales_data &);

    // 友元函数
    friend std::ostream &operator<<(std::ostream &, const Sales_data &);

    // 友元函数
    friend bool operator<(const Sales_data &, const Sales_data &);

    // 友元函数
    friend bool operator==(const Sales_data &, const Sales_data &);

public:     // 构造函数的 3 种形式
    Sales_data() = default;

    Sales_data(const std::string &book) : bookNo(book) {}

    Sales_data(std::istream &is) { is >> *this; }

    Sales_data &operator+=(const Sales_data &);

    std::string isbn() const { return bookNo; }

private:
    std::string bookNo;         // 书籍编号，隐式初始化为空串
    unsigned units_sold = 0;    // 销售量，显式初始化为 0
    double sellingprice = 0.0;  // 原始价格，显式初始化为 0.0
    double saleprice = 0.0;     // 实售价格，显式初始化为 0.0
    double discount = 0.0;      // 折扣，显式初始化为 0.0
};

inline bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() == rhs.isbn();
}

Sales_data operator+(const Sales_data &, const Sales_data &);

inline bool operator==(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.units_sold == rhs.units_sold &&
           lhs.sellingprice == rhs.sellingprice &&
           lhs.saleprice == rhs.saleprice &&
           lhs.isbn() == rhs.isbn();
}

inline bool operator!=(const Sales_data &lhs, const Sales_data &rhs) {
    return !(lhs == rhs);   // 基于运算符 == 给出 != 的定义
}

Sales_data &Sales_data::operator+=(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold)
                / (rhs.units_sold + units_sold);
    if (sellingprice != 0)
        discount = saleprice / sellingprice;
    return *this;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data ret(lhs);    // 把 lhs 的内容拷贝到临时变量 ret 中，这种做法便于运算
    ret += rhs;             // 把 rhs 的内容加入其中
    return ret;             // 返回 ret
}

std::istream &operator>>(std::istream &in, Sales_data &s) {
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
    if (in && s.sellingprice != 0)
        s.discount = s.saleprice / s.sellingprice;
    else
        s = Sales_data();   // 输入错误，重置输入的数据
    return in;
}

std::ostream &operator<<(std::ostream &out, const Sales_data &s) {
    out << s.isbn() << " " << s.units_sold << " "
        << s.sellingprice << " " << s.saleprice << " " << s.discount;
    return out;
}

#endif //TEST_SALES_DATA_H
*/



/*
#ifndef TEST_SALES_DATA_H
#define TEST_SALES_DATA_H

// Definition of Sales_data class and related functions goes here
#include <iostream>
#include <string>

// 头文件不应包含 using 声明
// using namespace std;

class Sales_data {
private:                            // 定义私有数据成员
    std::string bookNo;             // 书籍编号，隐士初始化为空串
    unsigned units_sold = 0;        // 销售量，显示初始化为 0
    double sellingprice = 0.0;      // 原始售价，显示初始化为 0.0
    double saleprice = 0.0;         // 实售价格，显示初始化为 0.0
    double discount = 0.0;          // 折扣，显示初始化为 0.0
public:                             // 定义公有函数成员

    Sales_data() = default;
    Sales_data(const std::string &book) : bookNo(book) {}
    Sales_data(const std::string &book, const unsigned num,
               const double sellp, const double salep);
    Sales_data(std::istream &is);

    // isbn 函数只有一条语句，返回 bookNo
    std::string isbn() const { return bookNo; }
    // combine 函数用于把两个 ISBN 相同的销售记录合并在一起
    Sales_data& combine(const Sales_data &rhs) {
        units_sold += rhs.units_sold;   // 把 rhs 的成员加到 this 对象的成员上
        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold)
                    / (rhs.units_sold + units_sold);    // 计算平均实际售价
        if (sellingprice != 0)
            discount = saleprice / sellingprice;    // 计算 this 对象的折扣
        return *this;               // 返回调用该函数的对象
    }
    Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    std::istream &read(std::istream &is, Sales_data &item);
    std::ostream &print(std::ostream &os, const Sales_data &item);
};

Sales_data Sales_data::add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &Sales_data::read(std::istream &is, Sales_data &item) {
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    if (is && item.sellingprice != 0)
        item.discount = item.saleprice / item.sellingprice;
    else
        item = Sales_data();   // 输入错误，重置输入的数据
    return is;
}

std::ostream &Sales_data::print(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.sellingprice
       << " " << item.saleprice << " " << item.discount;
    return os;
}

#endif //TEST_SALES_DATA_H*/


/*
#ifndef TEST_SALES_DATA_H
#define TEST_SALES_DATA_H

// Definition of Sales_data class and related functions goes here
#include <iostream>

// 头文件不应包含 using 声明
// using namespace std;

class Sales_data {
public:
    // 4 个构造函数
    Sales_data() = default;   // 目的是要其他形式的函数，也要默认构造函数。
    Sales_data(const std::string &book) : bookNo(book) {}
    Sales_data(const std::string &book, const unsigned num,
               const double sellp, const double salep);
    Sales_data(std::istream &is);

    std::istream &read(std::istream &is, Sales_data &item);

private:                            // 定义私有数据成员
    std::string bookNo;             // 书籍编号，隐士初始化为空串
    unsigned units_sold = 0;        // 销售量，显示初始化为 0
    double sellingprice = 0.0;      // 原始售价，显示初始化为 0.0
    double saleprice = 0.0;         // 实售价格，显示初始化为 0.0
    double discount = 0.0;          // 折扣，显示初始化为 0.0
};

Sales_data::Sales_data(const std::string &book, const unsigned num,
                       const double sellp, const double salep) {   // 构造函数，书的isbn编号，卖的数量，原始价钱，实际售价。
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if (sellingprice != 0)
        discount = saleprice / sellingprice;    // 计算实际折扣
}

Sales_data::Sales_data(std::istream &is) {
    read(is, *this);    // 从is中读取信息，存入在this对象中。
}

std::istream& Sales_data::read(std::istream &is, Sales_data &item) {
    is >> item.bookNo >> item.units_sold >> item.sellingprice
       >> item.saleprice;   // 输出各项数据。
    return is;
}

#endif //TEST_SALES_DATA_H
*/
