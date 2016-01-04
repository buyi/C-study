// #include "stdio.h"
#include "IntCell.h"
#include <iostream>
using namespace std;

int main () {
	// 单参数构造函数必须用圆括号来赋值
	IntCell cell;// = new IntCell ();

	cell.write (205);

	// cout << "Cell contents:" << cell.read() << endl;
	printf ("hello  %d", cell.read());
	return 0;
}