// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{
  int inches, height1, height2;

  //get user input
  std::cout << "Please enter the person's height in inches:" << '\n';
  std::cin >> inches;

  //convert
  height1 = inches / 12;
  height2 = inches % 12;

  std::cout << "That person is " << "" << height1 << "'" << height2 << "\"" <<'\n';
  return 0;
}
