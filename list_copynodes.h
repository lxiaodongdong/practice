#pragma once

template< typename T> void list< T > :: copyNodes(ListNodePosi(T) p,int n){
	init();
	while(n--){
		insertAsLast(p->date);
		p=p->succ;
	}
}