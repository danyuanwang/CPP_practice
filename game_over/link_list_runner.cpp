#include"link_list.h"
void link_list_runner() {
	int a[] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9 };
	int b[] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9 };
	link_list llist;
	llist.create_link(a, sizeof(a) / sizeof(int));
	llist.print_link();
	llist.partition(5);
	llist.print_link();

	link_list llist1;
	llist1.create_link(b, sizeof(b) / sizeof(int));

	link_list* pls3 = sum_list(&llist, &llist1);
	pls3->print_link();
	delete pls3;

}