# include <iostream>

void secondaryFileFunction(int input);

int main() {
	std::cout << "starting main()\n";
	secondaryFileFunction(1);
	std::cout << "ending main()\n";
	return 0;
}
