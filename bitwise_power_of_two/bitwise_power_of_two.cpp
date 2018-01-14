#include "./bitwise_power_of_two.hpp"
bool bitwise_power_of_two(unsigned int number) {
  if (number == 1 || number == 0) {
    return false;
  }

  /**
   * Example:
   * 32 is 100000
   * 31 is 011111
   *
   * 100000
   *    &
   * 011111
   * ______
   * 000000
   */
  return (number & (number - 1)) == 0;
}
