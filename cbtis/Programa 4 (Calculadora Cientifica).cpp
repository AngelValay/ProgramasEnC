#include <iostream>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

double ex        (float);
float  fac       (float);
float  rad       (float);
float  seno      (float);
float  cosen     (float);
float  tan       (float);
float  raiz      (float,float);
float  pot       (float,float);
float  deFra     (float,float);
float  logaritmo (float,float);

#define pi 3.14159265359
#define expo 2.71828182846

#ifndef GOTOXY_H
#define GOTOXY_H


using namespace std;


int sig(int x){
    if(x%2==0)
        return 1;
    else
        return -1;
}
float pot(float x,float n){
    if(n==0)
        return 1;
    return x*pot(x,n-1);
}
float fac(float x){
    if(x==0)
        return 1;
    return x*fac(x-1);
}
float rad(float x){
    double y=0;
    int z,n;
    printf("\n 1.-Radianes\n 2.-Grados\n\n:");
    scanf("%d",&n);
    if(n==1){
		y=x*180/pi;

		z=y;
	    y=y-z;
	    z=z%180;
	    y=z+y;

	    y=y*pi/180;
        return y;
    }
    else{
    	y=x;
 		if(y>180){
	 		z=y;
		    y=y-z;
		    z=z%180;
		    y=z+y;
		 }
        return y*pi/180;
    }
}
float seno(float x){
    int i,j,n=10;
    float num,den,s,sen=0;
    x=rad(x);

    for(i=0;i<n;i++){
        j=2*i+1;
        num=pot(x,j);
        den=fac(j);
        s=sig(i);
        sen+=(num/den)*s;
    }
    return sen;
}
float cosen(float x){
   int i,j,n=10;
   double num,den,s,cos=0;
   x=rad(x);
   for(i=0;i<n;i++){
   		j=i*2;
	    num=pot(x,j);
	    den=fac(j);
	    s=sig(i);
	    cos+=(num/den)*s;
   }
   return cos;
}
float tan(float x){
  int i,j,n=10;
    float num,den,s,sen=0,cos=0;
    x=rad(x);
    for(i=0;i<n;i++){
        j=2*i+1;
        num=pot(x,j);
        den=fac(j);
        s=sig(i);
        sen+=(num/den)*s;

        j=i*2;
        num=pot(x,j);
        den=fac(j);
        s=sig(i);
        cos+=(num/den)*s;
    }
    x=sen/cos;
    return x;
}
double ex(float x){
    int i,n=35;
    double num,den,e=0;
	if(x>13){
		printf("\nMatch Error\n");
		return 0;
	}
    for(i=0;i<n;i++){
        num=pot(x,i);
        den=fac(i);
        e+=num/den;
    }
    return e;
}
float logaritmo(float x,float y){
	float i,j;
	float log=0;
	for(i=1;log<y;i++){
		log=1;
		for(j=0;j<i;j++)
			log*=x;
	}
	i--;
	j=i;
	if(log>y){
		log=0;
		j--;
		for(i=j;log<y;i+=0.01){
			log=0;
			log=deFra(i,x);
		}
		i-=0.02;
	}
	return i;
}
float raiz(float x,float y){
	float base=0,j,a=1,i,k;
	for( j=a;base<x;j+=a){
		base=0;
		base=pot(j,y);
	}
	j-=a;
	i=j;
	if(base>x){
		j-=a;
		base=0;
		a=0.0001;

		for( i=j+a;base<x;i+=a){
			base=1;
			for(k=1;k<=y;k++)
				base*=i;
		}
		i-=a;
	}
	return i;
}
float deFra(float x,float z){
	int a,i,j,den=100;

	a=x*100;
	den=100;

	for(j=0;j<10;j++){

		for(i=1;i<100;i++){
			if(a%i==0 && den%i==0){
				a/=i;
				den/=i;
			}
		}
	}
	z=pot(z,a);
	den=raiz(z,den);

	return den;
}

void gotoxy(int x, int y)
{
    HANDLE hCon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}
#endif

void borrar(){

    system("cls");
}


void suma(){
    int j,o;
    double num;
    double vect[1000];
    char text[]={"TECLEEE LA CANTIDAD DE NUMEROS QUE DESEA SUMAR.-   "};
    long double suma =0.0;
    cout<<"==========SUMA DE NUMEROS==========="<<endl<<endl<<endl;
    for(int i=0;text[i]!='\0';i++){
		putchar(text[i]);
		Sleep(30);
	}
	cin>>j;
	system("cls");
	cout<<"==========SUMA DE NUMEROS==========="<<endl<<endl<<endl;
	for(o=0;o<j;o++){
            cin>>num;
            vect[o]=num;
            suma+=num;
            system("cls");
            cout<<"==========SUMA DE NUMEROS==========="<<endl<<endl<<endl;

	}
	cout<<"==========SUMA DE NUMEROS==========="<<endl<<endl<<endl;
	for(o=0;o<j;o++){
            if((o>=0)&&(o<(j-1)))
            cout<<vect[o]<<" + ";
            if((o>(j-2))&&(o<=j))
            cout<<vect[o]<<" = ";

    }
    cout<<suma<<endl;

	}
