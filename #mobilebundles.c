#include <stdio.h>

int main ()
{
    int choice;

    printf("select data bundle:\n"
       " 1.100MB @ KES50\n"
        "2.500MB @ KES 200\n"
       " 3.1GB @ KES 350\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            printf("You selected 100MB cost= KES 50\n");
            break;

            case 2:
            printf("You selected 500MB cost= KES200\n");
                break;
            

            case 3:
            printf("You selected 1GB cost=KES 350\n");
                break;
            

            case 4:
            printf("You selected 2GB cost=KES 600\n");
            break;
        

        default:
        printf("invalid choice");

        }

    return 0;
}