//
// Created by lc on 2022/6/2.
//
#include "PointerPtr.h"
#include <iostream>
using std::cout;
using std::endl;

PointerPtr gen_value_ptr(){
    PointerPtr vp1("Hello, World");
    return vp1;
}

int main() {
    PointerPtr vp1 = gen_value_ptr();
    cout << vp1.get_ps() << "\t use " << vp1.get_use() << endl;
}