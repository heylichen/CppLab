//
// Created by lc on 2022/6/2.
//

#ifndef CPPLAB_VALUEPTR_H
#define CPPLAB_VALUEPTR_H

#include <string>

class PointerPtr {
private:
    std::string *ps;
    int i;
    std::size_t *use;
public:
    PointerPtr(const std::string &s = std::string()) :
            ps(new std::string(s)), i(0), use(new std::size_t(1)) {}

    PointerPtr(const PointerPtr &vp) :
            ps(vp.ps), i(vp.i), use(vp.use) { ++*use; }

    PointerPtr &operator=(const PointerPtr &vp);

    ~PointerPtr();

    const std::string &get_ps() {
        return *ps;
    }

    int get_use(){
        return *use;
    }
};

PointerPtr::~PointerPtr() {
    if ((--*use) == 0) {
        delete ps;
        delete use;
    }
}

PointerPtr &PointerPtr::operator=(const PointerPtr &vp) {
    (*vp.use)++;
    if (--*use == 0) {
        delete ps;
        delete use;
    }
    use = vp.use;
    ps = vp.ps;
    i = vp.i;
    return *this;
}

#endif //CPPLAB_VALUEPTR_H
