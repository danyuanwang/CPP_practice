#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

const int R = 6;
const int C = 6;
const int MAP[R][C] = {
	{0,01,02,03,04,05},
	{-1,11,12,5,14,15},
	{20,21,-1,23,24,25},
	{30,31,32,33,-1,35},
	{40,10,42,43,44,45},
	{50,51,52,1,54,55}
};


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
		cout<<*iter<<" ";
	}
	cout << endl;
}


vector<int> collect_most_treasure(const int map[R][C], int n_r, int m_c, int row, int column) {
	int right_value = 0;
	int down_value = 0;
	vector<int> return_value;
	vector<int> right_path;
	vector<int> down_path;
	if (column < m_c - 1 && map[row][column + 1] != -1) {
		right_path = collect_most_treasure(map, n_r, m_c, row, column + 1);
		right_value = map[row][column] + vector_proccessing_for_value(right_path);
		

	}
	if (row < n_r - 1 && map[row + 1][column] != -1) {
		down_path = collect_most_treasure(map, n_r, m_c, row + 1, column);
		down_value = map[row][column] + vector_proccessing_for_value(down_path);
		
	}
	if (right_value > down_value) {
		return_value = right_path;
		return_value.insert(return_value.begin(), map[row][column]);
	}
	else {
		return_value = down_path;
		return_value.insert(return_value.begin(), map[row][column]);
	}
	print_iterator(return_value);
	return return_value;
}

void miner_puzzle() {
	vector<int> return_value_of_cmt;
	return_value_of_cmt = collect_most_treasure(MAP, R, C, 0, 0);
	print_iterator(return_value_of_cmt);
}