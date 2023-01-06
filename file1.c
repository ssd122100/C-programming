#include<stdio.h>
void main()
{
    FILE *inputFile,*outputFile;
    inputFile = fopen("input.txt","r");
    if(inputFile==NULL)
    {
        printf("No file found");
        return 0;
    }
    outputFile = fopen("output2.txt","w");
    if(outputFile==NULL)
    {
        printf("No file found");   //in this case a output file will be created at first then execute. no error.
    }
//    char ch = fgetc(inputFile);
//    printf("%c",ch);
//    char ch1 = fgetc(inputFile);
//    printf("%c",ch1);
while(1)
{
    char ch=fgetc(inputFile);
    if(ch==EOF)// end of file
    { break;}
    //printf("%c",ch);
    fputc(ch,outputFile);
}
}
