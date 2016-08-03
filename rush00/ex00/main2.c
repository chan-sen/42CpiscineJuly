void	rush(int x, int y);

int	main(int argc, char **argv)
{
	if (argc == 3)
		rush (*argv[1], *argv[2]);
	else
		return (0);
}
