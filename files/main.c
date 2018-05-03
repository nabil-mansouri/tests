#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int     pos_x;
    int     pos_y;
} Position;
int main(int argc, const char *argv[])
{
    FILE    *file;
    Position po;

   // po.pos_x = 100;
   // po.pos_y = 25;

    if (!(file = fopen("save2.bin", "rb")))
    {
        printf("error");
        exit(EXIT_FAILURE);
    };
    fread(&po, sizeof(po), 1, file);

    //fwrite(&po, sizeof(po), 1, file);
    printf("%d %d", po.pos_x, po.pos_y);
    fclose(file);
    return 0;
}