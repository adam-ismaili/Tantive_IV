#include<stdio.h>
#include "Story.h"

// Our Constructor
Story::Story() 
{

}

// Our DeConstructor
Story::~Story() 
{

}

void Story::Play()
{
    if ( Get_Fish() >= Get_Humans() ) 
    {
        printf("There were enough fish for the humans to eat!");
    }
}

// Example Setter
void Story::Set_Fish( int fish )
{
    this.fish = fish;
}
void Story::Set_Humans( int humans )
{
    this.humans = humans;
}

// Example Getter
int Story::Get_Fish() 
{
    return fish;
}
int Story::Get_Humans()
{
    return humans;
}

