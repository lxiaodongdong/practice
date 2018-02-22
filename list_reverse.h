#pragma once

template< typename T> void list<T> :: reverse(){
	if(_size < 2 ) return ;
	for(ListNodePosi(T) p = header;p;p=p->succ){
		swap(p->succ , p->pred);
	}
	swap(header,trailer);
}