#include "txtfind.h"

int main()
{

char user_string[WORD] = {0};

char user_input;

getword(user_string);

scanf(" %c\n", &user_input);

if(user_input=='a')
{
    print_lines(user_string);
}

else if(user_input=='b')
{
    print_similar_words(user_string);
}
return 0;
}