#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char ch;
	int count = 0;
	fptr = fopen("C://welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧ줸\n", count);
	}
	else
	{
		printf("�}���ɮץ���!!\n");
	}
	system("pause");
	return 0;
}