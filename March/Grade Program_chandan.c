/*  Write a program to input a number & show the GRADE on the basis of the 
following chart.
             MARKS        GRADE
             80 - 100       'A'  
             60 - 79        'B'
             40 - 59        'C'
              0 - 39        'D'  */
              
              
#include<stdio.h>

main()

{
            int marks; 
            char grade;
            printf("Enter a marks: \n");
            scanf("%d", &marks);
            if(marks >= 80 && marks < 100 )
           {
             grade = 'A';
            }
             else if(marks >= 60 && marks < 79 )
           {
             grade = 'B';
            }
            else if(marks >= 40 && marks  < 59 )
           {
             grade = 'C';
            }
            else  
            {
             grade = 'D';
            }
            
           printf("Your grade is %c",grade);
}
