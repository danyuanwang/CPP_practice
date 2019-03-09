#include "pch.h"
#include <iostream>
using namespace std;

const int R = 6;
const int C = 6;
const int MAP[R][C] = {
	{0,0,0,0,0,0},
	{-1,0,0,5,0,0},
	{0,0,-1,0,0,0},
	{0,0,0,0,-1,0},
	{0,10,0,0,0,0},
	{0,0,0,1,0,0}
};


 int collect_most_treasure(const int map[R][C], int n_r, int m_c, int row, int column) {
	int right_value = 0;
	int down_value = 0;
	if (column < m_c - 1 && map[row][column + 1] != -1) {
		right_value = map[row][column] + collect_most_treasure(map, n_r, m_c, row, column + 1);

	}
	if (row < n_r - 1 && map[row + 1][column] != -1) {
		down_value = map[row][column] + collect_most_treasure(map, n_r, m_c, row + 1, column);

	}
	return right_value > down_value ? right_value : down_value;
}
void miner_puzzle() {
	int return_value_of_cmt = 0;
	return_value_of_cmt = collect_most_treasure(MAP, R, C, 0, 0);
	cout << return_value_of_cmt << endl;
}