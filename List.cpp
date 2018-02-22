#include "List.h"
#include <iostream>
#include "../../Project2/Project2/print.h"
using namespace std;

int main(){
	list<int> test;
	UniPrint pd;
	test.insertAsFirst(10);
	test.insertAsLast(12);
	cout << test.size() << endl;
	pd.p(test);
	system("pause");
}