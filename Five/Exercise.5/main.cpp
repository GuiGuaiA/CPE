

/*
5.3
while (val <= 10) {
       sum += val;
       ++val;
}

 while( v <= 10 )
  sun += v, ++v;
*/




/*
5.5
#include "iostream"
#include "string"
#include "vector"

using namespace std;

int main() {
    int grade;
    cout << " " << endl;
    cin >> grade;
    if (grade < 0 || grade > 100) {
        cout << " NO " << endl;
        return -1;
    }
    if (grade == 100) {
        cout << "  " << "A++" << endl;
        return 0;
    }

    const vector<string> scores = {"F", "D", "C", "B", "A"};
    string finallgrade;
    if (grade < 60)
        finallgrade = scores[0];
        else{
            finallgrade = scores[(grade - 50) / 10];
            if (grade != 100)
                if (grade % 10 > 7)
                    finallgrade += '+';
                else if (grade % 10 < 3)
                    finallgrade += '-';
    }
    cout << " " << finallgrade << endl;

    return 0;

}
*/



/*
5.6
#include "iostream"
#include "string"
#include "vector"

using namespace std;

int main() {
    int grade;
    cout << " " << endl;
    cin >> grade;
    if (grade < 0 || grade > 100) {
        cout << " NO " << endl;
        return -1;
    }
    if (grade == 100) {
        cout << "  " << "A++" << endl;
        return 0;
    }

    const vector<string> scores = {"F", "D", "C", "B", "A"};
    string finallgrade;
    if (grade < 60)
        finallgrade = scores[0];
    else {
        finallgrade = scores[(grade - 50) / 10];
        if (grade != 100)
            finallgrade += grade % 10 > 7 ? "+" : grade % 10 < 3 ? "-" : " ";
    }
    cout << " " << finallgrade << endl;
    return 0;
}
*/


/*
5.9
#include "iostream"

using namespace std;

int main(){
    unsigned int num = 0;
    char m;
    cout << " " << endl;
    while (cin >> m && m != 'n') {
        if (m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u')
            num++;
    }
    cout << " " << num << " " << endl;
    return 0;
}
*/


/*

#include "iostream"

using namespace std;

int main(){
    unsigned int num = 0;
    char m;
    cout << " " << endl;
    while (cin >> m && m != 'n') {
        if (m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u' ||
        m == 'A' || m == 'E' || m == 'I' || m == 'O' || m == 'U' )
            num++;
    }
    cout << " " << num << " " << endl;
    return 0;
}
*/


/*
5.10
#include "iostream"

using namespace std;

int main(){
    unsigned int aNum = 0,eNum = 0,iNum = 0,oNum = 0,uNum = 0;
    char m;
    cout << " " << endl;
    while (cin >> m && m != 'Q'){
        switch (m) {
            case 'a':
            case 'A':
                aNum++;
                break;
            case 'e':
            case 'E':
                eNum++;
                break;
            case 'i':
            case 'I':
                iNum++;
                break;
            case 'o':
            case 'O':
                oNum++;
                break;
            case 'u':
            case 'U':
                uNum++;
                break;
        }
    }
    cout << " " << aNum << endl;
    cout << " " << eNum << endl;
    cout << " " << iNum << endl;
    cout << " " << oNum << endl;
    cout << " " << uNum << endl;

    return 0;
}
*/

/*
5.11
#include "iostream"

using namespace std;

int main(){
    unsigned int aNum = 0,eNum = 0,iNum = 0,oNum = 0,uNum = 0,sNum = 0,tNum = 0,nNum = 0;
    char m;
    cout << " " << endl;
    while (cin.get(m) && m != 'Q'){
        switch (m) {
            case 'a':
            case 'A':
                aNum++;
                break;
            case 'e':
            case 'E':
                eNum++;
                break;
            case 'i':
            case 'I':
                iNum++;
                break;
            case 'o':
            case 'O':
                oNum++;
                break;
            case 'u':
            case 'U':
                uNum++;
                break;
            case ' ':
                sNum++;
                break;
            case '\t':
                tNum++;
                break;
            case '\n':
                nNum++;
                break;

        }
    }
    cout << " " << aNum << endl;
    cout << " " << eNum << endl;
    cout << " " << iNum << endl;
    cout << " " << oNum << endl;
    cout << " " << uNum << endl;
    cout << " " << sNum << endl;
    cout << " " << tNum << endl;
    cout << " " << nNum << endl;

    return 0;
}
*/


/*
5.12
#include "iostream"

using namespace std;

int main(){
    unsigned int ffnum = 0,flnum = 0,finum = 0;
    char m,prech = '\0';
    cout << " " << endl;
    while (cin >> m && m != 'Q') {
        if (prech == 'f'){
            switch (m) {
                case 'f':
                    ffnum++;
                    break;
                case 'l':
                    flnum++;
                    break;
                case 'i':
                    finum++;
                    break;
            }
        }
        prech = m;
    }
    cout << " " << ffnum << endl;
    cout << " " << flnum << endl;
    cout << " " << finum << endl;
    return 0;
}

*/



