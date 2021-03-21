#include <stdio.h>

void switchChar();
void switchEnum(enum RainbowColors color);
void switchSymbols();

enum RainbowColors {Red, Orange, Yellow, Green, Blue, Indigo, Violet};

int main()
{
	switchChar();
	switchEnum(Orange);
	switchSymbols();

    return 0;
}

void switchChar()
{
    char symbol = 'A';
    switch(symbol)
    {
        case 'A': printf("A"); break;
        //case 65: printf("65"); break;	//	Duplicated value
    }
    printf("\n");
}

void switchEnum(enum RainbowColors color)
{
    switch(color)
    {
        case Red: printf("Red is the first color in the rainbow."); break;
        case Orange: printf("Orange is the second color in the rainbow."); break;
        case Yellow: printf("Yellow is the third color in the rainbow."); break;
        case Green: printf("Green is the fourth color in the rainbow."); break;
        case Blue: printf("Blue is the fifth color in the rainbow."); break;
        case Indigo: printf("Indigo is the sixth color in the rainbow."); break;
        case Violet: printf("Violet is the seventh color in the rainbow."); break;
        default: printf("I don't know this color.");
    }
	printf("\n");
}

void switchSymbols()
{
	char symbol;
	printf("Enter a symbol: ");
	scanf("%c", &symbol);
	switch(symbol)
	{
		case '-':
		case '+':
		case '*':
		case '/':
		case '=': printf("'%c' is a symbol from the simple arithmetics.", symbol); break;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': printf("%c is a digit.", symbol); break;
		default: printf("I don't know this symbol. Probably a letter..."); break;
	}
	printf("\n");
}
