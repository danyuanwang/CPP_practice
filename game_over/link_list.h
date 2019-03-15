#pragma once
typedef struct link_node {
	int value;
	link_node * pnext;
}*link_node_ptr;

class link_list
{
public:
	link_list();
	~link_list();
	void create_link(int a[], int size);
	void print_link();

private:
	link_node_ptr m_header_ptr;
	void destroy_link();
};

