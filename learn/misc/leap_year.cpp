#include <iostream>

int main() {
  
  int year = 0;

  std::cout << "Type a year to check if it's a leap year: " << std::endl;
  std::cin >> year;

  if ((year / 1000) < 1)
    return (0);
  if ((year % 4) == 0)
  {
    if ((year % 100) == 0 && ((year % 400) != 0))
        std::cout << year << " is not a leap year" << std::endl;
    else
        std::cout << year << " is a leap year!" << std::endl;
  } 
  return (0);
}
