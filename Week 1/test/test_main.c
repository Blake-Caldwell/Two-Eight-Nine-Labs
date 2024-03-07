#include "test_cases.h"
#include <stdio.h>

int main()
{
    int num_failures = 0;

    if (!test_create_OFF())
    {
        printf("test_create_OFF failed\n");
        num_failures++;
    }

    if (!test_open_file_success("some_existing_file.txt"))
    {
        printf("test_open_file_success failed\n");
        num_failures++;
    }

    if (!test_open_file_failure("nonexistent_file.txt"))
    {
        printf("test_open_file_failure failed\n");
        num_failures++;
    }

    if (!test_readOFFFile_simple())
    {
        printf("test_readOFFFile_simple failed\n");
        num_failures++;
    }

    if (!test_writeOFFFile_success())
    {
        printf("test_writeOFFFile_success failed\n");
        num_failures++;
    }

    if (num_failures == 0)
    {
        printf("All tests passed!\n");
    }
    else
    {
        printf("%d tests failed\n", num_failures);
    }

    return num_failures;
}