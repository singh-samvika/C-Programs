#include <stdio.h>
#include <string.h>
int main()
{
    char s[200], s2[200] ;
    printf("Enter a string");
    scanf("%s", s);
    printf("Enter a substring");
    scanf("%s", s2);
    int count=0;
    int slen=strlen(s);
    int s2len=strlen(s2);
    for(int i=0; i<=slen-s2len; i++)
    {
        int j;
        for(j=0;j<s2len;j++)
        {
            //if(s[i+j]!=s2[j])
            //break;
            if(s[i+j]==s2[j])
            count++;
        }
    }
    //if(j==s2len)
    //count++;
    printf("Substring occurs: %d", count);
    return 0;


}