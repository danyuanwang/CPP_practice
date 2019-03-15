#include <iostream>
#include <vector>
using namespace std;


int vector_proccessing_for_value(vector<int>path) {
	vector<int> ::const_iterator iter;
	int sum = 0;
	for (iter = path.begin(); iter != path.end(); ++iter) {
		sum = sum + *iter;
	}
	return sum;
}
void print_iterator(vector<int>value) {
	vector<int> ::const_iterator iter;
	for (iter = value.begin(); iter != value.end(); ++iter) {
		cout << *iter << " ";
	}
	cout << endl;
}