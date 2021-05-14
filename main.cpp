/* C++ includes */
#include<iostream>

/* Returns whether or not the CPU follows little endian convention.
 */
bool isLittleEndian( void )
{
	/* Store 0x4568 in a 8 byte unsigned integer */
	uint32_t n = 0x4568;

	/* Obtain a byte pointer to the beginning of n */
	char *ptr = ( char* )&n;

	/* On little endian systems, 0x68 will be the first byte */
	if( ptr[ 0 ] == 0x68 )
	{
		return true;
	}

	/* On big endian systems, 0x68 will be the last byte */
	return false;
}

int main( void )
{	
	/* Output a supportive message */
	std::cout << "Your CPU architecture's endianness is: ";

	if( isLittleEndian() )
	{
		std::cout << "Little." << "\n";
	}
	else
	{
		std::cout << "Big." << "\n";
	}
	return 0;
}
