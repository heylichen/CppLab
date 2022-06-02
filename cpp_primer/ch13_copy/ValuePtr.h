//
// Created by lc on 2022/6/2.
//

#ifndef CPPLAB_VALUEPTR_H
#define CPPLAB_VALUEPTR_H

#include <string>

class ValuePtr {
private:
    std::string *ps;
    int i;
public:
    ValuePtr(const std::string &s = std::string()) :
            ps(new std::string(s)), i(0) {}

    ValuePtr(const ValuePtr &vp) :
            ps(new std::string(*vp.ps)), i(vp.i) {}

    ValuePtr &operator=(const ValuePtr &vp);

    ~ValuePtr() { delete ps; }

    const std::string & get_ps() {
        return *ps;
    }
};

ValuePtr &ValuePtr::operator=(const ValuePtr &vp) {
    auto newp = new std::string(*vp.ps);
    delete ps;
    i = vp.i;
    ps = newp;
    return *this;
}

#endif //CPPLAB_VALUEPTR_H
