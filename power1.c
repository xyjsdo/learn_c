#include <stdio.h>
#define MAXLINE 1000 /* the max length allowed to input */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/*print the longest line*/
main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max){
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

/* func getline: read one line to s and return its length*/
int getline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c = getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


/* func copy: copy 'from' to 'to', it supposes 'to' that is big enough*/
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}















