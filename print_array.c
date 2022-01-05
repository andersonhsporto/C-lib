void	print_array(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("NUMERO:%d, POSIÇÂO I:%d\n", array[i], i);
		i++;
	}
	return ;
}
