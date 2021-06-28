
/*
3.1  (1.9)
#include "iostream"

using std::cin; using std::cout; using std::endl;

int main(){
    int sum = 0;
    for (int v = 50; v <=100 ; ++v)
    {
      sum += v;
    }
    cout << " " << sum <<endl;
    return 0;
}
*/


/*
3.1 (1.10)
#include "iostream"

using std::cin; using std::cout; using std::endl;

int main(){
    int v = 0;
    while (v <= 10 ){
        cout << " " << v;
        v++;
    }
    return 0;
}
 */


/*
3.1 (1.11)
#include "iostream"

using std::cin; using std::cout; using std::endl;

int main(){
    int a,b,temp;
    cin >> a >> b;
    if( a > b){
        a = temp;
        a = b;
        b = temp;
    }
    ++a;
    while (a < b){
     cout << a << " " ;
     a++;
    }
    return 0;
}
*/

/*
3.2 (整行)
#include "iostream"
#include "string"

using namespace std;

int main(){
    string line;
    while (getline(cin, line))
        cout << line <<endl;
    return 0;

}
*/


/*
3.2 (一次读一个词)
#include "iostream"
#include "string"
using namespace std;

int main(){
    string word;
    while ( cin >> word) {

        cout << word << endl;
    }
    return 0;
}
*/


/*
 *
 * 3.3
1、标准库 string 的输入运算符自动忽略字符串开头的空白（包括空格符、换行符、制表符等），从第一个真正的字符开始读起，直到遇见下一处空白为止。
2、如果希望在最终的字符串中保留输入时的空白符，应该使用 getline 函数代替原来的 >> 运算符，getline 从给定的输入流中读取数据，
直到遇到换行符为止，此时换行符也被读取进来，但是并不存储在最后的字符串中。

一个典型的示例如下所示

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string word, line;
    cout << "请选择读取字符串的方式：1 表示逐词读取， 2 表示整行读取" << endl;
    char ch;
    cin >> ch;
    if (ch == '1') {
        cout << "请输入字符串：    Welcome to C++ family!  " << endl;
        cin >> word;
        cout << "系统读取的有效字符串是：" << endl;
        cout << word << endl;
        return 0;
    }

    // 清空输入缓冲区
    cin.clear();
    cin.ignore();

    if (ch == '2') {
        cout << "请输入字符串：    Welcome to C++ family!  " << endl;
        getline(cin, line);
        cout << "系统读取的有效字符串是：" << endl;
        cout << line << endl;
        return 0;
    }
    cout << "您的输入有误！";

    return -1;
}
*/

/*
3.4 (1)
#include "iostream"
#include "string"

using namespace std;

int main(){
    string string1,string2;
    cout << " " << endl;
    cin >> string1 >> string2;
    if ( string1 == string2 ){
        cout << " " << endl;
    }
    else if ( string1 > string2 )
    {
       cout << string1 << " > "  << string2 << endl;
    }
    if ( string1 < string2 )
    {
        cout << string1 << " < " << string2 << endl;
    }
    return 0;
}
*/


/*
3.4（2）
#include "iostream"
#include "string"

using namespace std;

int main(){
    string string1,string2;
    cout << " " << endl;
    cin >> string1 >> string2;
    auto len1 = string1.size();
    auto len2 = string2.size();
    if ( len1 == len2 )
        cout << " 都等 " << len1 << endl;
    else if ( len1 > len2 )
        cout << string1 << " " << string2 << " " << len1-len2 << " " << endl;
    if ( len1 < len2 )
        cout << string2 << " " << string2 << " " << len2-len1 << " " << endl;
    return 0;

}
*/

/*
3.5(1)
#include "iostream"
#include "string"

using namespace std;

int main(){
    string s1,s2;
    cout << " " << endl;
    while ( cin >> s1 >>s2){
        s1 += s2;
        cout << s1 << " " <<endl;
    }
    return 0;
}
*/


