#include "rowparser.h"

int main( int argc, char **argv )
{

	RowParser row( "./famous_people.csv", ",", "\n", false, true );

	while( row.ParseNextRow() )
	{
		printf("Occupation %10.10s   |   Who : %s %s\n", 
			row["fame"].c_str(), row["fname"].c_str(), row["lname"].c_str() );
	}

	return 0;
}



