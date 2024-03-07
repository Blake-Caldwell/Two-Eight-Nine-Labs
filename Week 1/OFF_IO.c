#include "OFF_IO.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "file_IO.h"

#define LINE_MAX 200

OFF *create_OFF()
{
    OFF *ptr = malloc(sizeof(OFF));

    if (!ptr)
    {
        printf("Failed to heap allocate OFF object");
        return ptr;
    }

    ptr->nvert = 0;
    ptr->nface = 0;
    ptr->nedge = 0;

    ptr->points = NULL;
    ptr->face_idxs = NULL;

    return ptr;
}

void destroy_OFF(OFF *off)
{
    free(off->points);

    for (int i = 0; i < off->nface; i++)
    {
        free(off->face_idxs[i]);
    }
    free(off);
}

int *handle_1(char *buff)
{
    int *ret = malloc(sizeof(int) * 2);
    sscanf(buff, "%d %d", &ret[0], &ret[1]);
    return ret;
}

int *handle_2(char *buff)
{
    int *ret = malloc(sizeof(int) * 3);
    sscanf(buff, "%d %d %d", &ret[0], &ret[1], &ret[2]);
    return ret;
}

int *handle_3(char *buff)
{
    int *ret = malloc(sizeof(int) * 4);
    sscanf(buff, "%d %d %d %d", &ret[0], &ret[1], &ret[2], &ret[3]);
    return ret;
}

int *handle_4(char *buff)
{
    int *ret = malloc(sizeof(int) * 5);
    sscanf(buff, "%d %d %d %d %d", &ret[0], &ret[1], &ret[2], &ret[3], &ret[4]);
    return ret;
}

int *handle_5(char *buff)
{
    int *ret = malloc(sizeof(int) * 6);
    sscanf(buff, "%d %d %d %d %d %d", &ret[0], &ret[1], &ret[2], &ret[3], &ret[4], &ret[5]);
    return ret;
}

int *(*handlers[5])(char *buff) = {handle_1, handle_2, handle_3, handle_4, handle_5};

OFF *readOFFFile(char *file_name)
{

    FILE *fp = open_file(file_name, "r");

    if (!fp)
        return 0;

    char buff[LINE_MAX];
    fgets(buff, LINE_MAX, fp); // get the OFF at start

    int nvert = 0, nface = 0, nedge = 0;
    fgets(buff, LINE_MAX, fp);
    sscanf(buff, "%d %d %d", &nvert, &nface, &nedge); // get total of points faces and edges

    OFF *off = create_OFF();

    if (!off)
        return 1;

    off->nvert = nvert;
    off->nface = nface;
    off->nedge = nedge;

    off->points = malloc(sizeof(vec3) * nvert);
    off->face_idxs = malloc(sizeof(int *) * nface);

    for (int i = 0; i < nvert; i++) // get all verts
    {
        fgets(buff, LINE_MAX, fp);
        sscanf(buff, "%f %f %f", &off->points[i].x, &off->points[i].y, &off->points[i].z);
    }

    int temp;
    for (int i = 0; i < nface; i++) // all faces
    {
        fgets(buff, LINE_MAX, fp);
        sscanf(buff, "%d", &temp);
        off->face_idxs[i] = handlers[temp - 1](buff); // working under the assumption face idx count <= 5
    }                                                 // will add further logic if I see a face with more than 5 (dont want to nest loops)

    close_file(fp);

    return off;
}

void writeOFFFile(char *file_name, OFF *off)
{

    FILE *write_to = open_file(file_name, "w");

    fputs("OFF\n", write_to);

    fprintf(write_to, "%d %d %d\n", off->nvert, off->nface, off->nedge);

    for (int i = 0; i < off->nvert; i++)
    {
        fprintf(write_to, "%f %f %f\n", off->points[i].x, off->points[i].y, off->points[i].z);
    }

    for (int i = 0; i < off->nface; i++)
    {
        fprintf(write_to, "%d", off->face_idxs[i][0]);
        for (int j = 1; j <= off->face_idxs[i][0]; j++)
        {
            fprintf(write_to, " %d", off->face_idxs[i][j]);
        }
        fputc('\n', write_to);
    }

    close_file(write_to);
}