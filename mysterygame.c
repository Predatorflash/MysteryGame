#include<stdio.h>
#include<conio.h>
#include<windows.h>

#define UP 8
#define DOWN 2
#define LEFT 4
#define RIGHT 6
int controlhelp();
int exitgame();
int room1();
int eroom();
int move,roomno,firstaid=0,key=0,ring=0,loop=0,switch1,loop1;
char controls,start,decide,decide1;
main()
{
    printf("Welcome to the adventure!!\n");
    Sleep(5000);
    system("cls");
    printf("For controls\tTo exit\t\tTo continue\n");
    printf("Enter H    \tEnter X    \tEnter C\n");
    while(controls!='H'||controls!='X'||controls!='C')
    {
        controls=getche();
        if(controls=='H')
        {
            controlhelp();

        }
        if (controls=='X')
        {
            exitgame();
        }
        if(controls=='C')
        {
            eroom();
        }
        else
        {


            printf("Invalid entry ..Please try again\n");
            Sleep(4000);
            system("cls");
        }

    }
}

int eroom()
{
    system("cls");
    printf("You Entered a mysterious room..\n");
    Sleep(4000);
    system("cls");
    printf("You Climbed Downstairs ....\n");
    Sleep(4000);
    system("cls");


    room1();
}
int room1()
{
    printf("You are standing in middle of a room\n");
    printf("You See Four Doors in the room\n");
    Sleep(4000);
    printf("What is your move??\n");
    Sleep(4000);


    while(move!=UP||move!=DOWN||move!=LEFT||move!=RIGHT)
    {
        scanf("%d",&move);
        system("cls");
        if(move==UP)
        {
            printf("You enter a room full of poisonous snakes...\n");
            Sleep(4000);
            printf("TO go back press DOWN\n");
            Sleep(4000);
            decide=getchar();
            Sleep(4000);
            printf("You are locked in the room ..!\n");
            Sleep(4000);
            printf("You are bitten by snake!!!!\n");
            Sleep(4000);
            printf("\nYou are DEAD!\n");
            Sleep(4000);
            system("cls");

            printf("To start the game.Press 'S'\n");
            printf("To exit the game press 'X'\n");
            printf("To view controls.press 'H'");
            while(start!='S'||start!='X'||start!='H')
            {
                start=getchar();
                if(start=='S')
                {
                    room1();
                }
                if(start=='X')
                {
                    exitgame();
                }
                if(start=='H')
                {
                    controlhelp();
                    room1();
                }
                printf("Invalid Entry ..PLease Try Again\n");
                Sleep(4000);
                system("cls");
            }
        }


        if (move==DOWN)
        {
            printf("You Enter that room and you find a bleeding troll\n");
            Sleep(4000);
            printf("\nIf you Want to talk to the troll");
            printf("\nEnter 'Y' or 'N'\n");
            decide=-1;
            while(decide!='Y'||decide!='N')
            {
                scanf("%c",&decide);
                Sleep(5000);

                if(decide=='Y')
                {
                    if(firstaid==1)
                    {
                        printf("\nThe troll gets healed and in return he gives you the key to pass through");
                        key=1;
                        printf("\nAnd you go back to the room\n");
                        room1();
                    }
                    if (loop==1)
                    {
                        printf("You again talk to troll\n");
                        Sleep(4000);
                        printf("Seeing your face troll gives you a ring \n");
                        Sleep(4000);
                        printf("You ask him ..What is this?");
                        Sleep(4000);
                        printf("\nHe replies that the ring is a tailsman\n");
                        ring=1;
                    }
                    if(loop==0)
                    {


                        printf("You talk to the troll\n");
                        Sleep(4000);
                        printf("He says he and his teammates were attacked by a beast\n");
                        Sleep(4000);
                        printf("luckily he escaped from dragon\n");
                        Sleep(4000);
                        printf("You decide to help the troll and you look for medicine\n");
                        loop++;

                    }
                    Sleep(4000);
                    printf("And you go back to the room\n");
                    Sleep(4000);
                    system("cls");
                    room1();
                }
                else if(decide=='N')
                {
                    printf("You ignore the troll and go back to the room\n");
                    room1();
                }
                else
                {

                    printf("Invalid entry..Please try again\n");
                    Sleep(4000);
                    system("cls");
                }
            }

        }
        if(move==LEFT)
        {
            Sleep(4000);
            printf("You see a magical wall\n");
            Sleep(4000);
            printf("If you want to go near the magical wall\n");
            printf("Press Y \n");
            printf("To come out of \n");
            printf("Press N\n");
            decide=0;
            do
            {
                decide=getchar();
                system("cls");
                if(decide=='Y')
                {
                    printf("You approach the wall\n");
                    Sleep(4000);
                    printf("You stare at wall\n");
                    Sleep(4000);
                    printf("It says \"The one who solve he is allowed otherwise will be killed\"");
                    Sleep(4000);
                    printf("You see an script it says\"What is sum of first ten numbers\"");
                    Sleep(4000);
                    printf("Enter a number\n");
                    scanf("%d",&roomno);
                    if(roomno==55)
                    {

                        printf("You say loud 55 is your answer\n");
                        Sleep(4000);
                        printf("You find the first magical lock is opened\n");
                        Sleep(4000);
                        system("cls");
                        printf("You find another sentence ..It reads");
                        Sleep(4000);
                        printf("1+0*1+1+1 is");
                        Sleep(4000);
                        printf("Enter the answer\n");
                        scanf("%d",&roomno);
                        if(roomno==3)
                        {
                            if(ring==1)
                            {


                                printf("You say 3 is your number\n");
                                Sleep(4000);
                                printf("Nothing happens ..");
                                Sleep(4000);
                                printf("\nYou use the ring to open the lock");
                              Sleep(4000);
                                printf("\nLuckily it opens\n");
                                Sleep(2000);
                                printf("You find the second magical lock is opened\n");
                                system("cls");
                            }
                            else
                            {
                                printf("You say 3 is your number\n");
                                Sleep(4000);
                                printf("Nothing happens ..");
                                system("cls");
                                Sleep(4000);
                                printf("You find a open cave\n");
                                Sleep(4000);
                                printf("To enter the cave ..Press 'Y' else 'N'\n");
                                decide=-1;
                                do
                                {
                                    decide=getchar();
                                    if(decide=='Y')
                                    {
                                        printf("You enter the cave\n...You find a magical Platform\n");
                                        Sleep(4000);
                                        printf("To stand on platform ..Press 'Y' else 'N'");
                                        Sleep(4000);
                                        decide1=-1;
                                        do
                                        {
                                            decide1=getchar();
                                            system("cls");
                                            if(decide1=='Y')
                                            {
                                                printf("You stand on the platform\n");
                                                printf("You suddenly appear in the original room");
                                                room1();

                                            }
                                            if(decide1=='N')
                                            {
                                                printf("You inspect the place..Suddenly the place gets collapsed \n");
                                                printf("\nYou are DEAD!\n");

                                                Sleep(4000);
                                                system("cls");
                                                printf("To start the game.Press 'S'\n");
                                                printf("To exit the game press 'X'\n");
                                                printf("To view controls.press 'H'");
                                                while(start!='S'||start!='X'||start!='H')
                                                {
                                                    start=getchar();
                                                    if(start=='S')
                                                    {
                                                        room1();
                                                    }
                                                    if(start=='X')
                                                    {
                                                        exitgame();
                                                    }
                                                    if(start=='H')
                                                    {
                                                        controlhelp();
                                                        room1();
                                                    }
                                                    printf("Invalid Entry ..PLease Try Again\n");
                                                    Sleep(4000);
                                                    system("cls");

                                                }

                                            }
                                            printf("Invalid Entry ..Please Try Again\n");
                                            Sleep(4000);
                                            system("cls");
                                        }
                                        while(decide1!='Y'||decide1!='N');
                                    }
                                    if(decide=='N')
                                    {

                                    }
                                }
                                while(decide!='Y'||decide!='N');
                            }
                            system("cls");
                            printf("It asks what is the next number in the series 2,4,8,16,?\n");
                            scanf("%d",&roomno);
                            if(roomno==32)
                            {
                                printf("You find the all magical locks are opened\n");
                                Sleep(4000);
                                printf("You find a treasure chest\n");
                                Sleep(4000);
                                printf("To look into treasure chest press Y else N\n");
                                decide=-1;
                                do
                                {
                                    decide=getchar();
                                    system("cls");
                                    if(decide=='Y')
                                    {

                                        printf("You have opened treasure box\n");
                                        Sleep(4000);
                                        printf("You find many gold coins and a magical potion\n");
                                        Sleep(4000);
                                        printf("You take them and go back to the room\n");
                                        firstaid=1;
                                        room1();
                                    }
                                    if(decide=='N')
                                    {
                                        printf("You come back to the room\n");
                                        room1();
                                    }
                                    printf("Invalid entry...PLease try again\n");
                                    Sleep(4000);
                                    system("cls");
                                }
                                while(decide!='Y'||decide!='N');
                            }
                            else
                            {
                                printf("You gave the wrong answer says the wall\n");
                                Sleep(4000);
                                printf("You were crushed by the gaint log and you were killed\n");
                                printf("\nYou are DEAD!\n");
                                Sleep(4000);
                                system("cls");
                                printf("To start the game.Press 'S'\n");
                                printf("To exit the game press 'X'\n");
                                printf("To view controls.press 'H'");
                                while(start!='S'||start!='X'||start!='H')
                                {
                                    start=getchar();
                                    if(start=='S')
                                    {
                                        room1();
                                    }
                                    if(start=='X')
                                    {
                                        exitgame();
                                    }
                                    if(start=='H')
                                    {
                                        controlhelp();
                                        room1();
                                    }
                                    printf("Invalid Entry ..PLease Try Again\n");
                                    Sleep(4000);
                                    system("cls");

                                }
                            }
                        }
                        else
                        {
                            printf("You gave the wrong answer says the wall\n");
                            Sleep(4000);
                            printf("You were killed by hulk \n");
                            printf("\nYou are DEAD!\n");
                            Sleep(4000);
                            system("cls");
                            printf("To start the game.Press 'S'\n");
                            printf("To exit the game press 'X'\n");
                            printf("To view controls.press 'H'");
                            while(start!='S'||start!='X'||start!='H')
                            {
                                start=getchar();
                                if(start=='S')
                                {
                                    room1();
                                }
                                if(start=='X')
                                {
                                    exitgame();
                                }
                                if(start=='H')
                                {
                                    controlhelp();
                                    room1();
                                }
                                printf("Invalid Entry ..PLease Try Again\n");
                                Sleep(4000);
                                system("cls");

                            }
                        }
                    }
                    else
                    {
                        printf("You gave the wrong answer says the wall\n");
                        Sleep(4000);
                        printf("You were killed by cannibals\n");
                        printf("\nYou are DEAD!\n");
                        Sleep(4000);
                        system("cls");
                        printf("To start the game.Press 'S'\n");
                        printf("To exit the game press 'X'\n");
                        printf("To view controls.press 'H'");
                        while(start!='S'||start!='X'||start!='H')
                        {
                            start=getchar();
                            if(start=='S')
                            {
                                room1();
                            }
                            if(start=='X')
                            {
                                exitgame();
                            }
                            if(start=='H')
                            {
                                controlhelp();
                                room1();
                            }
                            printf("Invalid Entry ..PLease Try Again\n");
                            Sleep(4000);
                            system("cls");

                        }
                    }
                }


                if (decide=='N')
                {
                    printf("You go out of the room");
                    Sleep(4000);
                    room1();

                }
                printf("Invalid Entry ..PLease Try Again\n");
                Sleep(4000);
                system("cls");
            }
            while(decide!='Y'||decide!='N');
        }

        if(move==RIGHT)
        {
            if(key==1)
            {


                printf("You have Entered a magical room where you find 3 switches\n");
                Sleep(4000);
                printf("To press the switch press 1 ,2,3 respectively\n");
                decide=0;
                do
                {


                    do
                    {
                        switch1=0;
                        scanf("%d",&switch1);
                        system("cls");
                        if(loop1==0)
                        {


                            switch(switch1)
                            {
                            case 1 :
                            {
                                printf("You have pressed first switch\n");
                                Sleep(4000);
                                printf("The third and second lock has opened\n");
                                Sleep(4000);
                                loop1=1;
                                break;
                            }
                            case 2 :
                            {
                                printf("You have pressed second switch\n");
                                Sleep(4000);
                                printf("The third lock has opened\n");
                                Sleep(4000);
                                loop1=1;
                                break;
                            }
                            case 3 :
                            {
                                printf("You have pressed third switch\n");
                                Sleep(4000);
                                printf("The first lock has opened \n");
                                Sleep(4000);
                                loop1=1;
                                break;
                            }

                            }

                        }
                        else
                        {
                            system("cls");
                            switch(switch1)
                            {
                            case 1 :
                            {
                                printf("You have pressed first switch\n");
                                Sleep(4000);
                                printf("The first lock has opened\n");
                                Sleep(4000);

                                break;
                            }
                            case 2 :
                            {
                                printf("You have pressed second switch\n");
                                Sleep(4000);
                                printf("The first and second lock has opened\n");
                                Sleep(4000);
                                break;
                            }
                            case 3 :
                            {
                                printf("You have pressed third switch\n");
                                Sleep(4000);
                                printf("The second and third lock has opened \n");
                                Sleep(4000);

                                break;
                            }

                            }
                        }
                        printf("To go again press 'Y' else press 'N'\n");
                        Sleep(4000);
                        decide=getchar();
                        system("cls");
                    }
                    while(switch1!=1||switch1!=2||switch1!=3);
                }
                while(decide!='Y'||decide!='N');
                printf("You find an elevator ,stairs and portal behind these locks\n");
                Sleep(4000);
                printf("To go on elevator press 1\n");
                printf("To go on stairs press 2\n");
                printf("To go on portal press 3\n");
                move=0;
                do
                {
                    scanf("%d",&move);
                    system("cls");
                    if(move==1)
                    {
                        printf("You enter the elevator\n");
                        Sleep(4000);
                        printf("The elevator starts goin down...Sudennly the elevator is stopped \n");
                        Sleep(4000);
                        printf("You see many zombie entering your way\n");
                        Sleep(4000);
                        printf("You were eaten by zombie......\n");
                        Sleep(4000);
                        printf("\nYou are DEAD!\n");
                        Sleep(4000);
                        printf("To start the game.Press 'S'\n");
                        printf("To exit the game press 'X'\n");
                        printf("To view controls.press 'H'");
                        while(start!='S'||start!='X'||start!='H')
                        {
                            start=getchar();
                            if(start=='S')
                            {
                                room1();
                            }
                            if(start=='X')
                            {
                                exitgame();
                            }
                            if(start=='H')
                            {
                                controlhelp();
                                room1();
                            }
                            printf("Invalid Entry ..PLease Try Again\n");
                            Sleep(4000);
                            system("cls");

                        }

                    }
                    if(move==2)
                    {
                        printf("You go by stairs\n");
                        Sleep(4000);
                        printf("You find a way out ....\n");
                        Sleep(4000);
                        printf("You have completed the game\n");
                        printf("Congrats\n");
                        Sleep(4000);
                        exit(0);
                        getch();
                    }
                    if(move==3)
                    {
                        printf("You enter the portal\n");

                        move=0;
                        roomno=0;
                        firstaid=0;
                        key=0;
                        ring=0;
                        loop=0;
                        eroom();
                    }

                }
                while(move!=1||move!=2||move!=3);
            }
            else
            {
                printf("The door is locked\n");
                room1();
            }
        }

    }
}


int exitgame()
{
    printf("Thank you for playing\n");
    Sleep(4000);
    system("cls");

    getch();
    exit(0);
}
int controlhelp()
{
    printf("Up=8,Down=2,Left=4,Right=6\n");
    Sleep(4000);
    printf("[Please Keep the caps lock on]\n");
    Sleep(4000);
    system("cls");

}
