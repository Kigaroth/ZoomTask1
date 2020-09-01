#include <iostream>
#include <string>
#include <conio.h>

int age;
int a = 20;

int main() {
	std::cout << "How old are you?";
	std::cin >> age;
	std::cout << "Your age is: \n" << age; << "\n"

		if (age >= a) {
			std::cout << "You are an adult.\n";
		}
		else {
			std::cout << "You are a teenager.\n";
		}
}