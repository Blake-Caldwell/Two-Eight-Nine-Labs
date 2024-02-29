#ifndef OFF_IO_H
#define OFF_IO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"

OFF *create_off();
void destroy_off(OFF *off);

void readOFFFile(char *file_name, OFF *off);
void writeOFFFile(char *file_name, OFF *off);
#endif
