// Binary Files
/*
Binary files are very similar to arrays of structures, except the structures are
in a disk-file rather than an array in memory. Binary files have two features
that distinguish them from text files:


*/

#include <stdio.h>
struct rec
{
    int x, y, z;
};
int main() // fread()
{
    int c;
    FILE *fp;
    struct rec r;
    fp = fopen("binaryfile.bin", "rb");
    if (!fp)
    {
        printf("Unable to open file!");
        return 1;
    }
    for (c = 1; c <= 10; c++)
    {
        fread(&r, sizeof(struct rec), 1, fp);
        printf("%d\n", r.x);
    }
    fclose(fp);
    return 0;
}

#include <stdio.h>
struct rec
{
    int x, y, z;
};
int main() //fwrite()
{
    int c;
    FILE *fp;
    struct rec r;
    fp = fopen("binaryfile.bin", "wb");
    if (!fp)
    {
        printf("Unable to open file!");
        return 1;
    }
    for (c = 1; c <= 10; c++)
    {
        r.x = c;
        fwrite(&r, sizeof(struct rec), 1, fp);
    }
    fclose(fp);
    return 0;
}