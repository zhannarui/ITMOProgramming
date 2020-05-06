#pragma once

#include <iterator>

template<typename iter, typename object>
bool any_of(const iter &begin, const iter &end, bool (&func)(object)) {
    for (auto it = begin; it != end; it = std::next(it)) {
        if (func(*it)) {
            return true;
        }
    }
    return false;
}

template<typename iter, typename object>
bool one_of(const iter &begin, const iter &end, bool (&func)(object)) {
    int count = 0;
    for (auto it = begin; it != end; it = std::next(it)) {
        if (func(*it)) {
            count++;
        }
    }
    return count == 1;
}

template<typename iter, typename object>
bool is_palindrome(const iter &begin, const iter &end, bool (&func)(object)) {
    for (auto itLeft = begin, itRight = std::prev(end); itLeft != end, itRight != begin; itLeft = std::next(itLeft), itRight = std::prev(itRight))
        if (func(*itLeft) != func(*itRight)) {
            return false;
        }
    return true;
}
