//**************************************************************************
//**************************************************************************
//**
//**	Projekt: wm counter	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 14.12.2021 17:37:48
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int i_Anzahlwm = 0;



	//Code
	for (int i = 1930; i < 2021; i=i+4)
	{
		i_Anzahlwm;
	}
	printf("Es fanden bereits %i WMs statt", i_Anzahlwm);




	getchar();
	fflush(stdin);
	getchar();
	return 0;
}