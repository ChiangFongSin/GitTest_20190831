#include <stdio.h>

#define BUFFER_SIZE 10

int main( void )
{
	unsigned char ucIter = 0;
	unsigned char inputBuff[ BUFFER_SIZE ] = { 0 };

	scanf( "%s", inputBuff );
	
	for ( ucIter = 0; ucIter < BUFFER_SIZE; ucIter++ )
	{
		if ( inputBuff[ ucIter ] > 0 )
		{
			inputBuff[ ucIter ]--;
		}
	}

	printf( "%s\n", inputBuff );

	return 0;
}
