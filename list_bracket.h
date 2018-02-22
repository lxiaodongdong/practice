#pragma once

template< typename T > 
T &list<T>::operator[](Rank r) const {
	ListNodePosi(T) p = first();
	while(0 < r--) p = p->succ;
	return p->data;
}