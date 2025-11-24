#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void homePage();
void clientRecord();
void clientDelete();
void clientUpdate();
void displayClientRecord();
void laptopRecord();
void laptopDelete();
void laptopUpdate();
void displayLaptopRecord();
void expertRecord();
void displayExpertRecord();
void start();
void setPass();
void updatePass();
char userPass[100];
char ch;
struct client
{
    long uid, phNo;
    char clientName[100], email[100], adress[100];
};
struct client c;

struct laptop
{
    char brand[100], model[100], processor[100], problem[1000], storage[20], battery[20];
};
struct laptop l;

struct expert
{
    long exUid, exPhNo;
    char expertName[100], exEmail[100], exAdress[100], expoProb[100];
};
struct expert e;

struct pass
{
    char constantPass[100], admin[100];
};
struct pass p;

void homePage()
{

    int choice;
    while (1)
    {
        system("clear");
        printf("                  -----------------------------------------------_-\n");
        printf("               ************************************ Welcome To Laptop Repair System ***********************************\n");
        printf("                  -----------------------------------------------_-\n\n");
        printf("                             *********************** 1. Add record of client *************************\n");
        printf("                                 *************  2. Update/Delete record of client ***************\n");
        printf("                             *********************** 3. Display Client records ***********************\n");
        printf("                             *********************** 4. Add details of laptop  ***********************\n");
        printf("                                 ************  5. Update/Delete record of laptop  ***************\n");
        printf("                             *********************** 6. Display Laptop records  **********************\n");
        printf("                             ************* 7. Expert detail who will resolve the problem *************\n");
        printf("                         *********************** 8. Update previous password *************************\n\n");
        printf("                  -----------------------------------------------_-\n");
        printf("                                   ******************** Press 0 to Exit *******************\n");
        printf("                  -----------------------------------------------_-\n\n");
        printf("                                                      Enter your choice\n");
        scanf("%d", &choice);
        if (choice == 0)
        {
            exit(1);
        }

        switch (choice)
        {
        case 1:
        {
            system("clear");
            clientRecord();
            printf("\n                                   Press any key to return Home\n");
            fflush(stdin);
            scanf("%c", &ch);
            break;
        }

        case 2:
        {
            system("clear");
            printf("           --------------------------------------------_-\n");
            printf("                   ******************* Press 1 for Deletion of Client Records ******************\n\n");
            printf("                   ******************* Press 2 for Updation of Client Records ******************\n\n");
            printf("           --------------------------------------------_-\n");
            printf("                                     Enter your choice\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                system("clear");
                clientDelete();
                printf("\n                                   Press any key to return Home\n");
                fflush(stdin);
                scanf("%c", &ch);
                break;
            }
            else if (choice == 2)
            {
                system("clear");
                clientUpdate();
                printf("\n                                   Press any key to return Home\n");
                fflush(stdin);
                scanf("%c", &ch);
                break;
            }
            else
            {
                printf("                   ******************  Invalid entered!  *****************\n");
                printf("               ******************** Do you want to continue?   *******************\n");
                printf("                     ********************  Press y/n  *******************\n");
                fflush(stdin);
                scanf("%c", &ch);
                if (ch == 'y' || ch == 'Y')
                {
                    break;
                }
                else
                {
                    exit(1);
                }
            }
            break;
        }

        case 3:
        {
            system("clear");
            printf("                          ********************  Record List of Clients  *******************\n\n");
            displayClientRecord();
            printf("\n                                   Press any key to return Home\n");
            fflush(stdin);
            scanf("%c", &ch);
            break;
        }

        case 4:
        {
            system("clear");
            laptopRecord();
            printf("\n                                   Press any key to return Home\n");
            fflush(stdin);
            scanf("%c", &ch);
            break;
        }

        case 5:
        {
            system("clear");
            printf("           --------------------------------------------_-\n");
            printf("                   ******************* Press 1 for Deletion of Laptop Records ******************\n\n");
            printf("                   ******************* Press 2 for Updation of Laptop Records ******************\n\n");
            printf("           --------------------------------------------_-\n");
            printf("                                     Enter your choice\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                system("clear");
                laptopDelete();
                printf("\n                                   Press any key to return Home\n");
                fflush(stdin);
                scanf("%c", &ch);
                break;
            }
            else if (choice == 2)
            {
                system("clear");
                laptopUpdate();
                printf("\n                                   Press any key to return Home\n");
                fflush(stdin);
                scanf("%c", &ch);
                break;
            }
            else
            {
                printf("                   ******************  Invalid entered!  *****************\n");
                printf("               ******************** Do you want to continue?   *******************\n");
                printf("                     ********************  Press y/n  *******************\n");
                fflush(stdin);
                scanf("%c", &ch);
                if (ch == 'y' || ch == 'Y')
                {
                    break;
                }
                else
                {
                    exit(1);
                }
            }
            break;
        }

        case 6:
        {
            system("clear");
            printf("                         ********************  Record List of Laptops  *******************\n\n");
            displayLaptopRecord();
            printf("\n                                   Press any key to return Home\n");
            fflush(stdin);
            scanf("%c", &ch);
            break;
        }

        case 7:
        {
            system("clear");
            printf("           --------------------------------------------_-\n");
            printf("                   ******************* Press 1 for Addition of Expert Records ******************\n\n");
            printf("                     ******************* Press 2 to Display Expert  Records ******************\n\n");
            printf("           --------------------------------------------_-\n");
            printf("                                     Enter your choice\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                system("clear");
                expertRecord();
                printf("\n                                   Press any key to return Home\n");
                fflush(stdin);
                scanf("%c", &ch);
                break;
            }
            else if (choice == 2)
            {
                system("clear");
                displayExpertRecord();
                printf("\n                                   Press any key to return Home\n");
                fflush(stdin);
                scanf("%c", &ch);
                break;
            }
            else
            {
                printf("                   ******************  Invalid entered!  *****************\n");
                printf("               ******************** Do you want to continue?   *******************\n");
                printf("                     ********************  Press y/n  *******************\n");
                fflush(stdin);
                scanf("%c", &ch);
                if (ch == 'y' || ch == 'Y')
                {
                    break;
                }
                else
                {
                    exit(1);
                }
            }
        }

        case 8:
        {
            system("clear");
            updatePass();
            break;
        }

        default:
        {
            system("clear");
            printf("                   ******************  Invalid entered!  *****************\n");
            printf("               ******************** Do you want to continue?   *******************\n");
            printf("                     ********************  Press y/n  *******************\n");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'y' || ch == 'Y')
            {
                break;
            }
            else
            {
                exit(1);
            }
        }
        }
    }
}

