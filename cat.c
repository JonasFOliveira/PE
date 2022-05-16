#include <stdio.h>
void concat(char *out, char *str1, int n1);
int len(char *in);

void concat(char *out, char *str1, int n1)
{
    int j = len(out);
    for (int i = 0; i < n1; i++)
    {
        out[j + i] = str1[i];
    }
}

int len(char *in)
{
    int i = 0;
    while (in[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(int argc, char *argv[])
{
    char out[101] = "";
    for (int i = 0; i < argc - 1; i++)
    {
        concat(out, argv[i + 1], len(argv[i + 1]));
    }
    puts(out);
}