#include <iostream>

using std::cout, std::endl;

int foo() {
	int a = 1;
	int b = 2;
	return a + b;
}

int main() {
	int ANS = 42;
	auto checkAnswer = [=](int toCheck) { return toCheck == ANS; };
}
