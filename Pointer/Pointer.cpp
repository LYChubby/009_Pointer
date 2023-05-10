#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();          // Deklarasi Method
};

void mahasiswa::showNim() {    // Implementasi Method diluar Method
	cout << "No Induk = " << nim << endl;
}