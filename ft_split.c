#include <stdlib.h>

int     move_ptr(char const *s, char c, char command)
{
    int i;

    i = 0;
    if (command == 'w')
    {
        while (s[i] != c && s[i])
            i++;
    }
    else
    {
        while (s[i] == c && s[i])
            i++;
    }

    return (i);

}

int     count_words(char const *s, char c)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            count++;
            // 'w' for word
            i += move_ptr(&s[i], c, 'w');
        }
        if (s[i] == c)
            // 's' for skip
            i += move_ptr(&s[i], c, 's');
    }

    return (count);
}

char    **ft_split(char const *s, char c)
{
    char    **out;
    int     i;
    int     size;
    int     k;
    int     tmp_size;

    size = count_words(s, c);
    if (!size)
        return (NULL);
    out = malloc(sizeof(char *) * size + 1);
    if (!out)
        return (NULL);
    i = 0;
    while (*s && i < size)
    {
        if (*s == c)
            s++;
        if (*s != c)
        {
            k = 0;
            tmp_size = move_ptr(s, c, 'w');
            out[i] = malloc(tmp_size);
            if (!out[i])
                return (NULL);
            while (k < tmp_size) 
                out[i][k++] = *s++;
            out[i++][k] = 0;
        }
    }
    out[i] = 0;

    return (out);
}
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     const char *str = "A B C D E F G";
//     const char *str1 = "Hello world ";
//     printf("%s has %d words\n", str1, count_words(str1, ' '));
//     const char *str2 = "";
//     const char *str3 = "      ";
//
//     char **out = ft_split(str, 'D');
//     if (!out)
//         return (printf("Allocation failed\n"), 0);
//     i = 0;
//     while (out[i])
//     {
//         printf("%d: %s | ", i, out[i]);
//         i++;
//     }
//     printf("\n==================================\n");
//
//     char **out1 = ft_split(str1, ' ');
//     if (!out1)
//         return (printf("Allocation failed\n"), 0);
//     i = 0;
//     while (out1[i])
//     {
//         printf("%d: %s | ", i, out1[i]);
//         i++;
//     }
//     printf("\n==================================\n");
//
//     char **out2 = ft_split(str2, ' ');
//     if (!out2)
//     {
//         printf("OUT2: Allocation failed (EXPECTED)");
//         printf("\n==================================\n");
//     }
//     else
//     {
//         i = 0;
//         while (out2[i])
//             printf("%s\n", out2[i++]);
//     }
//
//     char **out3 = ft_split(str3, ' ');
//     if (!out3)
//     {
//         printf("OUT3: Allocation failed (EXPECTED)");
//         printf("\n==================================\n");
//     }
//     else
//     {
//         i = 0;
//         while (out3[i])
//             printf("%s\n", out3[i++]);
//     }
//
//     return 0;
// }
