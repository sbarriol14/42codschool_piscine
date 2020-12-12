
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*void    count_till_dots(int fp, int *i)
{
    //int fp;
    char c;
    int j;

    //fp = open("numbers.dict", O_RDONLY);
    c = 'a';
    j = 0;
    while (c != ' ')
    {
        read(fp, &c, 1);
        j++;
    }
    *i = j - 2;
    //close(fp);
}
*/
/*char    *put_number(int fp, int *i, char *num)
{
    //int fp;
    char c;
    int j;
    int k;

    j = *i;
    //fp = open("numbers.dict", O_RDONLY);
    k = 0;
    c = 'a';
    while (c != ':')
    {
        read(fp, &c, 1);
        num[k] = c;
        k++;
    }
    num[k - 1] = '\0';
    close(fp);
    return (num);
    
}
*/

/*void    count_till_jump(int fp, int *i)
{
    //int fp;
    char c;
    int j;

    //fp = open("numbers.dict", O_RDONLY);
    c = 'a';
    j = 0;
    while (c != '\n')
    {
        read(fp, &c, 1);
        j++;
    }
    *i = j - 1;
    close(fp);
}
*/

int    count_till_end()
{
    int i;
    char c;
    int fp;

    i = 0;
    fp = open("numbers.dict", O_RDONLY);
    while (read(fp, &c, 1))
        i++;
    close(fp);
    return (i);
}

char    *put_dict(char *dict, int size)
{
    char c;
    int fp;
    int i;

    i = 0;
    fp = open("numbers.dict", O_RDONLY);
    while (i < size)
    {
       read(fp, &c, 1);
        dict[i] = c;
        i++;
    }
    return (dict);
}

int        main(void)
{
    
    char *dict;
    int i;

    i = count_till_end();
    dict = (char*)malloc(i * sizeof(char));

    dict = put_dict(dict, i);
    printf("%s", dict);

    free(dict);
    return (0);


    //char *str1 = NULL;
    //int i;
    //char *num;
    //char *nombre;
    //int fp;
    
    /*      ------------
    i = 0;
    bib = (char **)malloc(41 * sizeof(char **));
    while (i < 41)
    {
        bib[i] = (char*)malloc(2 * sizeof(char*));
        i++;
    }
   
    i = 0;
    fp = open("numbers.dict", O_RDONLY);
    count_till_dots(fp, &i);
    printf("%d", i);
    bib[0][0] = (char)malloc(sizeof(char) * i);
    count_till_jump(fp, &i);
    printf("%d", i);
    bib[0][1] = (char)malloc(sizeof(char) * i);
    */

    //count_till_dots(fp, &i);
    //printf("%d", i);
    //bib[1][0] = (char)malloc(sizeof(char) * i);
    //count_till_jump(fp, &i);
    //printf("%d", i);
    //bib[1][1] = (char)malloc(sizeof(char) * i);
    


    //close(fp);

    //num = (char*)malloc(sizeof(char)*i);
    //num = put_number(fp, &i, num);
    //printf("%s", num);
    //bib[0][0] = *num;
    //printf("%c", bib[0][0]);
    
}