#include "test_cases.h"
#include <stdio.h>

int main()
{
    printf("---Testing---\n");

    int num_failures = 0;

    if (!test_create_OFF())
    {
        printf("test_create_OFF failed\n");
        num_failures++;
    }

    if (!test_destroy_OFF())
    {
        printf("test_destroy_OFF failed\n");
        num_failures++;
    }

    if (!test_open_file_success("data/test.txt"))
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

    if (num_failures == 0)
    {
        printf("\nAll %d tests passed!\n", NUM_TESTS);
    }
    else
    {
        printf("%d of %d tests failed\n", num_failures, NUM_TESTS);
    }

    return num_failures;
}