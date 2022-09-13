#include <stdio.h>
#include<string.h>
int main()
{
    FILE *fileA, *fileB;
    char str[1000];
    int str_len;

    fileA=fopen("a.txt", "r");
    fileB=fopen("b.txt", "w");



    if((fileA!=NULL) && (fileB!=NULL))
    {
        printf("File found. Press ENTER to add the line in 'b.txt' file\n\n\n");
        fgets(str,1000, fileA);
        str_len=strlen(str);

        for(int i=0; i<str_len; i++)
        {
            if(str[i] == 'a' || str[i] == 'e' ||
			str[i] == 'i' || str[i] == 'o' ||
			str[i] == 'u' || str[i] == 'A' ||
			str[i] == 'E' || str[i] == 'I' ||
			str[i] == 'O' || str[i] == 'U')
			{
			    fprintf(fileB,"%c",str[i]);
			}
        }


    }
    else
    {
        printf("File not found");
    }

    fclose(fileA);
    fclose(fileB);
    return 0;
}
