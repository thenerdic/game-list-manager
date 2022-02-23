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
  std::vector<std::string>::const_iterator iter;
  std::string game_title;
  char input{}; // get player input

  // main menu
  std::cout << "\t\tGame Title Manager\n\n"; 
  std::cout << "(A) Add a game title\n";
  std::cout << "(R) Remove a game title\n";
  std::cout << "(L) List all game titles\n";
  std::cout << "(Q) Quit the program\n";

  // main loop
  while (input != 'Q')
  {
    std::cout << "\nInput: ";
    std::cin >> input;
    input = std::toupper(input);

    if (input == 'A')
    {
      std::cout << "What game would you like to add?: ";
      std::getline(std::cin >> std::ws, game_title);
      games.push_back(game_title);

      std::cout << "\033[H\033[2J\033[3J";
      std::cout << "\nYour games:\n";
      for (iter = games.begin(); iter < games.end(); iter++)
      {
        std::cout << *iter << std::endl;
      }
    }
    else if (input == 'R')
    {
      std::cout << "What game would you like to remove?: ";
      std::getline(std::cin >> std::ws, game_title);
      games.erase(std::remove(games.begin(), games.end(), game_title), games.end());

      std::cout << "\033[H\033[2J\033[3J";
      std::cout << "\nYour games:\n";
      for (iter = games.begin(); iter < games.end(); iter++)
      {
        std::cout << *iter << std::endl;
      }
    }
    else if (input == 'L')
    {
      std::cout << "\033[H\033[2J\033[3J";
      std::cout << "\nYour games:\n";
      for (iter = games.begin(); iter < games.end(); iter++)
      {
        std::cout << *iter << std::endl;
      }
    }
    else if (input == 'Q')
    {
      break;
    }
    else {
      std::cout << "Invalid Option!\n";
    }
  }

  return 0;
}
