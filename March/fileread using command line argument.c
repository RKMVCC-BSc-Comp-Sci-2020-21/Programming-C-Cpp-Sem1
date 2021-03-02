#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    char ch[1000];

    if(argc!=2)
    {
        printf("Improper number of arguments");
        exit(1);
    }

    fp=fopen(argv[1],"r");
    if(fp==NULL)
    {
        printf("Cannot open the file\n");
        exit(2);
    }
    printf("\n");
    while(fgets(ch,999,fp) !=NULL)
    {
       
        printf("%s",ch);
    }
    fclose(fp);
    printf("\n");
    return 0;
}
