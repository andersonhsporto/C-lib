void	print_c_array(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("STRING:%s, POSIÇÂO I:%d\n", array[i], i);
		i++;
	}
	return ;
}
