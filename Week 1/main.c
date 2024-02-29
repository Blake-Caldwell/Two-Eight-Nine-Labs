#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "OFF_IO.h"

int main()
{

    char *file_name = "data/bone.off";

    OFF *bone = readOFFFile(file_name);

    if (!bone)
        return 1;

    printf("%s\n  Vertice Count: %d\n  Face Count: %d\n--\nPress Enter..\n", file_name, bone->nvert, bone->nface);
    getchar();
    printf("----- Vertices -----\n");

    for (int i = 0; i < bone->nvert; i++)
    {
        printf("%f , %f , %f\n", bone->points[i].x, bone->points[i].y, bone->points[i].z);
    }

    printf("Press Enter for faces..\n");
    getchar();

    int temp = 0;
    for (int i = 0; i < bone->nface; i++)
    {
        temp = bone->face_idxs[i][0] + 1;

        for (int j = 0; j < temp; j++)
        {
            printf("%d ", bone->face_idxs[i][j]);
        }
        printf("\n");
    }
}
