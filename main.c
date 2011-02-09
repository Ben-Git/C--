#include	<unistd.h>

void*		malloc(unsigned int size)
{
    return(sbrk(size));
}

int		main(void)
{
  
}
