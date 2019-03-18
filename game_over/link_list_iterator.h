#pragma once

typedef struct link_node {
	int value;
	link_node * pnext;
}*link_node_ptr;

class link_list_iterator
{
public:

	link_list_iterator(link_node_ptr phead);
	~link_list_iterator();

	bool has_next();
	bool step_next();
	int get_value();

private:
	link_node_ptr m_pnode;
};

