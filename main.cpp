//Create a function that determines if a string is a palindrome

#include <string>
#include <iostream>
#include <numeric>

std::string add(std::string &reverse, char element) {
  return reverse + element;
}

bool isPalindrome(std::string input) {
  std::string reverse = "";
  return input == std::accumulate(input.rbegin(), input.rend(), reverse, add);
}

int main() {
  std::string input = "bab";
  std::cout << isPalindrome(input) << std::endl;
  std::string input2 = "alma";
  std::cout << isPalindrome(input2) << std::endl;
  return 0;
}