int main()
{
    start();
    homePage();
}

void start()
{
    system("clear");
    FILE *fp;
    fp = fopen("encryption.txt", "rb");
    if (fp == NULL)
    {
        printf("\n\n                                      ******************  No data Found!  *****************\n");
        printf("\n                                   ******************  Please Set Password!  *****************\n");
        setPass();
    }
    fread(&p, sizeof(p), 1, fp);
    printf("                  -----------------------------------------------_-\n");
    printf("                        ************************************ Hello %s ***********************************\n", p.admin);
    printf("                  -----------------------------------------------_-\n\n");
    printf("                    Please Enter Password!\n");
    fflush(stdin);
    gets(userPass);

    if (strcmp(userPass, p.constantPass) == 0)
    {
        homePage();
    }
    else
    {
        system("clear");
        printf("                                             <-><->   Wrong password!  <-><->\n");
        for (int i = 3; i >= 1; i--)
        {
            printf("                                    You got ~ %d Chances !!! Please Enter Password !!!\n", i);
            gets(userPass);
            if (strcmp(userPass, p.constantPass) == 0)
            {
                homePage();
            }
            else
            {
                continue;
            }
        }
        exit(1);
    }
    fclose(fp);
}

void setPass()
{
    system("clear");
    printf("                  -----------------------------------------------_-\n");
    printf("                          ***************************  Set Your password  *********************\n");
    printf("                  -----------------------------------------------_-\n\n");
    FILE *fp;
    fp = fopen("encryption.txt", "wb");
    if (fp == NULL)
    {
        printf("                   ****************** Something went wrong! *****************\n");
        exit(1);
    }
    printf("                  ******************  Please Enter strong Password!  *****************\n");
    fflush(stdin);
    gets(p.constantPass);

    printf("                  ******************  Please Enter your Name!  *****************\n");
    fflush(stdin);
    gets(p.admin);
    fwrite(&p, sizeof(p), 1, fp);
    fclose(fp);
    start();
}

void updatePass()
{
    printf("                  -----------------------------------------------_-\n");
    printf("                         *************************** Welcome to Update password page *********************\n");
    printf("                  -----------------------------------------------_-\n\n");
    FILE *fp;
    fp = fopen("encryption.txt", "wb+");
    if (fp == NULL)
    {
        printf("                   ****************** Something went wrong! *****************\n");
        exit(1);
    }
    printf("                  ******************  Please Enter strong Password!  *****************\n");
    fflush(stdin);
    gets(p.constantPass);

    printf("                  ******************  Please Enter your Name!  *****************\n");
    fflush(stdin);
    gets(p.admin);
    fwrite(&p, sizeof(p), 1, fp);
    fclose(fp);
    start();
}

