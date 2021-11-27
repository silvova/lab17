#ifndef _func_h_
#define _func_h_

#include <iostream>

template <typename T>
class Mass {
private:
	T* mass;
	int size;
	int capacity;
public:
	Mass() {
		mass = new T[1];
		size = 0;
		capacity = 1;
	}

	void resize() {
		T* mass2 = new T[capacity + 1];
		for (int i = 0; i <= size; i++) {
			mass2[i] = mass[i];
		}
		delete[] mass;
		mass = mass2;
		capacity++;
	}

	void push_back(T input) {
		if (size < 100) {
			if (size != 0) {
				resize();
				mass[size] = input;
				size++;
			}
			else {
				mass[size] = input;
				size++;
			}
		}
		else {
			throw "Error: array overflow!";
		}
	}

	friend std::ostream& operator<< (std::ostream& os, const Mass& A) {
		for (int i = 0; i < A.size; i++) {
			os << A.mass[i] << '\n';
		}
		return os;
	}

	~Mass() { delete[] mass; }
};

#endif