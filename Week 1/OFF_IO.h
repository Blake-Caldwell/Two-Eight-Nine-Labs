#ifndef OFF_IO_H
#define OFF_IO_H

#include "types.h"

OFF *create_off();
void destroy_off(OFF *off);

OFF *readOFFFile(char *file_name);
void writeOFFFile(char *file_name, OFF *off);
#endif
