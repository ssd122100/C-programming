#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile= fopen("input.txt","r");
    if( inputFile== NULL)
    {
        printf("No file found\n");
        return 0;
    }
    outputFile = fopen("output.txt","w");
    int n;
    fscanf(inputFile,"%d",&n);
    int sum=0;
    for(int i=0;i<n;i++)
    {

        int a;
        fscanf(inputFile,"%d",&a);
        sum+=a;
    }
   fprintf(outputFile,"sum -> %d",sum);
   fclose(inputFile);
   fclose(outputFile);
}
