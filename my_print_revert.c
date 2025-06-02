#include <string.h>

void print_char(char c);

void my_print_revert(char *to_revert)
{
    int index = 0;
    int len = strlen(to_revert);

    for (index = len - 1; index >= 0; index--)
        print_char(to_revert[index]);
}