void clientRecord()
{
    FILE *fp;
    fp = fopen("clientData.txt", "ab+");
    if (fp == NULL)
    {
        printf("                      ********************  Sorry Cannot open!  *******************\n");
        return;
    }

    printf("     ********************  Previous Records  ********************\n\n");
    displayClientRecord();

    printf("\n\n\n----------- Enter Unique Id NO ----------\n");
    scanf("%ld", &c.uid);

    printf("----------- Enter your Name ----------\n");
    fflush(stdin);
    gets(c.clientName);

    printf("----------_ Enter your Adress ----------\n");
    fflush(stdin);
    gets(c.adress);

    printf("---------- Enter Email Address ---------\n");
    fflush(stdin);
    gets(c.email);

    printf("-----------_Enter Phone No ----------_\n");
    scanf("%ld", &c.phNo);

    fwrite(&c, sizeof(c), 1, fp);
    system("clear");
    printf("\n                ******************** Records Inserted successfully ********************\n\n\n");
    fclose(fp);

    printf("                          ******************* Updated records ******************\n\n");

    displayClientRecord();
}

void displayClientRecord()
{

    FILE *fp;
    fp = fopen("clientData.txt", "rb");
    if (fp == NULL)
    {
        printf("                ********************  Sorry Cannot open!  *******************\n");
        printf("               ******************** Do you want to continue?   *******************\n");
        printf("                     ********************  Press y/n  *******************\n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'y' || ch == 'Y')
        {
            return;
        }
        else
        {
            exit(1);
        }
    }
    printf("\t\tClient UID\tName\t\tAddress\t\t\tEmail adress\t\tPhone No.\n");
    while (fread(&c, sizeof(c), 1, fp) == 1)
    {
        printf("\t\t%ld\t\t%s\t\t%s\t\t%s\t\t%ld\n", c.uid, c.clientName, c.adress, c.email, c.phNo);
    }
    fclose(fp);
}

void laptopRecord()
{
    FILE *fp;
    fp = fopen("laptopData.txt", "ab+");
    if (fp == NULL)
    {
        printf("                      ********************  Sorry Cannot open!  *******************\n");
        return;
    }

    printf("     ********************  Previous Records  ********************\n\n");
    displayLaptopRecord();

    printf("\n\n\n----------- Enter Brand Name ----------\n");
    fflush(stdin);
    gets(l.brand);

    printf("----------- Enter Model Number ----------\n");
    fflush(stdin);
    gets(l.model);

    printf("----------_ Enter Laptop Processor ----------\n");
    fflush(stdin);
    gets(l.processor);

    printf("-----------_Enter Storage(Memory) ----------_\n");
    fflush(stdin);
    gets(l.storage);

    printf("-----------_Enter Laptop Battery ----------_\n");
    fflush(stdin);
    gets(l.battery);

    printf("---------- Enter your Laptop Problem ---------\n");
    fflush(stdin);
    gets(l.problem);

    fwrite(&l, sizeof(l), 1, fp);
    system("clear");
    printf("\n                ******************** Records Inserted successfully ********************\n\n\n");
    fclose(fp);

    printf("                          ******************* Updated records ******************\n\n");

    displayLaptopRecord();
}

void displayLaptopRecord()
{
    FILE *fp;
    fp = fopen("laptopData.txt", "rb");
    if (fp == NULL)
    {
        printf("                ********************  Sorry Cannot open!  *******************\n");
        printf("               ******************** Do you want to continue?   *******************\n");
        printf("                     ********************  Press y/n  *******************\n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'y' || ch == 'Y')
        {
            return;
        }
        else
        {
            exit(1);
        }
    }
    printf("\t\tBrand name  \tModel number  \tProcessor  \tStorage\t\tBattery\t\tproblems\n");
    while (fread(&l, sizeof(l), 1, fp) == 1)
    {
        printf("\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", l.brand, l.model, l.processor, l.storage, l.battery, l.problem);
    }
    fclose(fp);
}

void clientDelete()
{
    system("clear");
    char byName[40];
    int flag = 0;
    FILE *fp, *ft;
    fp = fopen("clientData.txt", "rb");
    if (fp == NULL)
    {
        printf("                ********************  Sorry Cannot open!  *******************\n");
        return;
    }
    printf("     ********************  Previous Records  ********************\n\n");
    displayClientRecord();
    printf("\n    ********************  Enter Client name to delete entry *******************\n");
    fflush(stdin);
    gets(byName);
    ft = fopen("ClientData1.txt", "ab+");
    while (fread(&c, sizeof(c), 1, fp) == 1)
    {
        if (strcmp(byName, c.clientName) != 0)
        {
            fwrite(&c, sizeof(c), 1, ft);
        }
        else
            flag = 1;
    }
    if (flag == 0)
    {
        printf("             ********************  Sorry No such record found!  *******************\n");
        printf("             ******************** Do you want to Delete again   *******************\n");
        printf("                     ********************  Press y/n  *******************\n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'y' || ch == 'Y')
        {
            clientDelete();
        }
        else
        {
            return;
        }
    }
    else
    {
        printf("                ********************  Deleted successfully!  *******************\n");
    }
    fclose(fp);
    fclose(ft);
    remove("ClientData.txt");
    rename("ClientData1.txt", "ClientData.txt");
    printf("                   ********************  Updated Record!  *******************\n\n");
    displayClientRecord();
}

void clientUpdate()
{
    system("clear");
    int id, flag = 0;
    char ch;
    FILE *fp;
    fp = fopen("clientData.txt", "rb+");
    if (fp == NULL)
    {
        printf("                ********************  Sorry Cannot open!  *******************\n");
        return;
    }
    printf("     ********************  Previous Records  ********************\n\n");
    displayClientRecord();
    printf("\n********************  Enter Client UID to Update entry *******************\n");
    scanf("%d", &id);
    while (fread(&c, sizeof(c), 1, fp) > 0 && flag == 0)
    {
        if (c.uid == id)
        {
            flag = 1;
            system("clear");
            printf("                ********************  Following entry will be updated *******************\n");
            printf("\t\tClient UID\tName\t\tAddress\t\t\tEmail adress\t\tPhone No.\n");
            printf("\t\t%ld\t\t%s\t\t%s\t\t%s\t\t%ld\n", c.uid, c.clientName, c.adress, c.email, c.phNo);
            printf("\n\n\n                ********************  Now enter the New record *******************\n");

            printf("\n\n\n----------- Enter Updated Unique Id NO ----------\n");
            scanf("%ld", &c.uid);

            printf("----------- Enter your Updated Name ----------\n");
            fflush(stdin);
            gets(c.clientName);

            printf("----------_ Enter your Updated Adress ----------\n");
            fflush(stdin);
            gets(c.adress);

            printf("---------- Enter Updated Email Address ---------\n");
            fflush(stdin);
            gets(c.email);

            printf("-----------_Enter Updated Phone No ----------_\n");
            scanf("%ld", &c.phNo);

            fseek(fp, -(long)sizeof(c), 1);
            fwrite(&c, sizeof(c), 1, fp);
            printf("                ********************  Record updated successfully!  *******************\n");
        }
    }
    if (flag == 0)
    {
        printf("                ********************  UID Doesnot matched!  *******************\n");
        printf("             ******************** Do you want to update again   *******************\n");
        printf("                     ********************  Press y/n  *******************\n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'y' || ch == 'Y')
        {
            clientUpdate();
        }
        else
        {
            return;
        }
    }
    fclose(fp);
}

void laptopDelete()
{
    system("clear");
    char byModel[40];
    int flag = 0;
    FILE *fp, *ft;
    fp = fopen("laptopData.txt", "rb");
    if (fp == NULL)
    {
        printf("                ********************  Sorry Cannot open!  *******************\n");
        return;
    }
    printf("     ********************  Previous Records  ********************\n\n");
    displayLaptopRecord();
    printf("\n    ********************  Enter Model Number to delete entry *******************\n");
    fflush(stdin);
    gets(byModel);
    ft = fopen("laptopData1.txt", "ab+");
    while (fread(&l, sizeof(l), 1, fp) == 1)
    {
        if (strcmp(byModel, l.model) != 0)
        {
            fwrite(&l, sizeof(l), 1, ft);
        }
        else
            flag = 1;
    }
    if (flag == 0)
    {
        printf("             ********************  Sorry No such record found!  *******************\n");
        printf("             ******************** Do you want to Delete again   *******************\n");
        printf("                     ********************  Press y/n  *******************\n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'y' || ch == 'Y')
        {
            laptopDelete();
        }
        else
        {
            return;
        }
    }
    else
    {
        printf("                ********************  Deleted successfully!  *******************\n");
    }
    fclose(fp);
    fclose(ft);
    remove("laptopData.txt");
    rename("laptopData1.txt", "laptopData.txt");
    printf("                   ********************  Updated Record!  *******************\n\n");
    displayLaptopRecord();
}

void laptopUpdate()
{
    system("clear");
    int flag = 0;
    char byModel[20];
    FILE *fp;
    fp = fopen("laptopData.txt", "rb+");
    if (fp == NULL)
    {
        printf("                ********************  Sorry Cannot open!  *******************\n");
        return;
    }
    printf("     ********************  Previous Records  ********************\n\n");
    displayLaptopRecord();
    printf("\n********************  Enter Model Number to Update entry *******************\n");
    fflush(stdin);
    gets(byModel);
    while (fread(&l, sizeof(l), 1, fp) > 0 && flag == 0)
    {
        if (strcmp(byModel, l.model) == 0)
        {
            flag = 1;
            system("clear");
            printf("                ********************  Following entry will be updated *******************\n");

            printf("\t\tBrand name  \tModel number  \tProcessor  \tStorage\t\tBattery\t\tproblems\n");
            printf("\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", l.brand, l.model, l.processor, l.storage, l.battery, l.problem);

            printf("\n\n\n                ********************  Now enter the New record *******************\n");

            printf("\n\n\n----------- Enter Updated Brand Name ----------\n");
            fflush(stdin);
            gets(l.brand);

            printf("----------- Enter Updated Model Number ----------\n");
            fflush(stdin);
            gets(l.model);

            printf("----------_ Enter Updated Laptop Processor ----------\n");
            fflush(stdin);
            gets(l.processor);

            printf("-----------_Enter Updated Storage(Memory) ----------_\n");
            fflush(stdin);
            gets(l.storage);

            printf("-----------_Enter Updated Laptop Battery ----------_\n");
            fflush(stdin);
            gets(l.battery);

            printf("---------- Enter your Updated Laptop Problem ---------\n");
            fflush(stdin);
            gets(l.problem);

            fseek(fp, -(long)sizeof(l), 1);
            fwrite(&l, sizeof(l), 1, fp);
            printf("                ********************  Record updated successfully!  *******************\n");
        }
    }
    if (flag == 0)
    {
        printf("                ********************  Model Doesnot matched!  *******************\n");
        printf("             ******************** Do you want to update again   *******************\n");
        printf("                     ********************  Press y/n  *******************\n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'y' || ch == 'Y')
        {
            laptopUpdate();
        }
        else
        {
            return;
        }
    }
    fclose(fp);
}

void expertRecord()
{

    FILE *fp;
    fp = fopen("expertData.txt", "ab+");
    if (fp == NULL)
    {
        printf("                      ********************  Sorry Cannot open!  *******************\n");
        return;
    }

    printf("     ********************  Previous Records  ********************\n\n");
    displayExpertRecord();

    printf("\n\n\n----------- Enter Unique Id NO ----------\n");
    scanf("%ld", &e.exUid);

    printf("----------- Enter Expert Name ----------\n");
    fflush(stdin);
    gets(e.expertName);

    printf("----------_ Enter the Adress ----------\n");
    fflush(stdin);
    gets(e.exAdress);

    printf("---------- Enter Email Address ---------\n");
    fflush(stdin);
    gets(e.exEmail);

    printf("-----------_Enter Phone No ----------_\n");
    scanf("%ld", &e.exPhNo);

    printf("---------- Enter the laptop problem that expert will handle ---------\n");
    fflush(stdin);
    gets(e.expoProb);

    fwrite(&e, sizeof(e), 1, fp);
    system("clear");
    printf("\n                ******************** Records Inserted successfully ********************\n\n\n");
    fclose(fp);

    printf("                          ******************* Updated records ******************\n\n");

    displayExpertRecord();
}

void displayExpertRecord()
{
    FILE *fp;
    fp = fopen("expertData.txt", "rb");
    if (fp == NULL)
    {
        printf("                ********************  Sorry Cannot open!  *******************\n");
        printf("               ******************** Do you want to continue?   *******************\n");
        printf("                     ********************  Press y/n  *******************\n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'y' || ch == 'Y')
        {
            return;
        }
        else
        {
            exit(1);
        }
    }
    printf("\tExpert UID\tProblem dealer\t\tAddress\t\tEmail adress\t\tPhone No.\tProblems\n");
    while (fread(&e, sizeof(e), 1, fp) == 1)
    {
        printf("\t%ld\t\t%s\t\t\t%s\t\t%s\t\t%ld\t%s\n", e.exUid, e.expertName, e.exAdress, e.exEmail, e.exPhNo, e.expoProb);
    }

    fclose(fp);
}