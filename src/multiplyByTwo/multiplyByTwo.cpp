# include <iostream>

int getUserInput() {
  int userInput = {};
  std::cout << "Enter an integer: ";
  std::cin >> userInput;
  return userInput;
}

void printDouble(int num) {
  std::cout << "Double that number is: " << num * 2 << "\n";
}

int main() {
  int userInput{ getUserInput() };
  printDouble(userInput);
  return 0;
}
