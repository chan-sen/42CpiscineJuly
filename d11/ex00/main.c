#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	t_list	*list;

	list = ft_create_elem("wat");
	printf("%s\n", list->data);
}