void resta(){
    int b,o;
    double num;
    double vect[1000];
    char text[]={"TECLEEE LA CANTIDAD DE NUMEROS QUE DESEA RESTAR.-   "};
    double suma =0.00000;
    cout<<"==========RESTA DE NUMEROS==========="<<endl<<endl<<endl;
    for(int i=0;text[i]!='\0';i++){
		putchar(text[i]);
		Sleep(30);
	}
	cin>>b;
	system("cls");
	cout<<"==========RESTA DE NUMEROS==========="<<endl<<endl<<endl;
	cin>>vect[0];
	suma=vect[0];
	system("cls");
	for(o=1;o<b;o++){
            cout<<"==========RESTA DE NUMEROS==========="<<endl<<endl<<endl;

            cin>>num;
            vect[o]=num;

            suma-=num;
            system("cls");

	}
	system("cls");
	cout<<"==========RESTA DE NUMEROS==========="<<endl<<endl<<endl;
	for(o=0;o<b;o++){

            if((o>=0)&&(o<(b-1)))
            cout<<vect[o]<<" - ";
            if((o>(b-2))&&(o<=b))
            cout<<vect[o]<<" = ";

    }
    cout<<suma<<endl;
}
void multiplicar(){
    int b,o;
    double num;
    double vect[1000];
    char text[]={"TECLEEE LA CANTIDAD DE NUMEROS QUE DESEA MULTIPLICAR.-   "};
    double suma =0.00000;
    cout<<"==========MULTIPLICAR NUMEROS==========="<<endl<<endl<<endl;
    for(int i=0;text[i]!='\0';i++){
		putchar(text[i]);
		Sleep(30);
	}
	cin>>b;
	system("cls");
	cout<<"==========MULTIPLICAR NUMEROS==========="<<endl<<endl<<endl;
	cin>>vect[0];
	suma=vect[0];
	system("cls");
	for(o=1;o<b;o++){
            cout<<"==========MULTIPLICAR NUMEROS==========="<<endl<<endl<<endl;
            cin>>num;
            vect[o]=num;

            suma*=num;
            system("cls");


	}
	system("cls");
	cout<<"==========MULTIPLICAR NUMEROS==========="<<endl<<endl<<endl;
	for(o=0;o<b;o++){

            if((o>=0)&&(o<(b-1)))
            cout<<vect[o]<<" * ";
            if((o>(b-2))&&(o<=b))
            cout<<vect[o]<<" = ";

    }
    cout<<suma<<endl;
}
void division(){
    int b,o;
    double residuo;
    double num;
    double vect[1000];
    char text[]={"TECLEEE LA CANTIDAD DE NUMEROS QUE DESEA DIVIDIR.-   "};
    double suma =0.00000;
    cout<<"==========DIVIDIR NUMEROS==========="<<endl<<endl<<endl;
    for(int i=0;text[i]!='\0';i++){
		putchar(text[i]);
		Sleep(30);
	}
	cin>>b;
	system("cls");
	cout<<"==========DIVIDIR NUMEROS==========="<<endl<<endl<<endl;
	cin>>vect[0];
	suma=vect[0];
	system("cls");
	for(o=1;o<b;o++){
            cout<<"==========DIVIDIR NUMEROS==========="<<endl<<endl<<endl;
            cin>>num;
            vect[o]=num;

            suma/=num;

            system("cls");


	}
	system("cls");
	cout<<"==========DIVIDIR NUMEROS==========="<<endl<<endl<<endl;
	for(o=0;o<b;o++){

            if((o>=0)&&(o<(b-1)))
            cout<<vect[o]<<" / ";
            if((o>(b-2))&&(o<=b))
            cout<<vect[o]<<" = ";

    }
    cout<<suma<<endl;
}


