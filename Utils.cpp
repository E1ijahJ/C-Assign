#include <tuple>
/// @brief  This right here takes 2 values and then swaps the vaules and retuns it as a tuple 
/// @tparam T 
/// @param a 
/// @param b 
/// @return 
template<typename T>
std::tuple<T, T> swap_values(T a, T b) {
    return std::make_tuple(b, a);
}
/// @brief This right here returns the larger of the two values that were given to in the function 
/// @tparam T 
/// @param a 
/// @param b 
/// @return 
template<typename T>
T max_value(T a, T b) {
    return (a > b) ? a : b;
}