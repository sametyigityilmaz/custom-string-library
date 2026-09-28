#include "myStrings.h"

int findLength(char str[]){
int i=0,length=0;

while(str[i]!='\0')
{
i++;
length++;
	}	
	
return length;
}


void copyString(char str1[],char str2[]){
	
int size=findLength(str2);
int i;
for(i=0;i<size;i++)
{
str1[i]=str2[i];	
}

str1[i]='\0';	
	
}


void reverseString(char str[]){
	
int i=findLength(str)-1;
char temp[100];
int j;

for(j=0;j<=findLength(str)-1;j++)
{
temp[j]=str[i];	
i--;	
}
temp[j]='\0';	

copyString(str,temp);

}

int compareStrings(char* str1,char* str2)
{
int check=0,i=0;	

while(*str1!='\0'&&*str2!='\0')
{
if(*str1!=*str2){

check=1;	
break;	
  }	
str1++;
str2++;	
}

if(*str1!=*str2)
check=1;
	
return check;	
}
