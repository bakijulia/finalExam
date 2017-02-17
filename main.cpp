//Create a function that determines if a string is a palindrome

#include <string>
#include <iostream>

bool isPalindrome(std::string input) {
  std::string reverse = "";
  for (int i = input.length() - 1; i >= 0; i--) {
    reverse += input[i];
  }
  return input == reverse;
}

int main() {
  std::string input = "bab";
  std::cout << isPalindrome(input) << std::endl;
  return 0;
}