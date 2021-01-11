#include <iostream>
using namespace std;

int Fibonacci(int a) {
	int result = 1;
	int prev = 0;
	int temp = 0;
	for (int i = 0; i < a ; i++) {
		result += prev;
		prev = temp;
		temp = result;
	}
	return result;
}

int FibonacciRecursion(int a) {
	if (a <= 2) return 1;
	else return FibonacciRecursion(a - 2) + FibonacciRecursion(a - 1);
}


int main() {
	while (true) {
		int a = 0;
		cin >> a;
		cout << Fibonacci(a) << endl;
		cout << FibonacciRecursion(a) << endl;
	}
}