/*
5.14（）
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 定义 3 个字符串变量，分别表示：
    // 当前操作的字符串、前一个字符串、当前出现次数最多的字符串
    string currString, preString = "", maxString;
    // 定义 2 个整型变量，分别表示：
    // 当前连续出现的字符串数量、当前出现次数最多的字符串数量
    int currCnt = 1, maxCnt = 0;
    while (cin >> currString && currString != "Q") { // 检查每个字符串
        // 如果当前字符串与前一个字符串一致，更新状态
        if (currString == preString) {
            ++currCnt;
            if (currCnt > maxCnt) {
                maxCnt = currCnt;
                maxString = currString;
            }
        } else {
            // 如果当前字符串与前一个字符串不一致，重置 currCnt
            currCnt = 1;
        }
        // 更新 preString 以便于下一次循环使用
        preString = currString;
    }
    if (maxCnt > 1)
        cout << "出现最多的字符串是：" << maxString
             << "，次数是：" << maxCnt << endl;
    else
        cout << "每个字符串都只出现了一次" << endl;
    return 0;
}
*/


/*
5.16
char m;
while( cin >> m);{

}

for (; cin >> m ;){

}
*/


/*
int num = 0,i;
for(i = 0; i <= 10; i++){
    num += i;
}


int i = 0,num = 0;
while( i <= 10){
    num += i;
    i++;
}
*/


/*
5.17
#include "iostream"
#include "vector"

using namespace std;

int main(){
    vector<int> v1,v2;
    char m;
    cout << " ";
    while (cin >> m && m != 'Q')
        v1.push_back(m);
    cout << " ";
    while (cin >> m && m != 'Q')
        v2.push_back(m);

    auto it1 = v1.cbegin();
    auto it2 = v2.cbegin();

    while (it1 != v1.cend() && it2 != v2.cend()) {
        if (*it1 != *it2) {
            cout << " v1 and v2 no " << endl;
            break;
        }
        it1++;
        it2++;
    }
    if (it1 == v1.cend())
        cout << " v1 is v2 f " << endl;
    if (it2 == v2.cend())
        cout << " v2 is v1 f " << endl;

    return 0;

}
*/



/*
5.19
#include "iostream"
#include "string"

using namespace std;

int main() {
    do {
    string s1, s2;
    cout << " " << endl;
    cin >> s1 >> s2;
    if (s1.size() > s2.size())
        cout << " " << s2 << endl;
    else if (s1.size() < s2.size())
        cout << " " << s1 << endl;
    else
        cout << " s1 = s2 " << endl;
   } while (cin);
       return 0;
}
*/

/*
5.20
#include "iostream"
#include "string"

using namespace std;

int main() {
    string s1, s2;
    bool bl = true;
    cout << " " << endl;
    while (cin >> s1 && s1 != "Q") {
        if (s1 == s2){
            bl = false;
        cout << " same " << s1 << endl;
        break;
    }
        s2 = s1;
   }
   if (bl)
       cout << " no " << endl;
   return 0;
}
*/



/*
5.21
#include "iostream"
#include "string"

using namespace std;

int main() {
    string s1, s2;
    bool bl = true;
    cout << " " << endl;
    while (cin >> s1 && s1 != "Q") {
        if (!isupper(s1[0]))
            continue;
        if (s1 == s2){
            bl = false;
            cout << " same " << s1 << endl;
            break;
        }
        s2 = s1;
    }
    if (bl)
        cout << " no " << endl;
    return 0;
}
*/

/*
5.22
begin:
  int size = get_size();
  if ( size <= 0){
      goto begin;
  }


int size;
  do{
      size = gei_size()
  } while(size <= 0)
*/


/*
5.23
#include "iostream"

using namespace std;

int main(){
    int v1,v2;
    cout << " " << endl;
    cin >> v1 >> v2;
    if (v2 == 0) {
        cout << " no " << endl;
        return -1;
    }
    cout << " " << v1 / v2 << endl;
    return 0;
}
*/



/*
5.24
#include "iostream"
#include <stdexcept>

using namespace std;

int main(){
    int v1,v2;
    cout << " " << endl;
    cin >> v1 >> v2;
    if (v2 == 0) {
        throw runtime_error("0");
    }
    cout << " " << v1 / v2 << endl;
    return 0;
}
*/


/*
5.25
#include "iostream"
#include "stdexcept"

using namespace std;

int main(){
    int v1,v2;
    cout << " " << endl;
    while (cin >> v1 >> v2){
        try{
            if (v1 == 0){
                throw runtime_error("0");
            }
            cout << " " << v1/v2 << endl;
        }catch (runtime_error err){
            cout << err.what() << endl;
            cout << " ";
            char m;
            cin >> m;
            if (!m && m == 'n')
                break;
        }
    }
    return 0;
}*/
