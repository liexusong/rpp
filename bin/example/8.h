/*
无缝内联汇编
*/

main
{
	//puts esp 

	1+2
	mov eax,ebx
	puts eax
	
	if(eax)
		puts "eax is not zero"
	else
		puts "eax is zero"
}