int main()
{
    float x,y;
    int n;
    int op;


	system("cls");
    //poner todo esto en una funcion
    for(;;){


    system("COLOR 71");
	cout<<"===========CALCULADORA CIENTIFICA==========="<<endl;
	gotoxy(10,5);
	cout<<" 1 -> SUMAR"<<endl;
	gotoxy(10,6);
	cout<<" 2 -> RESTAR"<<endl;
	gotoxy(10,7);
	cout<<" 3 -> MULTIPLICAR"<<endl;
	gotoxy(10,8);
	cout<<" 4 -> DIVIDIR"<<endl;
	gotoxy(10,9);
	cout<<" 5 -> SENO"<<endl;
	gotoxy(10,10);
	cout<<" 6 -> COSENO"<<endl;
	gotoxy(10,11);
	cout<<" 7 -> TANGENTE"<<endl;
	gotoxy(10,12);
	cout<<" 8 -> FACTORIAL"<<endl;
	gotoxy(10,13);
	cout<<" 9 -> POTENCIA"<<endl;
	gotoxy(10,14);
	cout<<" 10 -> LOGARITMO BASE NECIMA"<<endl;
	gotoxy(10,15);
	cout<<" 11 -> LOGARITMO BASE NEOPERANIO"<<endl;
	gotoxy(10,16);
	cout<<" 12 -> EXPONENCIAL"<<endl;
	gotoxy(10,17);
	cout<<" 13 -> RAIZ CUADRADA"<<endl;
	gotoxy(10,18);
	cout<<" 14 -> RAIZ NECIMA"<<endl;
	gotoxy(10,19);
	cout<<" 15 -> SALIR"<<endl;
	//agregar funciones de la cal....

	cin>>op;
    system("cls");
	switch(op){
	    case 1 : {
	        borrar();
	        system("COLOR 7F");
            suma();
            break;
            }
        case 2 : {
            borrar();
            system("COLOR AD");
            resta();
            break;
            }
        case 3 : {
            borrar();
            system("COLOR AE");
            multiplicar();
            break;
            }
        case 4 : {
            borrar();
            system("COLOR A4");
            division();
            break;
            }

        case 5:{printf("\n======SENO ======\n");
                    system("COLOR A1");
                    printf("Dame el valor de x\n:");
                    scanf("%f",&x);
                    x=seno(x);
                    printf("\n-> %g\n\n",x);
            break;}
        case 6:{printf("\n======COSENO======\n");
                    system("COLOR D1");
                    printf("Dame el valor de x\n:");
                    scanf("%f",&x);
                    x=cosen(x);
                    printf("\n-> %g\n\n",x);
            break;}
        case 7:{printf("\n======TANGENTE======\n");
                    system("COLOR 3B");
                    printf("Dame el valor de x\n:");
                    scanf("%f",&x);
                    x=tan(x);
                    printf("\n-> %g\n\n",x);
            break;}
        case 8:{printf("\n======Factorial======\n");
                    system("COLOR F1");
                    printf("Dame el valor de x\n:");
                    scanf("%f",&x);
                    x=fac(x);
                    printf("\n-> %g\n\n",x);
            break;}
        case 9:{printf("\n======POTENCIA ======\n");
                    system("COLOR C6");
                    printf("Dame el coeficiente\n");
                    scanf("%f",&x);
                    printf("Dame el Exponente\n:");
                    scanf("%f",&y);
                    x=pot(x,y);
                    printf("\n-> %g\n\n",x);
            break;}
        case 10:{printf("\n======LOGARITMO======\n");
                    system("COLOR A");
                    printf("Dame el la base\n");
                    scanf("%f",&x);
                    printf("Dame el Logarirmo\n:");
                    scanf("%f",&y);
                    x=logaritmo(x,y);
                    printf("\n-> %g\n\n",x);
            break;}
        case 11:{printf("\n======LOGARITMO NEPERIANO======\n");
                    system("COLOR 1");
                    printf("Dame el Logarirmo\n:");
                    scanf("%f",&y);
                    x=logaritmo(expo,y);
                    printf("\n-> %g\n\n",x);
            break;}
        case 12:{printf("\n======EXPONENCIAL======\n");
                    system("COLOR 6");
                    printf("Dame el valor de x\n:");
                    scanf("%f",&x);
                    x=ex(x);
                    printf("\n-> %g\n\n",x);
            break;}
        case 13:{printf("\n======RAIZ CUADRADA ======\n");
                    system("COLOR D5");
                    scanf("%f",&x);
                    x=raiz(x,2);
                    printf("\n-> %g\n\n",x);

            break;}
        case 14:{printf("\n======RAIZ N.ECINMA======\n");
                    system("COLOR 26");
                    printf("Tipo de raiz\n:");
                    scanf("%f",&y);
                    printf("Raiz\n:");
                    scanf("%f",&x);
                    x=raiz(x,y);
                    printf("\n-> %g\n\n",x);
            break;}
        case 15: break;

        default : break;
}

	system("pause (null)");
	system("cls");
if(op>=15) break;
}
fflush(stdin);
	printf("\n\nPreciona <ENTER> para SALIR...");
	getchar();




}
