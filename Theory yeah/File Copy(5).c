#include<stdio.h>
main()
{
    FILE *fp1, *fp2;
    char s[100],t[100],ch;
    gets(s);
    gets(t);
    fp1=fopen(s,"r");
    fp2=fopen(t,"w");

    if(fp1 == NULL || fp2 == NULL)
    {
        printf("Error");
        return 0;
    }
    while(1==1)
    {
        ch= fgetc(fp1);
        if(ch == EOF)
            break;

        if(ch>='a' && ch<='z')
            ch=ch-32;
        fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);
}
