#include<stdio.h>
int main()
{
	char s1[100], s2[100], copy[100];
	char concat[200], reverse [100];
	int i,j,len1=0,len2=0,flag=0;
	printf("enter first string:");
	scanf("%99[^\n]",s1);
	printf("enter second string:");
	scanf("%99[^\n]",s2);
	while (s1[len1]!='\0')len1++;
	while (s2[len2]!='\0')len2++;
	printf("length of first string = %d\n",len1);
	printf("length of second string = %d\n",len2);
	for (i = 0;i <= len1; i++) concat[i] = s1[i];
	for (j = 0; j <= len2; j++) concat[i + j]=s2[j];
	printf("concatenated string=%s\n",concat);
	i=0;
	while(s1[i]==s2[i]&&s1[i]!='\0'&&s2[i]!='\0')
	i++;
	if (s1[i]==s2[i])
	printf("strings are equal.\n");
	else
	printf("strings are nit equal.\n");
	for(i=0;i<len1;i++) 
	    reverse[i]=s1[len1-1-i];
	reverse[len1]='\0';
	printf("reversed first string=%s\n",reverse);
	for(i=0;i<len1/2;i++)
	{
		if (s1[i]!=s1[len1-1-i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("first string is a palindrome.\n");
	else
	printf("first string is not a palindrome.\n");
	return 0;
}
		