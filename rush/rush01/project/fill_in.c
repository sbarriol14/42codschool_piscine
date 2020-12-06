
#include <stdbool.h>

//funcion para contar el numero de ocurrencias de un numero en toda la tabla ( de 0 a 4)
//parametros: map y n (el numero que queremos contar)
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

//funcion para saber si tenemos el único 0 de la fila
//parametros: map e y (y es la fila que inspeccionamos)
bool	only0_row(int map[4][4], int y)
{
	int x;
	int cont0;

	x = 0;
	while (x < 4)
	{
		if(map[x][y] == 0)
			cont0++;
	}
	if (cont0 == 1)
		return (true);
	else
		return (false);
}
//funcion para saber si tenemos el único 0 de la columna
//parametros: map e y (x es la col que inspeccionamos)
bool	only0_col(int map[4][4], int x)
{
	int y;
	int cont0;

	y = 0;
	while (y < 4)
	{
		if(map[x][y] == 0)
			cont0++;
	}
	if (cont0 == 1)
		return (true);
	else
		return (false);
}

//funcion para poner mascara en fila, !!!!Leer abajo funcion de put_mask
void	mask_col(int map[4][4], int x)
{
	int y;

	y = 0;
	while (y < 4)
	{
		if(map[x][y] == 0)
			map[x][y] = -1;
		y++;
	}
}

//funcion para poner mascara en fila, !!!!Leer abajo funcion de put_mask
void	mask_row(int map[4][4], int y)
{
	int x;

	x = 0;
	while (x < 4)
	{
		if(map[x][y] == 0)
			map[x][y] = -1;
		x++;
	}
}


//funcion para generar una mascara que ponga un -1 en las posiciones donde no puede ir el número indicado en n,, ed: cambia 0 por -1
//parametros: el map, *parameters y n (el número que queremos inspeccionar)
//comentario: la n va a ser el siguiente numero que va a rellenar, y hay que tener en cuenta que los cuatros se van a rellenar sin necesidad de este método (en teoria)
void	put_mask(int map[4][4], int *parameters, int n)
{
	int x;
	int y;

	//condicion general : si hay un numero, no puede haber uno igual ni en fila ni en columna
	y = 0;
	while ( y < 4)
	{
		x = 0;
		while ( x < 4)
		{
			if(map[x][y] == n)
			{
				mask_col(map, x);
				mask_row(map, y);
			}
			x++;
		}
		y++;
	}

	//añado condiciones específicas de cada numero
	if (n == 3){
		//condicion de en un borde con vista 3, no puede haber un 3
		y = 0;
		while ( y < 4)
			{
				x = 0;
				while ( x < 4)
				{
					if(x == 0 && (parameters[y+8] == 3))
					{
						map[x+3][y] = -1;
					}
					if(x == 3 && (parameters[y+12] == 3))
					{
						map[x-3][y] = -1;
					}
					if(y == 0 && (parameters[x] == 3))
					{
						map[x][y + 3] = -1;
					}
					if(y == 3 && (parameters[x+4] == 3))
					{
						map[x][y - 3] = -1;
					}
					x++;
				}
				y++;
			}

	}
}

//Revisa la mascara para ver si puede rellenar algun número: ed. si una fila/columna contiene un solo "0", quiere decir que es la unica posibilidad para poner el numero n (sig num)
void	inspect_mask(int map[4][4], int n)
{

	int x;
	int y;

	y = 0;
		while ( y < 4)
		{
			x = 0;
			while ( x < 4)
			{
				//comprobamos si hay un unico 0 en alguna fila o alguna columna y ponemos en numero si se da el caso (ya que es la unica opcion posible) (si hay un 4 y dos casillas prohibidas (-1) la suma de la fila/columna sera 4-1-1 = 2
				if((map[x][y] == 0))
				{
					if ((only0_row(y) || only0_col(y)))
							map[x][y] = n;
				}
				x++;
			}
			y++;
		}
}

//funcion para borrar la mascara ed: quita los -1 del mapa
//parametros: el map
void	rm_mask(int map[4][4])
{
	int x;
	int y;

	y = 0;
	while ( y < 4)
	{
		x = 0;
		while ( x < 4)
		{
			if(map[x][y] == -1)
			{
				map[x][y] = 0;
			}
			x++;
		}
		y++;
	}
}

