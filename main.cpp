/*
  Exercise: Create a program using vectors and iterators that allows users to maintain a list of game titles.
  The program should allow users to list, create, and remove game titles.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

int main()
{
  std::vector<std::string> games; // vector to store game titles
  char input; // get player input

  // main menu
  std::cout << "\t\tGame Title Manager\n\n"; 
  std::cout << "(A)Add a game title\n";
  std::cout << "(R)Remove a game title\n";
  std::cout << "(L)List all game titles\n";
  std::cout << "\nInput: ";
  std::cin >> input;
  input = std::toupper(input);
}