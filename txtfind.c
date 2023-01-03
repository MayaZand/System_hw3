#include "txtfind.h"

//
int contains(char *str1, char *str2)
{
if (strstr(str1, str2) != NULL) 
{
    return 1;
}
return 0;
}

int similiar(char *s, char *t, int n)
{
char temp[WORD]={0};
char orginial[WORD]={0};
strcpy(orginial, t);
int count =0;
int i=0;
    while(*s!='\0'||*t!='\0')
    {
        if(*s==*t)
        {
            temp[i]=*s;
            t++;
            i++;
        }
        else
        {
            count++;
        }
        s++;
    }
    while(*s!='\0')
    {
        count++;
        s++;
    }

    if(strcmp(temp, orginial)==0)
    {
        if(count==n&&*s=='\0')
        {
            return 1;
        }
    }
    return 0;
}




int getLine(char s[])
{
    int i=0;

    while(scanf("%c", &s[i]) !=EOF)
    {
        if (s[i]=='\n')
        {
            s[i]=='\0';
            break;
        }
        i++;
    }

    return i; 
}



int getword(char w[])
{
    int i=0;
    while(scanf("%c",&w[i])!=EOF)
    {
        if(w[i]=='\n'||w[i]=='\t'||w[i]== ' ')
        {
            w[i]='\0';
            break;   
        }
        i++;
    }
    return i;
}


void print_lines(char *str)
{
    char curr_line[LINE] = {0};


    while(getLine(curr_line)!=0)
    {
        if(contains(curr_line, str)==1)
        {
            printf("%s",curr_line);
        }
    }
}

void print_similar_words(char *str)
{
    char curr_word[WORD]={0};

    while(getword(curr_word)!=0)
    {
        if(similiar(curr_word, str, 1)==1||similiar(curr_word, str, 0)==1)
        {
            printf("%s\n", curr_word);
        }
    }
}










