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



    return 0;
}
