/*
使用嵌套模板定义三维数组
*/

void main()
{
	rbuf<rbuf<rbuf<int>>> arr

	arr.alloc(5)
	for i in arr
		arr[i].alloc(3)
		for j in arr[i]
			arr[i][j].alloc(4)

	for i in arr
		for j in arr[i]
			for k in arr[i][j]
				arr[i][j][k]=j
				arr[i][j][k].print
}