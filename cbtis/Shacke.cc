/*Definicion de Librerias*/
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>


/*Deinicion de Teclas*/
#define ARRIBA     72
#define IZQUIERDA  75
#define DERECHA    77
#define ABAJO      80
#define ESC        27

/*Definicion de Variavles Globlales*/
int cuerpo[200][2];
int n = 1;
int tam = 7;
int vidas =1;
char tecla;
int x = 10;int y = 12;
int  dir = 3;
int xc = 30, yc = 15;
int velocidad = 175;
int score = 0;
int h = 1;
void Ocultarcursor()
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 2;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hCon,&cci);
}
void gotoxy (int x, int y)
{
    HANDLE hCon ;
    COORD dwPos;

    dwPos.X = x ;
    dwPos.Y = y ;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}

void pintar(){

    for (int i = 2; i < 78; i++){
        gotoxy (i,3); printf ("%c",219);
        gotoxy (i,23); printf ("%c",219);

    }
    for (int i = 4; i < 23; i++){
        gotoxy (2,i); printf ("%c",219);
        gotoxy (77,i); printf ("%c",219);
    }
    gotoxy (2,3); printf ("%c",178);
    gotoxy (2,23); printf ("%c",178);
    gotoxy (77,3); printf ("%c",178);
    gotoxy (77,23); printf ("%c",178);
}
void guardar_posicion(){

    cuerpo [n][0] = x ;
    cuerpo [n][1] = y ;
    n++;
    if (n == tam) n = 1 ;

}

void dibujar_cuerpo(){
    for ( int  i =1 ; i < tam ; i++){

        gotoxy (cuerpo[i][0], cuerpo [i][1]); printf("%c%",111);

    }
}
void borrar_cuerpo (){
        gotoxy (cuerpo[n][0], cuerpo [n][1]); printf(" ");
}


void teclear(){
    if(kbhit()){
            tecla = getch();
            switch (tecla){
            case ARRIBA :
              if (dir != 2)
                dir = 1;
                break;
            case ABAJO :
              if(dir!= 1)
                dir=2;
                break;
            case DERECHA :
                if (dir != 4)
                    dir = 3;
                break;
            case IZQUIERDA :
                if (dir != 3)
                    dir = 4;
                break;
            }

   }

}
void cambiar_velocidad(){
    if(score == h*10){
        velocidad -=15;
        h++;


    }

}
void comida () {
    if( x == xc && y == yc ){
            xc = (rand()%73) + 4;
            yc = (rand()%19) + 4;
            tam++;
            score +=5;
            gotoxy (xc,yc); printf ("%c",184);
            cambiar_velocidad();
    }

}
bool game_over (){
    if( y == 3 || y == 23 || x == 2 || x == 77) return false;
    for ( int j = tam -1; j > 0; j--){
        if (cuerpo[j][0] == x && cuerpo [j][1] == y)
            return false;
    }
    return true;



}
void puntos(){
    gotoxy (3,1); printf ("SCORE %d",score);
    gotoxy(15,1); printf ("ESC == EXIT");


}
void mensaje_inicio(){
	system("color d9");
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t");
	Sleep(60*10);
	printf("ES");
	Sleep(60*5);
	printf(" HORA");
	Sleep(60*5);
	printf(" DE");
	Sleep(60*5);
	printf(" LA ");
	Sleep(60*10);
	printf(" AVENTURA ");
	Sleep(60*15);
	system("cls");
}







    int main (){



        Ocultarcursor();
        mensaje_inicio();
        system("COLOR 0A");
        gotoxy (45,1);
        printf("%c%",003);
        gotoxy (46,1);
        printf("  =  %d",vidas);
        pintar();
        gotoxy (xc,yc);printf ("%c",184);


    while(tecla != ESC && game_over()){


        borrar_cuerpo();

        guardar_posicion();
        dibujar_cuerpo();


        puntos ();

        comida ();


        teclear ();
        teclear ();
        teclear ();
        teclear ();
        if ( dir == 1) y --;
        if ( dir == 2) y ++;
        if ( dir == 3) x ++;
        if ( dir == 4) x --;



        Sleep(velocidad);


}

if(tecla = ESC && !game_over()){

    system("cls");

    gotoxy(20,10);

    printf ("  G   A   M   E      O   V   E   R  ");

    gotoxy(20,13); printf ("               SCORE   %d",score);


}
    pintar ();

    system("Pause(null)");

    return 0;



}
