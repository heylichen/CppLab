//
// Created by lc on 2022/6/2.
//
#include "ValuePtr.h"
#include <iostream>
using std::cout;
using std::endl;

ValuePtr gen_value_ptr(){
    ValuePtr vp1("Hello, World");
    return vp1;
}

int main() {
    ValuePtr vp1 = gen_value_ptr();
    cout <<  vp1.get_ps() << endl;
}