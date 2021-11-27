#include "func.h"
using namespace std;

int main() {
	Mass<int> INT;
	try {
		for (int i = 1; i < 101; i++) {
			INT.push_back(i);
		}
		cout << INT << '\n';
		INT.push_back(101);
	}
	catch (const char* str) {
		cout << str << '\n';
	}
	
	Mass<char> CHAR;
	try {
		for (int i = 0; i < 5; i++) {
			CHAR.push_back('a');
		}
		CHAR.push_back('b');
		cout << CHAR << '\n';
	}
	catch (const char* str) {
		cout << str << '\n';
	}

	return 0;
}