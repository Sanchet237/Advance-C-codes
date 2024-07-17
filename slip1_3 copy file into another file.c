//Write C Program to copy a file into another file using command line arguments.
#include<stdio.h>
void main(int argc, char *argv[])
{
	FILE *fp1,*fp2;
	char ch;
	int i;
	
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	
	fp2=fopen(argv[2],"r");
	ch=fgetc(fp2);
	while(ch!=EOF)
	{
		fputc(ch,stdout);
		ch=fgetc(fp2);
		}
	fclose(fp2);
}
