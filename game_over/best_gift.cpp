#include <iostream>
#include <vector>
using namespace std;


// repeat until no more numbers
//
int vector_proccessing_for_value(vector<int>path);
void print_iterator(vector<int>value);
const int GIFT_NUMBER = 8;
const int gift_list[GIFT_NUMBER] = { 2, 1, 4, 5, 3, 1, 1, 3 };

int best_gift_for_king(const int gifts[GIFT_NUMBER], const int array_size) {
	//compare last two numbers. 
	//save larger one in array 
	//repeat until no more numbers
	//	compare most recently selected number - 2 and -3 spaces
	//	save larger one in array
	//	save larger one in variable
	//add every thing in array up
	vector<int> selected_gifts = {};
	int i_better_gift_two = 7;
	int i_last = array_size - 1;
	int i_last_two = i_last - 1;
	int i_better_gift = (gifts[i_last] < gifts[i_last_two]) ? i_last_two : i_last;
	int v_given_gift = gifts[i_better_gift];
	selected_gifts.push_back(v_given_gift);
	for (int i = i_better_gift; i_better_gift_two >=2  ; i = i_better_gift_two) {
		i_better_gift_two = (gifts[i - 2] < gifts[i - 3]) ? i - 3 : i - 2;
		int v_given_gift_two = gifts[i_better_gift_two];
		selected_gifts.push_back(v_given_gift_two);
		cout << i_better_gift_two << ' ' <<  v_given_gift_two << endl;
	}
	print_iterator(selected_gifts);
	cout << vector_proccessing_for_value(selected_gifts) << endl;
	return vector_proccessing_for_value(selected_gifts);


}
void calling_best_gift() {
	best_gift_for_king(gift_list, GIFT_NUMBER);
}