#include <unistd.h>

int number_iter(char **argv)
{
    int i = 0;
    while (**argv != 'a')
    {
        i++;
    }
    return (i);
}

int main (int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == 'a')
                write(1, "a", 1);
            else if (argv[1][i] == 'b')
                write(1, "bb", 2);
            else if (argv[1][i] == 'c')
                write(1, "ccc", 3);
            else if (argv[1][i] == 'd')
                write(1, "dddd", 4);
            else if (argv[1][i] == 'e')
                write(1, "eeeee", 5);
            else if (argv[1][i] == 'f')
                write(1, "ffffff", 6);
            else if (argv[1][i] == 'g')
                write(1, "ggggggg", 7);
            else if (argv[1][i] == 'h')
                write(1, "hhhhhhhh", 8);
            else if (argv[1][i] == 'i')
                write(1, "iiiiiiiii", 9);
            else if (argv[1][i] == 'j')
                write(1, "jjjjjjjjjj", 10);
            else if (argv[1][i] == 'k')
                write(1, "kkkkkkkkkkk", 11);
            else if (argv[1][i] == 'l')
                write(1, "llllllllllll", 12);
            else if (argv[1][i] == 'm')
                write(1, "mmmmmmmmmmmmm", 13);
            else if (argv[1][i] == 'n')
                write(1, "nnnnnnnnnnnnnn", 14);
            else if (argv[1][i] == 'o')
                write(1, "ooooooooooooooo", 15);
            else if (argv[1][i] == 'p')
                write(1, "pppppppppppppppp", 16);
            else if (argv[1][i] == 'q')
                write(1, "qqqqqqqqqqqqqqqqq", 17);
            else if (argv[1][i] == 'r')
                write(1, "rrrrrrrrrrrrrrrrrr", 18);
            else if (argv[1][i] == 's')
                write(1, "sssssssssssssssssss", 19);
            else if (argv[1][i] == 't')
                write(1, "tttttttttttttttttttt", 20);
            else if (argv[1][i] == 'u')
                write(1, "uuuuuuuuuuuuuuuuuuuuu", 21);
            else if (argv[1][i] == 'v')
                write(1, "vvvvvvvvvvvvvvvvvvvvvv", 22);
            else if (argv[1][i] == 'w')
                write(1, "wwwwwwwwwwwwwwwwwwwwwww", 23);
            else if (argv[1][i] == 'x')
                write(1, "xxxxxxxxxxxxxxxxxxxxxxxx", 24);
            else if (argv[1][i] == 'y')
                write(1, "yyyyyyyyyyyyyyyyyyyyyyyyy", 25);
            else if (argv[1][i] == 'z')
                write(1, "zzzzzzzzzzzzzzzzzzzzzzzzzz", 26); 
            else if (argv[1][i] == 'Z')
                write(1, "ZZZZZZZZZZZZZZZZZZZZZZZZZZ", 26);
            else if (argv[1][i] == 'Y')
                write(1, "YYYYYYYYYYYYYYYYYYYYYYYYY", 25);
            else if (argv[1][i] == 'X')
                write(1, "XXXXXXXXXXXXXXXXXXXXXXXX", 24);
            else if (argv[1][i] == 'W')
                write(1, "WWWWWWWWWWWWWWWWWWWWWWW", 23);
            else if (argv[1][i] == 'V')
                write(1, "VVVVVVVVVVVVVVVVVVVVVV", 22);
            else if (argv[1][i] == 'U')
                write(1, "UUUUUUUUUUUUUUUUUUUUU", 21);
            else if (argv[1][i] == 'T')
                write(1, "TTTTTTTTTTTTTTTTTTTT", 20);
            else if (argv[1][i] == 'S')
                write(1, "SSSSSSSSSSSSSSSSSSS", 19);
            else if (argv[1][i] == 'R')
                write(1, "RRRRRRRRRRRRRRRRRR", 18);
            else if (argv[1][i] == 'Q')
                write(1, "QQQQQQQQQQQQQQQQQ", 17);
            else if (argv[1][i] == 'P')
                write(1, "PPPPPPPPPPPPPPPP", 16);
            else if (argv[1][i] == 'O')
                write(1, "OOOOOOOOOOOOOOO", 15);
            else if (argv[1][i] == 'N')
                write(1, "NNNNNNNNNNNNNN", 14);
            else if (argv[1][i] == 'M')
                write(1, "MMMMMMMMMMMMM", 13);
            else if (argv[1][i] == 'L')
                write(1, "LLLLLLLLLLLL", 12);
            else if (argv[1][i] == 'K')
                write(1, "KKKKKKKKKKK", 11);
            else if (argv[1][i] == 'J')
                write(1, "JJJJJJJJJJ", 10);
            else if (argv[1][i] == 'I')
                write(1, "IIIIIIIII", 9);
            else if (argv[1][i] == 'H')
                write(1, "HHHHHHHH", 8);
            else if (argv[1][i] == 'G')
                write(1, "GGGGGGG", 7);
            else if (argv[1][i] == 'F')
                write(1, "FFFFFF", 6);
            else if (argv[1][i] == 'E')
                write(1, "EEEEE", 5);
            else if (argv[1][i] == 'D')
                write(1, "DDDD", 4);
            else if (argv[1][i] == 'C')
                write(1, "CCC", 3);
            else if (argv[1][i] == 'B')
                write(1, "BB", 2);
            else if (argv[1][i] == 'A')
                write(1, "A", 1);
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
