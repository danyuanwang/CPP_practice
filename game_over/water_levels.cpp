#include <iostream>
#include <vector>
using namespace std;
const int ARRAY_SIZE = 8;
const int Terrain[ARRAY_SIZE] = { 5,3,4,1,6,4,5,2 };


int water_flow_amount(const int terrain[ARRAY_SIZE], int array_size) {

	//for each hisgram 
	//	loop through all the values to its left
	//		record biggest value
	//		store in a variable l_height
	//  loop through all the values to its right
	//		record biggest value
	//		store in variable r_height
	//loop through all the values.
	//	compare l_height and r_height
	//	subtract height form lowerone
	//	add to variable sum
	//	add up all values

	int total_water_height = 0;

	for (int i = 0; i < array_size; i++){
		int l_height = 0;
		int r_height = 0;

		//starting from current position, loop through the values in the right to find r_height.
		for (int r = i; r < array_size; r++) {
			if (r_height < terrain[r]) {
				r_height = terrain[r];
			}
		}
		//starting from the beginnign ogf the array loop through the values to the current one to find the l_height
		for(int l = 0; l <= i; l++){
			if (l_height < terrain[l]) {
				l_height = terrain[l];
			}
		}
		// compare l_height and r_height to find the shorter one
		int shorter_height = (l_height < r_height) ? l_height : r_height;
		int water_level = shorter_height - terrain[i];
		total_water_height += water_level;
		cout << l_height << ' ' << r_height<< ' ' << i << ' ' << terrain[i] << endl;
	}
	return total_water_height;
	
}
void calculate_water_amount() {
	cout << water_flow_amount(Terrain, ARRAY_SIZE);
}