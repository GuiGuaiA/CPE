

/*
 第一节练习题
 1.4
#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;

    return 0;
}
*/


/*
 1.5
#include <iostream>

int main() {
    std::cout << "Enter two numbers:";
    std::cout << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 + v2;
    std::cout << std::endl;

    return 0;
}
*/


/*
 1.6
 分号  表示一个语句的结束。
std::cout << "The sum of " << v1
          << " and " << v2
          << " is " << v1 + v2 << std::endl;
*/



/*
 1.9
#include <iostream>

int main(){
    int sum = 0,v = 50;
    while(v <= 100){
        sum += v;
        ++ v;
        }
    std::cout <<" Sum of 50 to 100 inclusive is "<< sum << std::endl;

    return 0;
}

*/

/*
 1.10
#include <iostream>

int main() {
    int = 10;
    while (v >= 0) {
        std::cout << v << " ";
        --v;
    }
    std::cout << std::endl;
    return 0;
}
*/

#include "iostream"



/*
1.11
#include "iostream"

int main(){
    int v1 , v2 , c;
    std::cout << " " ;
    std::cin >> v1 >> v2;
    if(v1 > v2){
        c  = v1;
        v1 = v2;
        v2 = c;
    }
    ++ v1;
    while (v1 < v2){
        std::cout << v1 << " " ;
        ++ v1;
    }
    std::cout << std::endl;
    return 0;
}
*/


/*
1.13
#include "iostream"

int main(){
    int sum = 0;
    for(int v = 50; v <= 100; v++)
        sum += v;
    std::cout << " " << sum << std::endl;
    return 0;
}

#include "iostream"

int main(){
    for(int v = 10 ; v >= 0; v--)
        std::cout << " " << v ;
    std::cout<< std::endl;
    return 0;
}

#include "iostream"

int main(){
    int v1 ,v2 ,c;
    std::cout << " ";
    std::cin >> v1 >> v2;
    if(v1 > v2){
        c  = v1;
        v1 = v2;
        v2 = c;
    }
    for(v1 ++ ;v1 < v2 ; v1 ++ )
        std::cout << v1 << " ";
        std::cout << std::endl;
    return 0;
}
*/

/*
1.16
#include "iostream"

int main(){
    int sum = 0, v = 0;
    while( std::cin >> v ){
        sum += v;
    }
    std::cout << " " << sum << std::endl;

    return 0;
}*/

#include "iostream"
using namespace std;

int cnt(int sum, int v){
    sum += v;
    return sum;
}

int cnt2(int v,int sum){
        for( v = 50; v <= 100; v++)
            sum += v;
        return sum;
}

/*int main(){
    int sum, v;
    cout << " " << endl;
    cout << " ";
    cin >> sum >> v;
    cout << " " << cnt(sum, v) << endl;
    return 0;*/
int main(){
   int sum = 0,v;
   cin >> sum >> v;
   cout << " " << cnt2(sum,v) << endl;
    return 0;
}



/*
1.17   1.18
#include "iostream"

int main()
 {
    int currv = 0, v = 0;
    if (std::cin >> currv){
        int sum = 1;
        while ( std::cin >> v ) {
            if (v == currv)
                sum++;
            else {
                std::cout << currv << " "
                          << sum << " " << std::endl;
                currv = v;
                sum = 1;
            }
        }
        std::cout << currv << " "
                  << sum << " " << std::endl;
    }
    return 0;
}

*/

/*
1.22
 //"sales_item"是一个类文件，需要自己定义，因为水平不够，先往后看。
#include "iostream"
#include "sales_item"

int main(){
    sales_item item1,item2;
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn() ){
        std::cout << item1 + item 2 << std::endl;
        return 0;
    } else{
        std::cout << " " << std::endl;
        return -1;
    }   // 这是个不完整的程序。
}*/


/*
//1.23  1.24
// 同上。
#include "iostream"
#include "sales_item.h"

int main(){
    Sales_item curritem,vitem;
    if(std::cin >> curritem ){
        int sum = 1;
        while (std::cin >> vitem){
            if ( curritem.isbn() == vitem.isbn() ) {
                sum++;
            }else{
                std::cout << curritem.isbn() << " " << sum << std::endl;
                curritem = vitem;
                sum = 1;
            }
        }
        std::cout << curritem.isbn() << " "<< sum << std::endl;
    }
    return 0;
}
*/

/*
1.25
#include "iostream"
#include "sales_item.h"

int main(){
    Sales_item total;  // 保存所有交易数据的变量
    if( std::cin >> total){   // 输入第一条交易记录。
        Sales_item trans;  // 保存读取后的交易记录的变量
        while (std::cin >> trans){  // 输入变量之和。
            if(total.isbn() == trans.isbn()) // 若处理的数据是同一本书。
                total += trans;  //  则更新数据之和。
            else
            {
                std::cout << total << std::endl;
                total = trans;

            }
        }
        std::cout << total << std::endl;
    } else{
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}*/

// 思路； 先读取一条数据信息并检测，看是否能通过，若不能通过直接转到 else 部分运算并发出警示。