#pragma once

template< typename T > list<T> :: ~list(){
	clear();
	delete trailer;
	delete header;
}