/*
3,5(2)
#include "iostream"
#include "string"

using namespace std;

int main(){
    string s1,s2,s3;
    cout << " " << endl;
    while ( cin >> s1 >>s2){
        s3 = s1 + " " +s2;
        cout << s3 << " " <<endl;
    }
    return 0;
}
*/

/*
3.6
#include "iostream"
#include "string"

using namespace std;

int main(){
    string s;
    cout << " " << endl;
    getline(cin,s );
    for ( auto &c : s )
        c = 'x';
    cout << s << endl;

    return 0;
}
*/

// 3.7 使用char类型不会改变什么，因为auto会自动判断后续字符的类型。

/*
3.8 (while)
#include "iostream"
#include "string"

using namespace std;

int main(){
    string s;
    cout << " " << endl;
    getline( cin,s );
    int i = 0;
    while ( s[i]!= '\0'){
        s[i] = 'x';
        ++i;
    }
    cout << s << endl;
    return 0;
}
*/

/*
3.8 (for)
#include "iostream"
#include "string"

using namespace std;

int main(){
    string s;
    cout << " " << endl;
    getline( cin,s );
    int i = 0;
    for (i;i < s.size(); i++){
        s[i] = 'x';
    }
    cout << s << endl;
    return 0;
}
*/

/*
3.10(1)
#include "iostream"
#include "string"

using namespace std;

int main(){
    string s;
    cout << " " << endl;
    getline( cin, s );
    for (auto &c : s )
        if ( !ispunct(c))
            cout << c ;
    return 0;
}
*/


/*
3.10(2)
#include "iostream"
#include "string"

using namespace std;

int main(){
    string s, result;
    cout << " " << endl;
    getline( cin,s );
    for(decltype(s.size())i = 0; i <= s.size();i++)
        if (!ispunct(s[i]))
            result += s[i];
        cout << result << endl;
    return 0;
}
*/


/*
3.14
#include "iostream"
#include "vector"

using namespace std;

int main() {
    vector<int> v;
    char cont = 'y';
    for (int i ; cin >> i;) {
    v.push_back(i);
    cin >> cont;
    if (cont != 'y' && cont != 'Y')
        break;
}
    for (auto men : v)
        cout << men << " ";
    cout << endl;
    return 0;
}
*/


/*
3.15
#include "iostream"
#include "vector"
#include "string"

using namespace std;

int main() {
    vector<string> s;
    char cont = 'y';
    for (string i ; cin >> i;) {
        s.push_back(i);
        cin >> cont;
        if (cont != 'y' && cont != 'Y')
            break;
    }
    for (auto men : s)
        cout << men << " ";
    cout << endl;
    return 0;
}
*/

/*
3.16
#include "iostream"
#include "vector"
#include "string"

using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};

    cout << " " << v1.size() << endl;
    if(v1.size() > 0 ) {
        for (auto s : v1)
            cout << s << " ";
        cout << endl;
    }

    cout << " " << v2.size() << endl;
    if (v2.size() > 0) {
        for (auto s : v2)
            cout << s << " ";
        cout << endl;
    }
    cout << " " << v3.size() << endl;
    if (v3.size() > 0) {
        for (auto s : v3)
            cout << s << " ";
        cout << endl;
    }
    cout << " " << v7.size() << endl;
    if (v7.size() > 0) {
        for (auto s : v7)
            cout << s << " ";
        cout << endl;
    }
    return 0;
}
*/


/*
3.17
#include "iostream"
#include "string"
#include "vector"

using namespace std;

int main(){
    vector<string> v;
    string s;
    char cont = 'y';
    cout << " " << endl;
    while (cin >> s){
        v.push_back(s);
        cin >> cont;
        cout << " " << endl;
        if (cont != 'y' && cont != 'Y')
            break;
        cout << " " << endl;
    }
    cout << " " << endl;
    for (auto &mem : v) {
        for (auto &c : mem)
            c = toupper(c);
        cout << mem << endl;
    }
    return 0;
}
*/


