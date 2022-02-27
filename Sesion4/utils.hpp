#ifndef __UTILS_HPP__
#define __UTILS_HPP__

#include <iostream>
#include <windows.h>

namespace cursor
{
	//Función para colocar el cursor en cualquier posición
	void gotoxy(int y, int x){ 
		HANDLE hcon; 
		hcon = GetStdHandle(STD_OUTPUT_HANDLE); 
		COORD dwPos;
		dwPos.X=x; 
		dwPos.Y=y;
		SetConsoleCursorPosition(hcon, dwPos);
	}
	//Función para colorear un caracter en la pantalla
    void colorear(int c){ 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
	}
    //Función para ocultar el cursor en pantalla
    void ocultar_cursor(){ 
		HANDLE hcon; 
		hcon=GetStdHandle(STD_OUTPUT_HANDLE); 
		CONSOLE_CURSOR_INFO cci; 
		cci.dwSize = 50;
		cci.bVisible = FALSE;
		SetConsoleCursorInfo(hcon,&cci);
	}
}

#endif