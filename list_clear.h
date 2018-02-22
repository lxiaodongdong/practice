#pragma once 

template< typename T> int list<T> :: clear(){
	int oldSize = _size;
	while(0 < _size){
		remove(header->succ);
	}
	return oldSize;
}