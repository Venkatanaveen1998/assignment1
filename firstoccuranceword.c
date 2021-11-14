#include<stdio.h>
#include <string.h>
 
int main()
{
    char s[100],w[100];  
    int i=0,k=0,c,index;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter word to be searched: ");
    gets(w);
    while(s[i]!='\0')
    {
    	
		if(s[i]==w[0])
    	{
    		k=1;
    		for(c=1;w[c]!='\0';c++)
    		{
    			if(s[i+c]!=w[c])
	   			{
				 k=0;
				 break;
				}
		}
	}
		if(k==1)
		{
				index=i;
		}
		i++;
		k=0;     
}
    if(k==1)
 	    printf("word %s  is first occurred at location:%d ",w,index);
    else
        printf("word is not occurred in the string ");
    return 0;
}
