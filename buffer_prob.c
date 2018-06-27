// C Code to explain why not clearing the input buffer causes undesired outputs
#include<stdio.h>
int main()
{
	char str[25],ch;
	// Scan input from user 
	scanf("%s",str);
        
	// Scan character from user- 	
	ch=getchar();
	
	// Printing character array
	printf("%s\n",str);

	// This does not print
	printf("CH:%c",ch);

	return 0;
}
