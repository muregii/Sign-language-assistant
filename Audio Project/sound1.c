#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
/*The project is meant to bridge the gap of communication
between those reliant on sign language with those
of normal speech.
This program is a prototype that can be useful if embedded into a device
that can produce sound when certain buttons are pressed.
                    CAUTION:
If ( and only if) sound does not play, it means that prior linking of files requires to be done first for new devices
Go to > Settings> Compiler> Linker settings> Other Linker options > then type -lwinmm*/

int sound1()
{
    system("color 3f");
    printf("\n\tNow playing...: Greetings \n");
    PlaySound(TEXT("HelloThere.wav"),NULL,SND_ASYNC);
    //system("pause");
    getche();
    return 0;
}

int sound2()
{
    system("color 3f");
    printf("\n\tNow playing...: Request \n");
    PlaySound(TEXT("GlassOfWater.wav"),NULL,SND_ASYNC);
    //system("pause");
    getche();
    return 0;
}
int sound3()
{
    system("color 3f");
    printf("\n\tNow playing...: Goodbye \n");
    PlaySound(TEXT("Greatday.wav"),NULL,SND_ASYNC);
    //system("pause");
    getche();
    return 0;
}

int sound4()
{
    system("color 3f");
    printf("\n\tNow playing...: Morning Greetings \n");
    PlaySound(TEXT("GoodMorning.wav"),NULL,SND_ASYNC);
    //system("pause");
    getche();
    return 0;
}
int sound5()
{
    system("color 3f");
    printf("\n\tNow playing...: Hungry? \n");
    PlaySound(TEXT("Hungry.wav"),NULL,SND_ASYNC);
    //system("pause");
    getche();
    return 0;
}
int sound6()
{
    system("color 3f");
    printf("\n\tNow playing...: What a joke! \n");
    PlaySound(TEXT("Joke.wav"),NULL,SND_ASYNC);
    //system("pause");
    getche();
    return 0;
}
int sound7()
{
    system("color 3f");
    printf("\n\tNow playing...: I Love You \n");
    PlaySound(TEXT("Love.wav"),NULL,SND_ASYNC);
    //system("pause");
    getche();
    return 0;
}
int main()
{


    int button, x, i=0;
    printf("\n***Sign language assistant** \n To communicate: \n Press button %d to say Hello: ",i+1);
    printf("\n Press button %d to request for a glass of water: ",i+2);
    printf("\n Press button %d to wish someone a great day: ",i+3);
    printf("\n Press button %d to say Good Morning: ",i+4);
    printf("\n Press button %d to ask for a meal out: ",i+5);
    printf("\n Press button %d to commend someone for a funny joke: ",i+6);
    printf("\n Press button %d to say I Love You: ",i+7);
    scanf("%d",&button);
    switch (button)
    {
    case 1:
        sound1();
        break;
    case 2:
        sound2();
        break;
    case 3:
        sound3();
        break;
    case 4:
        sound4();
        break;
    case 5:
        sound5();
        break;
    case 6:
        sound6();
        break;
    case 7:
        sound7();
        break;
    default:
        break;
    }
    printf("\nDo you want to continue? \n1.YES \n2.NO \n");
    scanf("%d",&x);
    if(x==2)
    {
        exit(0);
    }
    else
    {
        main();
    }



}