/*
3.19
(1). vector<int> v(10,10);
(2). vector<int> v{10,10,10,10,10,10,10,10,10,10};
(3). vector<int> vInt(10);
     for (auto &i : vInt)
      i = 10;
*/


/*
3.20 (1)
#include "iostream"
#include "vector"

using namespace std;;

int main(){
    vector<int> v;
    cout << " " << endl;
    for( int i; cin >> i;i++)
        v.push_back(i);
        if (v.size() == 0) {
            cout << " " << endl;
            return -1;
        }
        cout << " " << endl;
        for (decltype(v.size()) i = 0; i < v.size() - 1; i += 2) {
            cout << v[i] + v[i + 1] << " ";
            if ((i + 2) % 10 == 0)
                cout << endl;
        }
    if (v.size() % 2 != 0)
    cout << v[v.size() - 1];
    return 0;
}
*/


/*
3.20(2)
#include "iostream"
#include "vector"

using namespace std;

int main(){
    vector<int> v;
    cout << " " << endl;
    for (int i = 0; cin >> i;i++)
        v.push_back(i);
        if (v.size() == 0){
            cout << " " << endl;
            return -1;
        }
        cout << " " << endl;
        for (decltype(v.size()) i = 0; i < v.size() / 2; i++ ){
            cout << v[i] + v[v.size() - i - 1] << " ";
            if ((i + 1) % 5 == 0)
                cout << endl;
        }
    if (v.size() / 2 != 0)
        cout << v[v.size() / 2];
    return 0;
}
*/


/*
3.21
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << " " << v1.size() << endl;
    if (v1.cbegin() != v1.cend()){ // 判断v1是否为空。
        cout << " " << endl;
        for (auto it = v1.cbegin(); it != v1.cend(); it++)  // auto判断v1的类型，之后判断v1是否到末尾。
            cout << *it << " ";
        cout << endl;
    }

    cout << " " << v2.size() << endl;
    if (v2.cbegin() != v2.cend()){
        cout << " " << endl;
        for (auto it = v2.cbegin(); it !=v2.cend();it++)
            cout << *it << " ";
        cout << endl;
    }

    cout << " " << v3.size() << endl;
    if (v3.cbegin() != v3.cend()){
        cout << " " << endl;
        for (auto it = v3.cbegin();it != v3.cend();it++)
            cout << *it << " ";
        cout << endl;
    }

    cout << " " << v5.size() << endl;
    if (v5.cbegin() != v5.cend()){
        cout << " " << endl;
        for (auto it = v5.cbegin();it != v5.cend();it++)
            cout << *it << " ";
        cout << endl;
    }

    cout << " " << v6.size() << endl;
    if (v6.cbegin() != v6.cend()){
        cout << " " << endl;
        for (auto it = v6.cbegin();it != v6.cend();it++)
            cout << *it << " ";
        cout << endl;
    }
    cout << " " << v7.size() << endl;
    if (v7.cbegin() != v7.cend()){
        cout << " " << endl;
        for (auto it = v7.cbegin();it != v7.cend();it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}
*/

/*

#include "iostream"
#include "string"
#include "vector"

using namespace std;

int main(){
    vector<string> text;
    string s;
    while (getline(cin,s))
        text.push_back(s); // 逐个返回到s中去。
    for (auto it = text.begin(); it != text.end() && it -> empty(); it++){  // 利用迭代器遍历全部字符串，遇空串停止循环
        for (auto it2 =  it->begin(); it2 != it->end(); it2++)
            *it2 = toupper(*it2);  // 再次遍历，改写为大写形式。
        cout << *it << " ";
    }
    return 0;

}

*/


/*
3.23
// 当输出原始数据时，只需要读取而无须更改，所以迭代器选用 cbegin 和 cend；当执行翻倍计算时，需要读写元素内容，所以迭代器选用 begin 和 end
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    vector<int> v;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10 ; i++){  // 生成随机数种子。
        v.push_back(rand() % 1000);  // 将数添加在数组v中。
    }
    cout << " " << endl;
    for (auto it = v.cbegin(); it != v.cend(); it++){  // 迭代遍历每个初始数据。
        cout << *it << " ";
    }
    cout << endl;
    cout << " " << endl;
    for (auto it = v.begin(); it != v.end(); it++){
        *it *=2;   // 更改数据。
        cout << *it << " " ;
    }
    cout << endl;

    return 0;
}
*/

