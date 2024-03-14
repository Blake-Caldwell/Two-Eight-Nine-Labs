#ifndef FILE_IO.H
#define FILE_IO .H

#include "stdio.h"

FILE *open_file(char *f_name, char *mode);
void close_file(FILE *fp);

#endif