//funcion para rellenar el último numero cuando ya hemos puesto tres iguales en nuestra tabla
//parametros: map y n (el numero que queremos completar)
void	fill_last(int map[4][4], int *parameters, int n)
{
	int x;
	int y;

	put_mask(map, parameters, n);
	y = 0;
	while ( y < 4)
	{
		x = 0;
		while ( x < 4)
		{
			if(map[x][y] == 0)
			{
				map[x][y] = n;
			}
			x++;
		}
		y++;
	}
	rm_mask(map);
}

//funcion para rellenar los cuatros en la tabla
//parametros: map y *parameters (array de parametros)
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
    	//posiblemente tambien esto sea un fillin special, y todos estos
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
        //llamada recursiva para que llene el último 4, .... en realidad podemos usar fill_last4 también (pero casi que lo veo mejor asi
        fill_4(map, parameters);
    }
}

void    fill_3(int map[4][4], int *parameters)
{
    int cont3;
    int x;
    int y;

    //cuento numero de 3
    cont3 = count_ns(map, 3);
    if (cont3 < 3)
    {
        //primera condicion: si un 4 esta en un borde y esta enfrentado a una vista=2  ----> el pegado a vista2 es un numero 3
        y = 0;
        while (y < 4)
        {
            x = 0;
            while (x < 4)
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
                x++;
            }
            y++;
        }
        //si con eso aún no tenemos 3 "3" vamos a tener que utilizar mas condiciones (usamos mascara de 3), en teoria con esta condición valdria para conseguir ya 3 "3"
		put_mask(map, parameters, 3);
		inspect_mask(parameters, 3);
		rm_mask(map);
		fill_3(map, parameters);
    }
    if(cont3 < 4)
        fill_last(map, 3);
}

void fill_34(int map[4][4], int *parameters)
{
	int x;
	int y;

	y = 0;
	        while (y < 4)
	        {
	            x = 0;
	            while (x < 4)
	            {
	                if(map[x][y] == 4)
	                {
	                    if((x == 0 && (parameters[y+12] == 3))&& (map[x+1][y] == 3))
	                    {
	                        map[x+2][y] = 2;
	                    }
	                    if((x == 3 && (parameters[y+8] == 3))&& (map[x-1][y] == 3))
	                    {
	                        map[x-2][y] = 2;
	                    }
	                    if( (y == 0 && (parameters[x+4] == 3))&& (map[x][y+1] == 3))
	                    {
	                        map[x][y + 2] = 2;
	                    }
	                    if(( y == 3 && (parameters[x] == 3)) && (map[x][y-1] == 3))
	                    {
	                        map[x][y - 2] = 2;
	                    }
	                }
	                x++;
	            }
	            y++;
	        }
		}

void	fill_lastof_row(int map[4][4])
{
	int y;
	int suma;
	int x;

	y = 0;
	while ( y < 4)
	{
		x = 0;
		while (x < 4)
		{
			suma = map[x][0] + map[x][1] + map[x][2] + map[x][3];
			if (suma > 7 && map[x][y] == 0)
				map[x][y] = 11 - suma;
			x++;
		}

		y++;
	}
}

void	fill_lastof_row(int map[4][4])
{
	int y;
	int suma;
	int x;

	y = 0;
	while ( y < 4)
	{
		x = 0;
		while (x < 4)
		{
			suma = map[0][y] + map[1][y] + map[2][y] + map[3][y];
			if (suma > 7 && map[x][y] == 0)
				map[x][y] = 11 - suma;
			x++;
		}

		y++;
	}
}

//funcion para rellenar 1 y 2
void	fill_2y1(int map[4][4], int *parameters)
{
	int c1;
	int c2;

	c1 = count_ns(map, 1);
	c2 = count_ns(map, 2);
	if (!((c1 == 4) && (c2 == 4)))
	{
		fill_34();
		fill_lastof_row();
		fill_lastof_col();
		fill_2y1(map, parameters);
	}
}

void    fill_in(int map[4][4], int *parameters)
{
    fill_4(map, parameters);
    fill_3(map, parameters);

}
