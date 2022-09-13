#include<stdio.h>
#include<string.h>

int getsplit_d_m_y(char date[20], int init, int fin)
{
    char d1[10];
    int i,dmy;
    for(i=init; i<fin; i++ )
    {
        d1[i-init]=date[i];
    }

    sscanf(d1, "%d", &dmy);
    return dmy;
}



int main()
{
    char date1[20], date2[20];
    int d1,d2,m1,m2,y1,y2;

    printf("Enter date 1 in the format dd/mm/yyyy: ");
    scanf("%s",&date1);

    d1 = getsplit_d_m_y(date1, 0, 2);
    m1 = getsplit_d_m_y(date1, 3, 5);
    y1 = getsplit_d_m_y(date1, 6, 10);


    printf("Enter date 2 in the format dd/mm/yyyy: ");
    scanf("%s",&date2);

    d2 = getsplit_d_m_y(date2, 0, 2);
    m2 = getsplit_d_m_y(date2, 3, 5);
    y2 = getsplit_d_m_y(date2, 6, 10);

    //printf("%d\t%d\t%d\n",d1,m1,y1);
    //printf("%d\t%d\t%d\n",d2,m2,y2);


    if(y1>y2)
    {
        printf("%s is earlier than %s",date2, date1);
    }
    else if(y1=y2)
    {
        if(m1>m2)
        {
            printf("%s is earlier than %s",date2, date1);
        }
        else if(m1=m2)
        {
            if(d1>d2)
            {
                printf("%s is earlier than %s",date2, date1);
            }
            else if (d1=d2)
            {
                printf("Two dates are same.");
            }
            else
            {
                printf("%s is earlier than %s",date1, date2);
            }
        }
        else
        {
            printf("%s is earlier than %s",date1, date2);
        }
    }
    else
        {
            printf("%s is earlier than %s",date1, date2);
        }


return 0;
}
