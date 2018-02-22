#pragma once 

template< typename T > 
list< T > :: list(list< T > const & L){
	copyNodes(L.first(),L._size);
}
template<typename T>
list< T > :: list(ListNodePosi(T) p,int n){
	copyNodes(p,n);
}

template< typename T > list< T > :: list(list< T > const & L, Rank r ,int n){
	copuNode(L[r],n);
}