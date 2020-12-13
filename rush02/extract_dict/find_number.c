#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


//añadir ft_strlen()  y ft_strcmp o strncmp


char	*return_name(int i, char *dict)
{
	int sizename;
	char *name;
	int j;

	j = 0;
	while (ft_char_is_alpha(dict[i]) == 0)
			i++;
	sizename = ft_strlen(dict);
	name = (char*)malloc(sizeof(char) * sizename);
	while (dict[i] != '\n')
	{
		name[j] = dict[i];
		j++;
		i++;
	}
	name[j] = '\0';
	return (name);
}


char *find_number(char *dict, char *to_find)
{
    int i;
    int j;
    char *name;

    j = 0;

    while (dict[j] != '\0')
    {
    	i = 0;
    	while( ft_strcmp(dict[j], to_find[i]) == 0)//mejor con n?
    	{
    		if(to_find[i + 1] == '\0' && (ft_char_is_numeric(dict[j +1]) == 0))
    		{
    			name = return_name(i, dict);
    		}
    		i++;
    	}
    	j++;
    }
    return (name);
}
