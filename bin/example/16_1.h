/*
反射
打印出自身的所属的函数和类
*/

import 'rpp.h'

main
{
	tasm* p=&main
	p->ptfi->name.printl
	p->ptfi->ptci->name.printl
}
