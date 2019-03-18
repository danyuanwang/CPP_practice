#include <iostream>
#include "link_list_iterator.h"
link_list_iterator::link_list_iterator(link_node_ptr phead)
{
	m_pnode = phead;
	std::cout << "link list iterator constructed";
}

link_list_iterator::~link_list_iterator()
{
	std::cout << "link list iterator destroyed";
}

bool link_list_iterator::has_next()
{
	return (m_pnode == nullptr || m_pnode->pnext == nullptr) ? false : true;
}

bool link_list_iterator::step_next()
{
	m_pnode = m_pnode->pnext;
	return m_pnode;
}

int link_list_iterator::get_value()
{
	
	return m_pnode->value;
}