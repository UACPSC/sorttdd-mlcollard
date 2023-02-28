/*
    sort_t.cpp

    Test program for sort functions
*/

#include "sort.hpp"
#include <cassert>
#include <vector>

int main() {

    {
        std::vector<int> v{ 1 };

        assert(!v.empty());
        assert(v.size() == 1);
        assert(v[0] == 1);
        sort(v);
        assert(!v.empty());
        assert(v.size() == 1);
        assert(v[0] == 1);
    }

    return 0;
}
