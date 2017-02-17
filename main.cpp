//Create a function that determines if a string is a palindrome

#include <string>
#include <iostream>
#include <algorithm>

bool isPalindrome(std::string input) {
  std::string reverse = "";
  for_each(input.rbegin(), input.rend(), [&](char element) { reverse += element; });
  return input == reverse;
}

int main() {
  std::string input = "bab";
  std::cout << isPalindrome(input) << std::endl;
  return 0;
}