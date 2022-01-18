#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

namespace cursor
{
	//Función para colocar el cursor en cualquier posición
	void gotoxy(int y, int x){ 
		HANDLE hcon; 
		hcon=GetStdHandle(STD_OUTPUT_HANDLE); 
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
		cci.dwSize=50;
		cci.bVisible= FALSE;
		SetConsoleCursorInfo(hcon,&cci);
	}
}

int main(){

    int* arr = new int(5);
    //cout << arr;
    int* arr2 = new int[5];
    //cout << "\n" << *arr2;
    int** arr3 = &arr;
    //cout << "\n" << *(*arr3) << "\n";
    int** arr4 = new int*[5];
    
    //cursor::gotoxy(3,3);
    int max = 100;
    int x = 0;
    cursor::ocultar_cursor();
    while(true){
    	if(x == max)
    		break;
    	cursor::gotoxy(0,x);
    	cout << " ";
    	++x;
    	cursor::gotoxy(0,x);
    	cout << "*";
    	_sleep(60);
	}
    /*for(int i = 0; i < 50; ++i){
    	cursor::colorear(i);
    	cout << "\nHola";
	}
	cursor::ocultar_cursor();*/
    
    return 0;
}
