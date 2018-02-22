#pragma once 

template < typename T > ListNodePosi( T ) list< T >:: insertAsFirst(T const& e){
	_size++;
	return header->insertAsSucc(e);
}
template <typename T > ListNodePosi( T ) list< T > :: insertAsLast(T const& e){
	_size++;
	return trailer->insertAsPred(e);
}
template <typename T > ListNodePosi(T) list< T > :: insertB(ListNodePosi(T) p,T const& e){
	_size++;
	return p->insertAsPred(e);
}
template<typename T> ListNodePosi(T) list< T > :: insertA(ListNodePosi(T) p,T const& e){
	_size++;
	return p->insertAsSucc(e);
}