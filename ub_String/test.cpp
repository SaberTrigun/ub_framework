#include "String.h"
#include <iostream>
using namespace UB;
using namespace std;

int main(){
    String str1 = "Qwertyice";
    String str2 = "Qwerty";
    String str3;
    str3 = str1 + str2;
    cout << str3.data() << '\n';

    for(int i = 0; i < 15; ++i)
        cout << str3[i];

    cout << '\n' << String::length(str3) << '\n';

    return 0;
}
