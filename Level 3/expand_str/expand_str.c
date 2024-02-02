#include <unistd.h>

int main(int argc, char **argv)
{
    char *str;
    int i = 0;

    if (argc == 2)
    {
        str = argv[1];
        while (str[i] != '\0')
        {
            while (str[i] == ' ' || str[i] == '\t')
                i++;
            while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
            {    
                write(1, &str[i], 1);
                i++;
            }
            while (str[i] == ' ' || str[i] == '\t')
                i++;
            if (str[i] != '\0')
                write(1, "   ", 3);         
        }
    }
    write(1, "\n", 1);
}
