#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>
/**
 * main-function: Entry point
 *
 * Return:always returns 0 always
*/
/* This function prints the given string without using printf and puts*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
