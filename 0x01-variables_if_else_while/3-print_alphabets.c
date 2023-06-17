#include <stdio.h>
/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alp[52] = &quot;abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ&quot;;
int i;
for (i = 0; i &lt; 52; i++)
{
putchar(alp[i]);
}
putchar(&#39;\n&#39;);
return (0);
}
}
