/*
Ayan Kumar Chatterjee
MCA (IGNOU), Diploma in Software Engineering (Aptech Computer Education),
Teacher of Computer Science and Software Technology
1/1A, Ananda Chatterjee Lane, Kolkata 700003.  Phone: 99034 63883 // 033 2554 6084.  Email: ayankumarchatterjee@yahoo.com
*/

#include<stdio.h>
#define SIZE 3

/*
	LOWER TRIANGULAR MATRIX

	A MATRIX IS CALLED A LOWER TRIANGULAR MATRIX WHERE THERE ARE ONLY
	NON-ZERO VALUES IN EVERY CELL WHERE THE ROW INDEX IS GREATER THAN
	THE COLUMN INDEX.
	THE OTHER CELLS CAN CONTAIN NON-ZERO VALUES.
*/

void main(void)
{
	int arr[SIZE][SIZE];
	int r, c;

	clrscr();

	for(r = 0 ; r < SIZE ; r++)
	{
		for(c = 0 ; c < SIZE ; c++)
			arr[r][c] = 0;
	}

	printf("\n\tEnter values into the diagonal matrix : ");

	for(r = 0 ; r < SIZE ; r++)
	{
		for(c = 0 ; c < SIZE ; c++)
		{
			if(r < c)
				continue;
			// IF ROW < COLUMN, ONLY THEN INPUT IS ACCEPTED
			else
			{
				printf("\n\tEnter into row  %d and col  %d : ", r, c);
				scanf("%d", &arr[r][c]);
			}
		}
	}

	printf("\n\tYou have entered : ");

	for(r = 0 ; r < SIZE ; r++)
	{
		printf("\n\t\t");
		for(c = 0 ; c < SIZE ; c++)
			printf("\t%d", arr[r][c]);
	}

	getch();
}

	/*
		ALGORITHM:
		START
			INITILAIZE ALL THE CELLS OF THE ARRAY WITH 0
			FOR R = 0 TO ROW-1 STEP 1
				FOR C = 0 TO COL-1 STEP 1
					IF R < C THEN
						CONTINUE
					ELSE
						PRINT "ENTER VALUE : "
						READ VALUE INTO ARR[R, C]
					ENDIF
				ENDFOR
			ENDFOR
		STOP
	*/