/*
srand函数是随机数发生器的初始化函数。原型:void srand(unsigned seed);
用法:它初始化随机种子，会提供一个种子，这个种子会对应一个随机数，如果使用相同的种子后面的rand()函数会出现一样的随机数，
如: srand(1); 直接使用1来初始化种子。不过为了防止随机数每次重复，常常使用系统时间来初始化，
即使用 time函数来获得系统时间，它的返回值为从 00:00:00 GMT, January 1, 1970 到现在所持续的秒数，
然后将time_t型数据转化为(unsigned)型再传给srand函数，即: srand((unsigned) time(&t));
还有一个经常用法，不需要定义time_t型t变量,即: srand((unsigned) time(NULL)); 直接传入一个空指针，因为你的程序中往往并不需要经过参数获得的数据。

进一步说明下：计算机并不能产生真正的随机数，而是已经编写好的一些无规则排列的数字存储在电脑里，把这些数字划分为若干相等的N份，并为每份加上一个编号用
srand()函数获取这个编号，然后rand()就按顺序获取这些数字，当srand()的参数值固定的时候，rand()获得的数也是固定的，
所以一般srand的参数用time(NULL)，因为系统的时间一直在变，所以rand()获得的数，也就一直在变，相当于是随机数了
* */


/*
函数: ctime
功 能: 把日期和时间转换为字符串
用 法: char *ctime(const time_t *time);
*/


/*
3.24(1)
#include "iostream"
#include "vector"

using namespace std;;

int main(){
    vector<int> v;
    cout << " " << endl;
    for( int i; cin >> i;i++)
        v.push_back(i);
    if (v.cbegin() == v.cend()) {
        cout << " " << endl;
        return -1;
    }
    cout << " " << endl;
    for (auto it = v.cbegin(); it != v.cend() - 1; it++) {
        cout << (*it + *(++it)) << " ";
        if ((it - v.cbegin() + 1) % 10 == 0)
            cout << endl;
    }
    if (v.size() % 2 != 0)
        cout << *(v.cend() - 1);
    return 0;
}
*/


/*
3.24(2)
#include "iostream"
#include "vector"

using namespace std;

int main(){
    vector<int> v;
    cout << " " << endl;
    for (int i = 0; cin >> i;i++)
        v.push_back(i);
    if (v.cbegin() == v.cend()){   // 判断是否为空。
        cout << " " << endl;
        return -1;
    }
    cout << " " << endl;
    auto begin = v.begin();
    auto end = v.end();   // 第一个元素就是数列的第一个数，结尾是数列的最后元素的后面的位置。
    for (auto it = begin; it != begin + (end - begin) /2; it++){
        cout << (*it + *(begin + (end - it) -1 )) << " ";
        if ((it - begin + 1) % 5 == 0)
            cout << endl;
    }
    if (v.size() / 2 != 0)
        cout << *(begin + (end - begin) / 2);
    return 0;
}
*/



/*
3.25
#include "iostream"
#include "vector"

using namespace std;

int main(){
    vector<unsigned> v(11);  // 无符号类型数组。
    auto it = v.begin();
    int i;
    cout << " " << endl;
    while (cin >> i)
        if (i <= 100)
            ++*(it + i / 10);
    cout << " " << v.size() << " " << endl;
    cout << " " << endl;
    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it << " " ;
    }
    cout << endl;

    return 0;
}
*/


/*
3.28
#include "iostream"
#include "string"

using namespace std;

string sa[10];
int ia[10];
int main(){
    string sa2[10];
    int ia2[10];
    for(auto c: sa)
        cout << c << " " ;
    cout << endl;
    for(auto c: ia)
        cout << c << " " ;
    cout << endl;
    for(auto c: sa2)
        cout << c << " " ;
    cout << endl;
    for(auto c: ia2)
        cout << c << " " ;
    cout << endl;
    return 0;
}
*/


