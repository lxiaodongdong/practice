#pragma once

template < typename T> 
void list<T>::traverse(void (*visit)(T &)){
	for(ListNodePosi(T) p = header->succ;p != trailer; p = p->succ){
		visit(p->data);
	}
}
template< typename T > 
template<typename VST> void list<T>::traverse(VST & visit){
	for(ListNodePosi(T) p = header->succ;p != trailer; p = p->succ) visit(p->data);
}