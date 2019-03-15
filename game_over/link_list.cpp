#include <iostream>
#include <vector>
#include"link_list.h"
using namespace std;

link_list::link_list() :
	m_header_ptr(nullptr)
{
}

link_list::~link_list()
{
}

void link_list::create_link(int a[], int size) {
	destroy_link();

	for (int i = size - 1; i >= 0; i--) {
		link_node_ptr p = new link_node;
		p->value = a[i];
		p->pnext = m_header_ptr;
		m_header_ptr = p;
	}
}

void link_list::destroy_link() {
	link_node_ptr p = m_header_ptr;
	while (p != nullptr)
	{
		p = p->pnext;
		delete m_header_ptr;
		m_header_ptr = p;
	}
}

void link_list::print_link() {
	link_node_ptr p = m_header_ptr;
	while (p != nullptr)
	{
		cout << p->value;
		if (p->pnext != nullptr) {
			cout << " -> ";
		}
		p = p->pnext;
	}
	cout << endl;
}