/*
(1).数组与 vector 的相似之处是都能存放类型相同的对象，且这些对象本身没有名字，需要通过其所在位置访问。

(2).数组与 vector 的最大不同是，数组的大小固定不变，不能随意向数组中增加额外的元素，虽然在某些情境下运行时性能较好，但是与 vector 相比损失了灵活性。

(3).具体来说，数组的维度在定义时已经确定，如果我们想更改数组的长度，只能创建一个更大的新数组，然后把原数组的所有元素复制到新数组中去。数组也无法像 vector
那样使用 size 函数直接获取数组的维度。如果是字符数组，可以调用 strlen 函数得到字符串的长度；如果是其他数组，
 只能使用 sizeof(array) / sizeof(array[0]) 的方式计算数组的维度。
 */



/*
3.31
#include "iostream"

using namespace std;

int main(){
    const int size = 10;  // 数组维度。
    int a[size];
    for (int i = 0; i <= 9; ++i) {
        a[i] = i;
    }
    for(auto v : a)
        cout << v << " ";
    cout << endl;
    return 0;
}

*/


/*
3.35
#include "iostream"

using namespace std;

int main(){
    const int size = 10;  // 确定维度。
    int a[size], i = 0;
    for (i = 0; i < 10; i++)
        a[i] = i;  // 循环数组元素。
    cout << " " << endl;
    for(auto v : a)
        cout << v << " ";   // 确定数组的类型。
    cout << endl;
    int *p = begin(a);  // p为数组的首元素。
    while (p != end(a)){
        *p = 0;
        p++;  //循环数组，p等于数组末尾的时候结束，且更改数据，每循环都加一。
    }
    cout << " " << endl;
    for (auto v : a)
        cout << v << " ";
    cout << endl;  // 循环输出全部元素。
    return 0;

}
*/


/*
3.36
#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;


int main(){
    const int size = 5;
    int a[size], b[size], i;
    srand((unsigned)time(NULL));

    for ( i = 0; i < size; ++i)
        a[i] = rand() % 10;

    cout << " " << endl;
    int u;
    for(i = 0; i < size; i++)
        if (cin >> u)
            b[size] = u;

    cout << " " << endl;
        for(auto v : a)
            cout << v << " ";
        cout << endl;

    cout << " " << endl;
        for (auto v : b)
            cout << v << " " ;
        cout << " " << endl;

    int *p = begin(a), *q = begin(b);
        while (p != end(a) && q != end(b)) {
            if (*p != *q) {
                cout << " " << endl;
                return -1;
            }
            p++;
            q++;
        }
    cout << " " << endl;

    return 0;
}
*/


/*
3.36 (2)
#include "iostream"
#include "ctime"
#include "vector"
#include "cstdlib"

using namespace std;

int main(){
    const int size = 5;
    int i;
    vector<int> a,b;
    srand((unsigned) time(NULL));

    for (i = 0; i <= size; i++)
        a.push_back(rand() % 10);

    cout << " " << endl;
    int u;
    for (i = 0; i <= size; i++)
        if (cin >> u)
            b.push_back(u);

    cout << " " << endl;
    for(auto v : a)
        cout << v << " ";
    cout << " " << endl;

    cout << " " << endl;
    for(auto v : b)
        cout << v << " ";
    cout << " " << endl;

    auto t1 = a.cbegin(), t2 = b.cbegin();
    while (t1 != a.cend() && t2 != b.cend()) {
        if (*t1 != *t2) {
            cout << "error" << endl;
            return -1;
        }
        t1 ++;
        t2 ++;
    }
    cout << "true" << endl;

    // if(a == b)
    cout << "true" << endl;
    else
    cout << "error" << endl;

    return 0;
}
*/



/*
3.37
#include "iostream"

using namespace std;

int main(){
    const char ca[] = {'h','e','l','l','o','\0'};
    const char *cp = ca;
    while (*cp){
        cout << *cp << endl;
        ++cp;
    }
    return 0;
}
*/


