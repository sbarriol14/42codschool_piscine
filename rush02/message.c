#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int num_char(int fd)
{
    int num;
    char *ptr;

    num = 0;
    while (read(fd, &ptr, 1))
        num++;
    return (num);
}
char *redFile(int fd, int max)
{
    char *ptr;
    int cont;

    cont = 0;
    ptr = (char *)malloc(max * sizeof(char *));
    while (read(fd, &ptr[cont], 1))
    {
        cont++;
    }
    return (ptr);
}

int num_lines(int max, char *arr_fil)
{
    int line;
   
   line = 0;
    while (*arr_fil)
    {
        if(*arr_fil == '\n')
        {
            line++;
        }
        arr_fil++;
    }
    return (line);
}

int f_l_num_car(char *arr_file, int line)
{
    int carac;
    int parar;

    carac = 0;
    parar = 0;
    if (line >= 0)
    {
        while (*arr_file != '\0' && parar == 0)
        {
            if (*arr_file == '\n' && line > 0)
            {
                line--;
            }
            else if(*arr_file != '\n' && line == 0)
            {
                carac++;
            }
            else if (line == 0 && *arr_file == '\n')
                parar = 1;
            arr_file++;
        }
        return carac;
    }
    else
        return (-1);
}

void fil_lines(char **bibl, char *arr_file, int line)
{
    int n_carat;
    int parar;
    int cont;

    n_carat = f_l_num_car(arr_file, line);
    bibl[line] = (char *)malloc((n_carat + 1) * sizeof(char *));
    parar = 0;
    cont = 0;
    while (*arr_file != '\0')
    {
        if (*arr_file == '\n' && line > 0)
            line--;
        else if (line == 0 && *arr_file != '\n')
        {
            bibl[line][cont] = *arr_file;
            cont++;
        }
        else if (line == 0 && *arr_file == '\n')
            break;
        arr_file++;
    }
    printf("%s", bibl[line]);
    cont++;
    //printf("%d %c", cont, '\n');
    bibl[line][cont] = '\0';
}

char **file_to_array(int max, char *arr_file)
{
    char **bibl;
    int n_lin;
    int cont;

    n_lin = num_lines(max,arr_file);
    //printf("%d",n_lin);
    cont = 0;
    bibl = (char **)malloc(n_lin * sizeof(char **));
    while (cont <= n_lin)
    {
        fil_lines(bibl, arr_file, cont);
        printf("%s", bibl[cont]);
        cont++;
    }
    return (bibl);
}

int op_file(char *file)
{
     int fd;

    if ((fd = open("./numbers.dict.txt", O_RDONLY)) == -1)
    {
        write(1, "Error!", 5);
        return (0);
    }
    else
       return (fd);
}

int main(int argc, char **argv)
{
    int fd;
    char **bibl;
    int cont1;
    int cont2;
    char *arr_file;
    int max;

    fd = op_file("./numbers.dict.txt");
    max = num_char(fd);
    close(fd);
    fd = op_file("./numbers.dict.txt");
    arr_file = redFile(fd,max);
    close(fd);
    //printf("%d", num_lines(max, arr_file));
    bibl = file_to_array(max, arr_file);

    printf("%s", bibl[1]); 
    //arr = file_to_array(fd);

    /*cont1 = 0;
    while(bibl[cont1])
    {
        cont2 = 0;
        while(bibl[cont1][cont2])
        {
            write(1, &bibl[cont1][cont2], 1);
            cont2++;
        }
        cont1++;
    }*/
        
}