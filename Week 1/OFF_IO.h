#ifndef OFF_IO_H
#define OFF_IO_H

#include "types.h"

OFF *create_off();
void destroy_off(OFF *off);

int readOFFFile(char *file_name, OFF *off);
void writeOFFFile(char *file_name, OFF *off);
#endif
