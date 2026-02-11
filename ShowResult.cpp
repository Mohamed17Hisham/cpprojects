#include <iostream>
#include<string>
using namespace std;
enum encheck {pass,fail};
int readResult() {
	int result;
	cout << "enter your result: ";
	cin >> result;
	return result;
}

encheck check(int n) {
	if (n >= 50)
		return encheck::pass;
	else
		return encheck::fail;

}

void printResult(int n) {
	if (check(n) == pass)
		cout << "pass";
	else
		cout << "fail";
}

int main() {
	printResult(readResult());
}
