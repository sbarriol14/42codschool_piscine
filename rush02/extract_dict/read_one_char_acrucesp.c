
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int        main(void)
{
    int d;
    char c = 'a';

    d = open("numbers.dict", O_RDONLY);
    read(d, &c, 1);
    write(1, &c, 1);
    close(d);
}