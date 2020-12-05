
int    count_ns(int map[4][4], int n)
{
    int x;
    int y;
    int cont;

    y = 0;
    while(y < 4)
    {
        x = 0;
        while(x < 4)
        {
            if(map[x][y] == n)
                cont++; 
        }
    }
    return (cont);
}   

void   fill_last(int map[4][4], int n)
{
    int numtab[4][4];
    int row[3];
    int col[3];
    int k;
    int x;
    int y;

    y = 0;
    //creo un mapa que tiene valor 1 en donde encuentre numeros "n" ya puestos
    while(y < 4)
    {
        x = 0;
        while(x < 4)
        {
            if(map[x][y] == n)
                numtab[x][y] == 1;
            else
                numtab[x][y] == 0; 
        }

    }
    //recorro el array para encontrar en que filas y columnas tenemos 1
    k = 0;
    while(y < 4)
    {
        x = 0;
        while(x < 4)
        {
            if (numtab[x][y] == 1)
                row[k] = x;
                col[k] = y;
                k++;
        }

    }
    //averiguamos que combinacion de x y de y no se encuentra en col[] y row[] **si sumamos 4 + 3 + 2 + 1 = 11 y le damos el numero  "n" a map[x][y]
    x = 11 - (col[0] + col[1] + col[2]);
    y = 11 - (row[0] + row[1] + row[2]);
    map[x][y] = n;
}

void    fill_4(int map[4][4], int *parameters)
{
    int cont4;
    int x;
    int y;
    int i;

    //cuento numero de 4
    cont4 = count_ns(map, 4);

    //si hay 3 "4" relleno el ultimo
    //si hay 2 4 tengo que añadir condiciones | mirar los 3------2  (el 4 iria en posicion 3)......una vez ponga el tercer 4 -> recursividad
    if (cont4 == 3)
        fill_last(map, 4);
    if (cont4 == 2)
    {
        while(i < 12)
        {

            if (((parameters[i] == 2) && (parameters[i+4] == 3)) || ((parameters[i] == 3) && (parameters[i+4] == 2)))
            {
                if(parameters[i] == 2)
                {
                    x = i > 3 ? i - 4 : i;
                    y = i > 3 ? 2 : 1;
                }
                else if (parameters[i] == 3)
                {
                    x = i > 3 ? i - 4 : i;
                    y = i > 3 ? 2 : 1;
                }
                map[x][y] = 4;
                if(i == 5)
                    i = i+4;
                else
                    i++;
            }
        }
        fill_4(map, parameters);
    }
}

void    fill_3(int map[4][4], int *parameters)
{
    int cont3;
    int x;
    int y;
    int i;

    //cuento numero de 3
    cont3 = count_ns(map, 3);
    if (cont3 < 3)
    {
        //primera condicion: si un 4 esta en un borde y esta enfrentado a una vista=2  ----> el pegado a vista2 es un numero 3
        y = 0;
        while (y < 3)
        {
            x = 0;
            while (x < 3)
            {
                if(map[x][y] == 4)
                {
                    if(x == 0 && (parameters[y+12] == 2))
                    {
                        map[x+3][y] = 3;
                    }
                    if(x == 3 && (parameters[y+8] == 2))
                    {
                        map[x-3][y] = 3;
                    }
                    if(y == 0 && (parameters[x+4] == 2))
                    {
                        map[x][y + 3] = 3;
                    }
                    if(y == 3 && (parameters[x] == 2))
                    {
                        map[x][y - 3] = 3;
                    }

                }
            }
        }
    }
    else
        fill_last(map, 3);
}

void    fill_in(int map[4][4], int *parameters)
{
    fill_4(map, parameters);
    fill_3(map, parameters);

}