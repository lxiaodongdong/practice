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
	void merge ( ListNodePosi(T)&£¬int , list<T>&, ListNodePosi(T), int);
public:
	list(){ init(); }
	list( list< T > const & L);
	list( list< T > const & L, Rank r ,int n );
	list(ListNodePosi(T) p, int n);
	~list();
	Rank size(){return _size;}
	bool empty() const { return _size <= 0;}
	T & operator[] (Rank r) const;
	bool valid(ListNodePosi(T) p){
		return p && ( trailer != p ) && (header != p );
	}
	ListNodePosi(T) first() const { return header->succ; }
	ListNodePosi(T) Last() const { return trailer->pred; }
	ListNodePosi(T) insertAsFirst(T const& e);
	ListNodePosi(T) insertAsLast(T const& e);
	ListNodePosi(T) insertA( ListNodePosi(T) p,T const& e);
	ListNodePosi(T) insertB(ListNodePosi(T) p,T const& e);
	T remove(ListNodePosi(T) p);
	int disordered() const;
	ListNodePosi(T) find(T const &e) const{
		return find(e,_size,trailer);
	}
	ListNodePosi(T) find(T const & e,int n ,ListNodePosi(T) p) const ;
	ListNodePosi(T) search(T const& e) const{
		return search (e,_size,trailer);
	}
	ListNodePosi(T) search(T const& e,int n ,ListNodePosi(T) p) const;
	void merge(list<T>& L){merge(first(),size(),L,L.first(),L._size);}
	void sort(ListNodePosi(T) p,int n);
	void sort(){ sort(first(),_size); }
	int deduplicate();
	int uniquify();
	void reverse();
	void traverse(void(*)(T &));
	template< typename VST> void traverse(VST &);

};

#include "list_implementation.h"