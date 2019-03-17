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
	destroy_link();
}

void link_list::create_link(int *p1, int size) {
	destroy_link();

	for (int i = size - 1; i >= 0; i--) {
		link_node_ptr p = new link_node;
		p->value = p1[i];
		p->pnext = m_header_ptr;
		m_header_ptr = p;
	}
}
void link_list::create_link(const char *str) {
	destroy_link();

	const char *tp = str;
	link_node_ptr t = m_header_ptr;
	
	//for (int i = 0; str[i] != 0; i++)
	while (*tp++ != 0)
	{
		link_node_ptr n = new link_node;
		n->value = *tp;
		n->pnext = nullptr;
		if (t == nullptr) {
			m_header_ptr = n;
			t = n;
		}
		else {
			
			t->pnext = n;
			t = n;
		}
		
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

void link_list::prepend_value(int x)
{
	link_node_ptr p = new link_node();
	p->value = x;
	p->pnext = m_header_ptr;
	m_header_ptr = p;
}

void link_list::append_value(int x)
{
	link_node_ptr p = new link_node();
	p->value = x;
	p->pnext = nullptr;
	link_node_ptr q = m_header_ptr;

	while (q!=nullptr && q->pnext!=nullptr)
	{
		q = q->pnext;
	}
	if (q == nullptr)
	{
		m_header_ptr = p;
	}
	else
	{
		q->pnext = p;
	}
}

void link_list::reverse_list() {
	link_node_ptr p = m_header_ptr;
	link_node_ptr q = p ->pnext;
	link_node_ptr s = q->pnext;
	p->pnext = nullptr;
	while(q != nullptr && q->pnext != nullptr)
	{
		
		q->pnext = p;
		p = q;
		q = s;
		s = s->pnext;
	}
	q->pnext = p;
	m_header_ptr = q;

}

void link_list::swap_2_nodes() {
	link_node_ptr p = m_header_ptr;
	link_node_ptr h = p->pnext;
	link_node_ptr q = p->pnext;
	link_node_ptr s = q->pnext;
	link_node_ptr u = q->pnext;

	while (q != nullptr && q->pnext != nullptr && u->pnext != nullptr)
	{
		q->pnext = p;
		q = p;
		s = s->pnext;
		p = s;
		q->pnext = p;
		s = u;
		p = s;
		
		q = p->pnext;
		s = q->pnext;
		u = q->pnext;
	}

	q->pnext = p;
	p->pnext = u;
	m_header_ptr = h;


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

void link_list::partition(int x) {
	if (m_header_ptr == nullptr) return;

	link_node_ptr p = m_header_ptr, n = p->pnext, t= nullptr, q = nullptr;
	while (n != nullptr )
	{
		t = n->pnext;
		if (n->value >= x) {
			n->pnext = q;
			q = n;
			p->pnext = t;
			n = t;
		}
		else
		{
			p = n;
			n = t;
		}
	}
	p->pnext = q;
}

link_list* sum_list(link_list* plist1, link_list* plist2)
{
	if (plist1 == nullptr || plist2 == nullptr) return nullptr;

	link_node_ptr h1 = plist1->m_header_ptr;
	link_node_ptr h2 = plist2->m_header_ptr;
	link_list* rl = new link_list();
	int c = 0;
	int s = 0;
	int v = 0;
	int t = 0;
	while (h1 != nullptr && h2 != nullptr)
	{
		s = h1->value + h2->value + c;
		t = s / 10;
		v = s % 10;
		rl->append_value(v);
		c = t;
		h1 = h1->pnext;
		h2 = h2->pnext;
	}
	link_node_ptr h3 = h1 != nullptr ? h1 : h2;
	while (h3 != nullptr)
	{
		rl->append_value(h3->value + c);
		c = 0;
		h3 = h3->pnext;
	}

	if (c > 0){
		rl->append_value(c);
	}
	return rl;
}
