/*
运行时动态调用函数
*/

void main()
{
	p=findf("fadd")

	puts int[p,1,2]

	puts int[findf("fadd"),1,2]

	p=findf("fadd(int,int)")

	puts int[p,1,2]

	p=findf("main.fadd(int,int)")

	puts int[p,1,2]

	p=findf("int.+(int,int)")

	puts int[p,1,2]
}

int fadd(int a,int b)
{
	return a+b
}