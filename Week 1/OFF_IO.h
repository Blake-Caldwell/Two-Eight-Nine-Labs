#ifndef OFF_IO_H
#define OFF_IO_H

#include "types.h"

OFF *create_OFF();
void destroy_OFF(OFF *off);

OFF *readOFFFile(char *file_name);
void writeOFFFile(char *file_name, OFF *off);
#endif
