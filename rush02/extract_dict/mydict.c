#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{


	char dictionary[17][2][40] = {
	"0", "zero",
	"1", "one",
	"2", "two",
	"3", "three",
	"4", "four",
	"5", "five",
	"6", "six",
	"7", "seven",
	"8", "eight",
	"9", "nine",
	"10", "ten",
	"11", "eleven",
	"12", "twelve",
	"13", "thirteen",
	"14", "fourteen",
	"15", "fifteen",
	"100000 00000 000000   00000 00000", "undecillion"
	};
	
	

	//char find[] = "1000000000000000000000000000000000000";
	char find[] = "15";
	int i;
	i = 0;
	while(i < 17)
	{
		if(strcmp(find, dictionary[i][0]) == 0)
		{
			printf("%s", dictionary[i][1]);
			break;
		}
		i++;
	}

	return 0;
}