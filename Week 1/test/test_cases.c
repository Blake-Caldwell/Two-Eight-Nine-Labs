#include "test_cases.h"
#include "OFF_IO.h"

#include <stdio.h>

// Tests for OFF creation/destruction
int test_create_OFF()
{
    OFF *off = create_OFF();
    int success = (off != NULL && off->nvert == 0 && off->nface == 0 && off->nedge == 0 &&
                   off->points == NULL && off->face_idxs == NULL);

    destroy_OFF(off);
    return success;
}

int test_destroy_OFF()
{
    OFF *off = create_OFF();
    destroy_OFF(off);

    int success = (off != NULL);

    return success;
}

int test_open_file_success(const char *filename)
{
    FILE *fp = open_file(filename, "r");
    int success = (fp != NULL);
    close_file(fp);
    return success;
}

int test_open_file_failure(const char *filename)
{
    FILE *fp = open_file(filename, "r");
    return fp == NULL;
}

int test_readOFFFile_simple()
{
    // Create a temporary file with a very basic OFF structure
    FILE *temp_file = fopen("temp_test.off", "w");
    if (!temp_file)
    {
        printf("Error creating temporary test file\n");
        return 0;
    }
    fprintf(temp_file, "OFF\n3 2 0\n1 2 3\n4 1 2 3 4\n3 -1 -1 -1\n"); // Simple cube
    fclose(temp_file);

    OFF *off = readOFFFile("temp_test.off");

    int success = (off != NULL && off->nvert == 3 && off->nface == 2);

    destroy_OFF(off);
    remove("temp_test.off");
    return success;
}