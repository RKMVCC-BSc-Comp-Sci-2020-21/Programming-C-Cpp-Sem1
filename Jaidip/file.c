#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int noc=0,nob=0,nol=0;
    fp=fopen64("abc.txt","r");
    if(fp==NULL)
    {
        puts("Cannot open the file");
        exit(1);
    }
    while (1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        break;

        noc++;
        if(ch==' ')
        nob++;
        if(ch=='\n')
        nol++;

    }
    fclose(fp);

    printf("No of characters: %d\n",noc);
    printf("No of blank spaces: %d\n",nob);
    printf("No of lines: %d",nol);
    return 0;
    
}