/*
3.39
#include "iostream"
#include "string"

using namespace std;

int main(){
    string string1,string2;
    cout << " " << endl;
    cin >> string1 >> string2;

    if (string1 < string2)
        cout << "string1 < string2" << endl;
    else if (string1 > string2)
        cout << "string1 > string2" << endl;
    else
        cout << "string1 = string2" << endl;

    return 0;
}
*/


/*
3.39(2)
#include "iostream"
#include "cstring"

using namespace std;

int main(){
    char string1[99], string2[99];
    cout << " " << endl;
    cin >> string1 >> string2;

    auto result = strcmp(string1,string2);
    if (result > 0)
        cout << " 1 > 2 " << endl;
    else if (result < 0)
        cout << " 1 < 2 " << endl;
    else
        cout << " 1 = 2 " << endl;

    return 0;

}
*/


/*
3.40
#include "iostream"
#include "cstring"

using namespace std;

int main(){
    char str1[] = " I love ";
    char str2[] = " You ";
    char result[strlen(str1) + strlen(str2) - 1];

    strcpy(result,str1);
    strcat(result,str2);

    cout << " 1 " << str1 << endl;
    cout << " 2 " << str2 << endl;
    cout << " finally " << result << endl;

    return 0;
}
*/


/*
3.41
#include "iostream"
#include "ctime"
#include "vector"
#include "cstdlib"

using namespace std;

int main(){
    const int size = 10;
    int a[size];
    srand((unsigned) time(NULL));

    for(auto &c : a) {
        c = rand() % 100;
        cout << c << " ";
    }
    vector<int> b(begin(a),end(a));
    cout << " " << endl;
    for (auto c : b) {
        cout << c << " ";
    }
    cout << endl;
    return 0;

}
*/


/*
3.42
#include "iostream"
#include "cstdlib"
#include "ctime"
#include "vector"

using namespace std;

int main(){
    const int size = 10;
    vector<int> a;
    srand((unsigned) time(NULL));
    cout << " " << endl;

    for (int i = 0; i != size; ++i) {
         a.push_back(rand() % 100);
         cout << a[i] << " ";
    }
    cout << endl;

    auto item = a.begin();
    cout << endl;

    for(auto &v : a){
        v = *item;
        cout << v << " ";
        item++;
    }
    cout << endl;
    return 0;
}
*/


/*
3.43
#include <iostream>

using namespace std;

int main() {
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    cout << " " << endl;
    for (int (&row)[4] : ia) {     // for语句迭代。
        for (int &col : row)
            cout << col << " ";
        cout << endl;
    }

    cout << "  " << endl;
    for (int i = 0; i != 3; i++) {     // for语句下标运算符。
        for (int j = 0; j != 4; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }

    cout << " " << endl;
    for (int (*p)[4] = ia; p != ia + 3; p++) {   // for语句 指针。
        for (int *q = *p; q != *p + 4; q++)
            cout << *q << " ";
        cout << endl;
    }

    return 0;
}
*/


/*
3.44
#include "iostream"

using namespace std;
using int_array = int[4];

int main(){
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};  //类型别名替代循环控制变量类型。
    cout << " " << endl;
    for(int_array *p = a; p != a + 3; p++){
        for(int *q = *p; q != *p + 4; q++)
            cout << *q <<" ";
        cout << endl;
    }

    return 0;
}
*/


/*
3.45
#include "iostream"

using namespace std;

int main(){
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    cout << " " << endl;
    for(auto p = begin(a); p != end(a); p++){    //
        for (auto q = begin(*p); q != end(*p); q++)
            cout << *q << " ";
        cout << endl;
    }

    cout << " " << endl;
    for(auto &row : a){
        for(auto &col : row)
            cout << col << " ";
        cout << endl;
    }

    cout << " " << endl;
    for(auto i = 0; i != 3; i++){
        for (auto j = 0; j != 4; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}

*/
