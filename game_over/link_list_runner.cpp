#include<iostream>
#include"link_list.h"
void link_list_runner() {
	int a[] = { 1,2,3,4,5,6,7,8,9};
	int b[] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9 };
	const char *str = " a brown fox jumps over the fence";
	link_list llist;
	llist.create_link(str);
	//llist.create_link(a, sizeof(a) / sizeof(int));
	llist.print_link();
	//llist.reverse_list();
	//llist.swap_2_nodes();
	llist.print_link();
	for (link_list_iterator itor = llist.get_iterator(); itor.has_next(); itor.step_next())
	{
		std::cout << itor.get_value() << " ";
	}

	/* llist.partition(5);
	llist.print_link();

	link_list llist1;
	llist1.create_link(b, sizeof(b) / sizeof(int));

	link_list* pls3 = sum_list(&llist, &llist1);
	pls3->print_link();
	delete pls3;*/

}