#include<stdio.h>
#include<string.h>
#include"header.h"

int main()
{
	//basicTypes();
	//arrayAndPointer();
	//complexTypes();
	functionPointers();

	return 0;
}

void basicTypes()
{
	BYTE number = 0;
	ULONG milliseconds = 3600000;
	printf("The number is %d\n", number);
	printf("%lu milliseconds equals %d seconds or %d minutes or %d hour(s)\n",
		milliseconds, milliseconds/1000, milliseconds/(1000 * 60), milliseconds/(1000*60*60));
}

void arrayAndPointer()
{
    STRING bookName = "C Programming Simple Steps";
	TOWN town;
	gets(town);
    printf("%s rocks!\n", town);
    printf("The name of the book is %s.\n", bookName);
}

void complexTypes()
{
	POINT startLocation;
	DIRECTION goWest;
	startLocation.x = 0;
	startLocation.y = 0;
	goWest = West;

	printf("The X coordinate is %d and the Y coordinate is %d.\n", startLocation.x, startLocation.y);
}

void functionPointers()
{
	void (*pointerToPrintHello)() = &printHello;
	void (*pointerToPrintMessage)(char*) = &printMessage;
	VoidFunc_NoArgs testPrintHello = &printHello;
	VoidFunc_CharArr testPrintMessage = &printMessage;

	pointerToPrintHello();
	pointerToPrintMessage("Yo, what's up? We call this function through a regular function pointer. The syntax is a mess!");

	testPrintHello();
	testPrintMessage("Now the printMessage function is called through a pointer, defined, using a typedef alias. Yeah!");
}

void printHello()
{
	printf("Hello!\n");
}

void printMessage(char *message)
{
	printf("%s\n", message);
}