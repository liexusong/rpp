/*
广度优先搜索遍历目录
*/

import "rdir.h"

main
{
	v=rdir.get_file_bfs('./')
	for i in v
		v[i].printl
}