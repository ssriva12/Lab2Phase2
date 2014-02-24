//NAME - Sarthak Srivastava

#include "common.h"

int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    
    strcpy(source_name, argv[1]); //fetch name as argv[1]
    source_file = init_lister(source_name, source_name, date); //passing it to function init_lister, and copying name into source_name
    
    while(true) //while loop
    {
    	get_source_line(source_file, source_name, date); //boolean function to read and print source files
    }
    return 0;
}

FILE *init_lister(const char *name, char source_file_name[], char date[])
{
   time_t timer;
	FILE *file;

	file = fopen(name, "r");

	strcpy(dte,ctime(&timer));
	
	return file;
   
}

BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    
    if (fgets(source_buffer, src_file) != NULL) //This is missing a condition
    {
		/*  Missing Code Here */
        return (TRUE);
    }
    else
    {
        return (FALSE);
    }
}

