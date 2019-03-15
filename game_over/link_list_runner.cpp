#include"link_list.h"
void link_list_runner() {
	int a[] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9 };
	link_list llist;
	llist.create_link(a, sizeof(a) / sizeof(int));
	llist.print_link();
}