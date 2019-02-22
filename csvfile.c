#include<stdio.h>
#include<stdlib.h>

//Creation of CSV file

int main()
{
    float x, y, z;
    int i;
    srand(getpid());


    FILE *fp;
    fp = fopen("file1.csv","w");
    fprintf(fp,"S.no.,x,y,z\n");
    for(i = 0; i < 100; i++)
    {
        x = (rand() % 100) / 2.5868f;
        y = (rand() % 100) / 2.5868f;
        z = x*y;
        fprintf(fp,"%d, %f, %f, %.10f\n", i+1, x, y, z);
    }
    printf("\nFILE SAVED!");
    fclose(fp);
    return 0;
}
