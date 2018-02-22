#pragma once

template < typename T> void list< T > :: init(){
	header = new ListNode< T >;
	trailer = new ListNode< T >;
	header->succ = trailer;
	header->pred = NULL;
	_size=0;
}