main
{
	test('1')
	test('2')
	test('3')
}

test(rstr s)
{
	if s=='1'
		putsl 'pass 1'
	elif s=='2'
		putsl 'pass 2'
	else
		putsl 'other'

	if(s=='1')
	{
		putsl 'pass 1'
	}
	else
	{
		putsl 'other'
	}

	switch s
	case '1'
		putsl 'pass 1'
	case '2'
		putsl 'pass 2'
	default
		putsl 'default'

	switch s
	case '1'
	{
		putsl 'pass 1'
	}
	case '2'
	{
		putsl 'pass 2'
	}
	default
	{
		putsl 'default'
	}

	switch(s)
	{
		case '1':
		{
			putsl 'pass 1'
		}
		case '2':
		{
			putsl 'pass 2'
		}
		default:
		{
			putsl 'default'
		}
	}
}