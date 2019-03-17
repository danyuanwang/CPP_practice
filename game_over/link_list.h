#pragma once
#include "link_list_iterator.h"

class link_list
{
	friend link_list* sum_list(link_list* plist1, link_list* plist2);

public:
	link_list();
	~link_list();
	void create_link(int *p1, int size);
	void create_link(const char *s);
	void print_link();
	void partition(int x);
	void prepend_value(int x);
	void append_value(int x);
	void reverse_list();
	void swap_2_nodes();

	link_list_iterator get_iterator();
private:
	link_node_ptr m_header_ptr;
	void destroy_link();
};

