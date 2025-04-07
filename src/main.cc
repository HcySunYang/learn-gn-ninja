
// prints out a string of random characters
// to the console

#include <iostream>
#include <string>
#include <random>
#include <ctime>

int main() {
  // Seed the random number generator
  std::srand(static_cast<unsigned int>(std::time(0)));

  // Define the characters to choose from
  const std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

  // Generate a random string of length 10
  std::string random_string;
  for (int i = 0; i < 10; ++i) {
      random_string += characters[std::rand() % characters.size()];
  }

  // Print the random string to the console
  std::cout << "Random string: " << random_string << std::endl;

  return 0;
}