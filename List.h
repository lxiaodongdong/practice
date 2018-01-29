#pragma once

#include "ListNode.h"

template <typename T> class list 
{
private:
	int _size;
	ListNodePosi(T) header;
	ListNodePosi(T) trailer;

protected:
	void init();
	int clear();
	void copyNodes ( ListNodePosi(T) ,int );
	void merge ( ListNodePosi(T)&£¬int , List<T>&, ListNodePosi(T), int);
public:
	List(){ init(); }
	List( List< T > const & L);
	List( List< T > const & L, Rank r ,int n );
	List(ListNodePosi(T) p, int n);
	~List();
	Rank size(){return _size;}
	bool empty() const { return _size <= 0;}
	T & operator[] (Rank r) const;
};

#include "List_implementation.h"