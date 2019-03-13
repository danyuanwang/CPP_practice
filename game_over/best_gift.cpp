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
	for (int i = i_better_gift; i_better_gift_two >= 2; i = i_better_gift_two) {
		i_better_gift_two = (gifts[i - 2] < gifts[i - 3]) ? i - 3 : i - 2;
		int v_given_gift_two = gifts[i_better_gift_two];
		selected_gifts.push_back(v_given_gift_two);
		cout << i_better_gift_two << ' ' << v_given_gift_two << endl;
	}
	print_iterator(selected_gifts);
	return vector_proccessing_for_value(selected_gifts);


}

int best_gift_for_king2(const int gifts[], const int array_size, const int start) {
	int i = array_size - 1;
	int withSum = 0;
	int withoutSum = 0;
	int sum = 0;
	if (start > array_size - 1) {
		return 0;
	}
	if (start == array_size - 1) {
		return gifts[start];
	}
	if (start == array_size - 2)
	{
		return gifts[i - 1] > gifts[i] ? gifts[i - 1] : gifts[i];
	}

	withSum = gifts[i];
	while (--i >= start)
	{
		withSum = gifts[i] + best_gift_for_king2(gifts, array_size, i + 2);
		withoutSum = best_gift_for_king2(gifts, array_size, i + 1);
		sum = (withSum > withoutSum) ? withSum : withoutSum;
		cout << i << ' ' << gifts[i] << ' ' << withSum << ' ' << withoutSum << ' ' << sum << endl;
	}

	return sum;

}

int best_gift_for_king3(const int gifts[], const int array_size) {
	int withSum = 0;
	int withoutSum = 0;
	int sum = 0;
	if (array_size == 0) {
		return 0;
	}
	if (array_size == 1) {
		return gifts[array_size];
	}

	if (array_size == 2) {
		return gifts[array_size - 1] > gifts[array_size - 2] ? gifts[array_size - 1] : gifts[array_size - 2];
	}

	int i = array_size - 3;
	int right_1 = gifts[i + 1];
	int right_2 = gifts[i + 2];
	while (i >= 0)
	{
		withSum = gifts[i] + right_2;
		withoutSum = right_1 > right_2 ? right_1 : right_2;
		cout << i << ' ' << gifts[i] << ' ' << withSum << ' ' << withoutSum << endl;
		i--;
		right_1 = withSum;
		right_2 = withoutSum;
	}

	sum = (withSum > withoutSum) ? withSum : withoutSum;

	return sum;

}

void calling_best_gift() {
	cout << best_gift_for_king(gift_list, GIFT_NUMBER) << endl;
	cout << best_gift_for_king2(gift_list, GIFT_NUMBER, 0) << endl;
	cout << best_gift_for_king3(gift_list, GIFT_NUMBER) << endl;
}