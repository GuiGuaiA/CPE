

/*
4.2
#include "iostream"
#include "ctime"
#include "vector"
#include "cstdlib"

using namespace std;

int main(){
    vector<int> v;
    srand((unsigned) time(NULL));
    cout << " " << endl;
    for(int i = 0; i  != 10; i++){
        v.push_back(rand() % 100);
    }
    cout << " " << endl;
    for(auto c : v){
        cout << c << " ";
    }
    cout << endl;
    cout << " 1 " << *v.begin() << endl;
    cout << " 2 " << *(v.begin()) << endl;
    cout << " 3 " << *v.begin() + 1 << endl;
    cout << " 4 " << *(v.begin()) + 1 << endl;

    return 0;
}
*/


/*
4.10
#include "iostream"

using namespace std;

int main(){
    int num;
    while (cin >> num && num != 42)
        cout << num << " ";
    cout << endl;
    return 0;
}
*/


/*
4.13
#include "iostream"

using namespace std;

int main(){
    int i; double d;
    d = i = 3.5;
    cout << " d= " << d << " i= " << i << endl;
    i = d = 3.5;
    cout << " i= " << i << " d= " << d << endl;

    return 0;
}
*/

/*
4.21
#include "iostream"
#include "ctime"
#include "cstdlib"
#include "vector"

using namespace std;

int main(){
    vector<int> v;
    const int size = 10;
    srand((unsigned) time(NULL));
    for(int i = 0; i != size; i++) {
        v.push_back(rand() % 10);  // 生成小于10以内的正整数。
        cout << v[i] << " ";

    }
    cout << " " << endl;
    for(auto &c : v) {
        c = (c % 2 != 0) ? c*2:c;
    }
    cout << " " << endl;
    for(auto it = v.cbegin(); it != v.cend(); it++ ) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;

}
*/

/*
4.22
#include "iostream"
#include "string"

using namespace std;

int main(){
    string finally_grade;
    int grade;
    cout << " " << endl;

    while (cin >> grade && grade > 0 && grade <= 100){
        finally_grade = ( grade >= 90)  ? "high pass"
                : ( grade > 75) ? "pass"
                : ( grade > 60) ? "low pass " : " fail ";
        cout << " " << finally_grade << " ";
        cout << " " << endl;
    }
    cout << endl;
    return 0;
}
*/

/*
4.22(2)
#include "iostream"
#include "string"

using namespace std;

int main() {
    string finally_grade;
    int grade;
    cout << " " << endl;

    while (cin >> grade && grade > 0 && grade <= 100) {
        if (grade > 90)
            finally_grade = "high pass";
        else if (grade > 75)
            finally_grade = "pass";
        else if (grade > 69)
            finally_grade = "low pass";
        else
            finally_grade = "fail";
        cout << " " << finally_grade << " ";
        cout << " " << endl;
    }
    cout << endl;
    return 0;
}
*/

/*
4.28
#include <iostream>

using namespace std;

int main() {
    cout << " name \t" << " spaces " << endl;
    cout << "bool\t\t" << sizeof (bool) << endl;
    cout << "char\t\t" << sizeof (char) << endl;
    cout << "wchar_t\t\t" << sizeof (wchar_t) << endl;
    cout << "char16_t\t" << sizeof (char16_t) << endl;
    cout << "char32_t\t" << sizeof (char32_t) << endl;
    cout << "short\t\t" << sizeof (short) << endl;
    cout << "int\t\t\t" << sizeof (int) << endl;
    cout << "long\t\t" << sizeof (long) << endl;
    cout << "long long\t" << sizeof (long long) << endl;
    cout << "float\t\t" << sizeof (float) << endl;
    cout << "double\t\t" << sizeof (double) << endl;
    cout << "long double\t" << sizeof (long double) << endl;

    return 0;
}
*/


/*
4.29
#include "iostream"

using namespace std;

int main(){
    int x[10];
    int *p = x;
    cout << sizeof(x) << "\t" << sizeof (*x) << "\n";
    cout << sizeof(x) / sizeof (*x) << endl;
    cout << sizeof(p) << '\t' << sizeof (*p) << '\n';
    cout << sizeof(p) / sizeof (*p) << endl;
    return 0;
}
*/


/*
4.33
#include "iostream"

using namespace std;

int main(){
    int x = 10, y = 20;
    bool someVales = true;
    someVales ? ++x,++y : --x,--y;
    cout << x << endl;
    cout << y << endl;
    cout << someVales << endl;

    x = 10, y = 20;
    someVales = false;
    someVales ? ++x,++y : --x,--y;
    cout << x << endl;
    cout << y << endl;
    cout << someVales << endl;

    return 0;
}
*/



