/*
互斥体
*/

main
{
	rmutex mu
	mu.enter
	puts 'protected code'
	mu.leave
}