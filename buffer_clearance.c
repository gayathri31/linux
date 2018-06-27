// C Code clearing the input buffer
#include<stdio.h>
int main()
{
	char str[25],ch;
	// Scan input from user 
	scanf("%s",str);
        
	while((getchar())!='\n');
	// Scan character from user- 	
	ch=getchar();
	
	// Printing character array
	printf("%s\n",str);

	// This does not print
	printf("CH:%c",ch);

	return 0;
}
