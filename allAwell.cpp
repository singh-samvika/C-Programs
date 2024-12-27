#include <stdio.h>
#include <string.h>
int main()
{  //main function
    char s[500], a[500], s2[500], c;
    int len,i,t=0,d=0;
    printf("Enter a string ");
    scanf("%s", s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
       if(s[i]=='a')
       {
          a[t] = s[i];
          t=t+1;

       }
       else
       {
          s2[d] = s[i];
          d=d+1;
       }
    }
    strcat(a,s2);
    printf("%s\n", a);
    return 0;


}