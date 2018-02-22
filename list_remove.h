#pragma once
template<typename T> T list<T> :: remove(ListNodePosi(T) p){
	T e = p->data;
	p->pred->succ = p->succ;
	p->succ->pred = p->pred;
	_size--;
	delete p;
	return e;
}