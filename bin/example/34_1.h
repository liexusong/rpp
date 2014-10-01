/*
RPP的命名空间实际上是一个类，
只是所有函数均没有this
*/

namespace MY
{
	//RPP没有枚举变量，只有枚举常量
	enum
	{
		c_a=2
		c_b=4
	}

	void func()
	{
		puts c_a
	}
}

void main()
{
	MY.func
	MY::func
	puts MY.c_a
	puts MY::c_b
}