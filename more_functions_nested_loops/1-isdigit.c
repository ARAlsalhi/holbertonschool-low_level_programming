#include "main.h"

/**
_isgigit- check for digit (0 to 9)
*@C the chaaracter to check
*
*return 1 if c is a digit , 0 otherwise
*/
int _isdigit(int c)
{
		if(c >= '0' && c <= '9')
			return (1);
		else return (0);
}
