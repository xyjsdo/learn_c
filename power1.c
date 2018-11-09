#include <stdio.h>
#define MAXLINE 1000 /* the max length allowed to input */

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

/*print the longest line*/
int main()
{
    int len;
    int max;
    int i;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = mygetline(line, MAXLINE)) > 0)
        if (len > max){
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s\n", longest);
    return 0;
}

/* func mygetline: read one line to s and return its length*/
/* this function counts the chars in this line and return the number of these chars */

int mygetline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c = getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;/*return the number of this line*/
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i] != '\0'))
        ++i;
}
