#include "ft_printf.h"

static int      len_hex(unsigned int nbr)
{
        int     len;

        len = 0;
        if (!nbr)
                len++;
        while (nbr)
        {
                nbr /= 16;
                len++;
        }
        return (len);
}

int     ft_printf_xu(unsigned int xu)
{
        int     len;

        len = 0;
        len = len_hex(xu);
        if (xu >= 16)
        {
                ft_printf_xu(xu / 16);
                ft_printf_xu(xu % 16);
        }
        else if (xu < 10)
                ft_printf_c(xu + 48);
        else
                ft_printf_c(xu - 10 + 65);
        return (len);
}
