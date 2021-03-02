#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fs,*ft;
    char ch;

    if(argc!= 3)
    {
        printf("Improper number of arguments \n");
        exit(1);
    }

    fs=fopen(argv[1],"r");
    if(fs==NULL)
    {
        printf("Can not open source file\n");
        exit(2);
    }

    ft=fopen(argv[2],"w");
    if(ft==NULL)
    {
        printf("Can not open target file\n");
        fclose(fs);
        exit(3);
    }

    while((ch=fgetc(fs))!=EOF)
    {
        fputc(ch,ft);
    }
    fclose(fs);
    fclose(ft);
    return 0;
}
