#include <iostream>
#include <vector>
using namespace std;

int pointer_reference(int *pa) {
	while (*pa != 0){
	cout << "a = " << *pa << endl;
	pa++;
	}
	//*pa = 100;
	return 0;
}
void pointer_reference_call() {
	int c[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 , 0};
	int b = 80;
	pointer_reference(c);
	cout << "b = " << b << endl;
}