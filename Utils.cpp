#include <tuple>

template<typename T>
std::tuple<T, T> swap_values(T a, T b) {
    return std::make_tuple(b, a);
}

template<typename T>
T max_value(T a, T b) {
    return (a > b) ? a : b;
}