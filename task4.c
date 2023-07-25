#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags
 */
int get_flags(const char *format, int *k)
{
    /* - + 0 # ' ' */
    /* 1 2 4 8 12 16 */
    int m, curr_k;
    int flags = 0;
    const char FLAGS_CH[] = { '-', '+', '0', '#', ' ', '\0' };
    const int FLAGS_ARR[] = { F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0 };

    for (curr_k = *k + 1; format[curr_k] != '\0'; curr_k++)
    {
        for (m = 0; FLAGS_CH[m] != '\0'; m++)
        {
            if (format[curr_i] == FLAGS_CH[m])
            {
                flags |= FLAGS_ARR[m];
                break;
            }
        }

        if (FLAGS_CH[m] == 0)
            break;
    }

    *k = curr_k - 1;

    return (flags);
}
