//Create a function that determines if a string is a palindrome

#include <string>
#include <iostream>
#include <numeric>
#include <algorithm>

std::string add(std::string &reverse, char element) {
  return reverse + element;
}

std::string removeSpaces(std::string& input) {
  std::string without = "";
  for (int i = 0; i < input.length(); i++) {
    if (input[i] != ' ') {
      without += input[i];
    }
  }
  return without;
}

bool isPalindrome(std::string input) {
  std::string without = removeSpaces(input);
  std::string reverse = "";
  return without == std::accumulate(without.rbegin(), without.rend(), reverse, add);
}

int main() {
  std::string input = "géza kék az ég";
  std::cout << isPalindrome(input) << std::endl;
  std::string input2 = "alma";
  std::cout << isPalindrome(input2) << std::endl;
  return 0;
}