#include <stdio.h>
#include<string.h>

int main()
{
char name[30];
printf("Enter the word to reverse");
scanf("%s",&name);
int lengthOfName=strlen(name)-1;

for(int i=0;i<lengthOfName;i++){
	char temp=name[i];
	name[i]=name[lengthOfName];
	name[lengthOfName]=temp;
	lengthOfName--;
}
printf("%s",name);

return 0;
}


