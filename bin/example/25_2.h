/*
使用多参数组定义三维数组
*/

import 'rbufm.h'

void main()
{
	rbufm<int> arr(5,3,4)

	for i=0 to 4
		for j=0 to 2
			for k=0 to 3
				arr[i,j,k]=j
				arr[i,j,k].print
}