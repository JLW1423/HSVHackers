#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#if defined(WIN32)
#include <windows.h>
#elif(UNIX)
#include <unistd.h>
#endif
int main()
{
    int MenuOpen;
    int numMA,i;
    int numFA;
    int Age;
    int Active;
    int NumA=1;
    int ViewS;
    bool flag = true;
    int hour=0, minute=0, second=0, day=1, year=1;
    char str [10] = {'0','1','2','3','4','5','6','7','8','9'};
    char *ptr;

    printf("What would you like to do?(Choose the number that corresponds with what you want to do.)");
    printf("\n1=Check The time on Mars\n");
    printf("2=Open the schedule\n");
    printf("3=Check what assignment is next.\n");
    printf("4=Check what the daily caloric for the astronauts are\n");
    printf("What would you like to do? ");
    scanf("%i", &MenuOpen);

    if(MenuOpen==1)
    {
    printf("Enter a time: ");
    scanf("%s", str);
    ptr = strtok(str, ":");
    hour = atoi(ptr);
    ptr = strtok(NULL, ":");
    minute = atoi(ptr);

    //Print program title
   printf("Mars Clock\n");

   //Day and year on mars
   printf("\nSolar Day %i on Mars, Year %i\n", day, year);

   //While flag
   while(flag){

        //Sleep
	#if defined(WIN32)
        Sleep (1000);
	#endif

	#if defined(WIN32)
	usleep(1000);
	#endif

        //Print time on mars
        printf("%.2i:%.2i:%.2i\r", hour, minute, second);

        //Flush stdout
        fflush(stdout);

        //Increment seconds
        second++;

        //If second is equal to 60
        if(second==60){

            //Add one to minute
            minute+=1;

            //Seconds equals 0
            second=0;
        }

        //If minute is equal to 60
        if(minute==60){

            //Add one to hour
            hour+=1;

            //Minute equals 0
            minute=0;
        }

        //If hour is equal to 24 AND minute is equal to 43 AND second is equal 30
        if(hour==24 && minute==43 && second==30){

            //Add one to day
            day+=1;

            //Hour equals 0
            hour=0;

            //Minute equals 0
            minute=0;

            //Second equals 0
            second=0;
        }

        //If day is equal to 687
        if (day==687){

            //Add one to year
            year+=1;

            //Day equals 1
            day=1;
        }

        }

        //If day is equal to 687
        if (day==687){

            //Add one to year
            year+=1;

            //Day equals 1
            day=1;
        }

    }

    if(MenuOpen==2)
    {
        printf("06:00 AM- Crew Wake up.\n06:30 AM- Breakfast.\n");
        printf("13:00 PM- Lunch.\n14:00PM-Exercise.\n16:00PM- End Exercise.\n19:30 PM- Dinner.\n22:30 PM- Crew Sleep.\n");
    }
    if(MenuOpen==3)
    {
        printf("Enter a time: ");
        scanf("%s", str);
        ptr = strtok(str, ":");
        hour = atoi(ptr);
        ptr = strtok(NULL, ":");
        minute = atoi(ptr);

        if(hour=="06:00")
        {
            printf("Crew wake up at 06:00.\n");
        }
        if(hour=="06:30")
        {
            printf("Breakfast Time!\n");

        }
        if(hour=="13:00")
        {
            printf("Finish breakfast. Lunch is at 13:00");
        }
        if(hour=="13:00")
        {
            printf("Lunch Time!\n");
        }
        if(hour=="14:00")
        {
            printf("Finish Lunch. You need to start exercising at 14:00");
        }
        if(hour=="14:00")
        {
            printf("Exercise Time! You need to stay fit you know.\n");
        }
        if(hour=="16:00"){
            printf("Continue exercising. You stop exercising at 16:00");
        }
        if(hour=="16:00")
        {
            printf("Ok. Time to stop exercising.\n");
        }
        if(hour=="19:30")
        {
            printf("Finish exercising. Dinner starts at 19:30");
        }
        if(hour=="19:30")
        {
            printf("Dinner Time!\n");
        }
        if(hour=="22:30"&&hour!="22:30")
        {
            printf("Finish Dinner. Bed Time is at 22:30");
        }
        if(hour=="22:00")
        {
            printf("Bed Time! You wake up at 06:00\n");
        }
        else
        {
            printf("You have no current assignment\n");
        }
    }
    if(MenuOpen==4)
    {
        printf("\nEnter in the number of Male and Female astronauts ");
    scanf("%i %i",&numMA, &numFA);

    printf("For the Male astronauts.\n");
    for(i=0;numMA>i;i=i+1)
    {
        printf("\nWhat is the age and Activity level for astronaut %i?\n  ",NumA);
        printf("(Age 19-55, Activity level: 0=Less active, 1=more active ");
        scanf("%i %i",&Age, &Active );

        if(Age>=19 && Age<=25)
        {
           if(Active==0)
           {
               printf("\nCalories per day = 2800");
           }
           if(Active==1)
           {
               printf("\nCalories per day = 3000");
           }
           else
           {
               printf("Please enter a valid Activity level.\n");
           }
        }
        if(Age>=26 && Age<=35)
        {
            if(Active==0)
            {
                printf("\nCalories per day = 2600");
            }
            if(Active==1)
            {
                printf("\nCalories per day = 3000");
            }

        }
        if(Age>=36 && Age<=45)
        {
            if(Active==0)
            {
                printf("\nCalories per day = 2600");
            }
            if(Active==1)
            {
                printf("\nCalories per day = 2800");
            }
            else
           {
               printf("Please enter a valid Activity level.\n");
           }
        }
        if(Age>=46&&Age<=55)
        {
            if(Active==0)
            {
                printf("\nCalories per day = 2400");
            }
            if(Active==1)
            {
                printf("\nCalories per day = 2800");
            }

        }
        else
        {
            printf("\n\n\n");
        }


    }

    printf("\nFor the Female astronauts.\n");
    for(i=0;numMA>i;i=i+1)
    {
        printf("\nWhat is the age and Activity level for astronaut %i?\n  ",NumA);
        printf("Example: 34 MoreActive Example: 55 LessActive");
        scanf("%i %i",&Age, &Active );
         if(Age>=19&&Age<=25)
        {
           if(Active==0)
           {
               printf("\nCalories per day = 2200");
           }
           if(Active==1)
           {
               printf("\nCalories per day = 2400");
           }
           else
           {
               printf("Please enter a valid Activity level.\n");
           }
        }
        if(Age>=26&&Age<=30)
        {
            if(Active==0)
            {
                printf("\nCalories per day = 2000");
            }
            if(Active==1)
            {
                printf("\nCalories per day = 2400");
            }
            else
           {
               printf("Please enter a valid Activity level.\n");
           }
        }
        if(Age>=31&&Age<=50)
        {
            if(Active==0)
            {
                printf("\nCalories per day = 2000");
            }
            if(Active==1)
            {
                printf("\nCalories per day = 2200");
            }
            else
           {
               printf("Please enter a valid Activity level.\n");
           }
        }
        if(Age>=51&&Age<=55)
        {
            if(Active==0)
            {
                printf("\nCalories per day = 1800");
            }
            if(Active==1)
            {
                printf("\nCalories per day = 2200");
            }
            else
            {
              printf("Please enter a valid age.\n");
            }

        }

    }

}


    return 0;
}



