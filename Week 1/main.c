#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "OFF_IO.h"

int main()
{
    OFF *bone = create_off();

    int result = readOFFFile("data/bone.off", bone);
}
