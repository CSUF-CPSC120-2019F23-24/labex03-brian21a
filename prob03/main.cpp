// This program calculates a person's height in feet (') and inches (").

#include<iostream>
int main()
{
int feet;
int inches;
int remainder;



std::cout << "What is your height in inches?";
std::cin >> inches;
feet = inches/12;
remainder = inches%12;
std::cout << "That person is " << feet << "\'" << remainder << "\"" << inches << "\"";
  return 0;
}
