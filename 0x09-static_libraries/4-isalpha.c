#include "main.h"
/**
*_isalpha - checks whether a character is alphabetical
*@c: character to be checked
*Return: Always return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
