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

int main() {
	mahasiswa mhs{ 1 };
	mhs.showNim();				// Member Access Operator

	mahasiswa& ref = mhs;		// Pointer Reference refMhs
	ref.nim = 2;
	mhs.showNim();

	mahasiswa* pMhs = &mhs;		// Pointer Deference pMhs
	pMhs->nim = 3;				// Arrow Operator
	mhs.showNim();
	system("Pause");
	return 0;
}