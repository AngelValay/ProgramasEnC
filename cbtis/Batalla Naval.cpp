
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

typedef int vida;

int random();
void reglas();
char** inicio();
void mover(char **p);
void mensaje_inicio();
void liberar(char **p);
void imprimir(char **p);
void mensaje_turno(int i);
void mensaje_ganador();
void mensaje_perdedor();
vida cont_vidas(char **p);
void ingresar(char **p,int i);
void atacar(char **p,char **pos,vida barcos,vida enemigo);
void juego(char **p,char **enemigo,char **posienemigo,vida vbarcos,vida venemigo);
void vshumano(char **a,char **b,char **ta,char **tb,vida azul,vida rojo);
void vscomputa(char **a,char **b,char **ta,char **tb,vida azul,vida rojo);
int atacar_maquina(char **p,char **pos,vida barcos,vida enemigo);
void estrategia(char **p,char **pos,vida barcos,vida enemigo);
int main(){
	srand(time(NULL));
	char **a=NULL,**b=NULL,**ta=NULL,**tb=NULL;
	vida azul=5,rojo=5;
	int op;

	b =inicio();
	a =inicio();
	ta=inicio();
	tb=inicio();

	printf("\n\t\t\t\tBATALLA NAVAL (beta 1.0)");
	printf("\n\t\t1 -> Cpu VS Humano\n\t\t2 -> Humano VS Humano\n\t\t: ");
	scanf("%d",&op);
	system("cls");
	switch(op){
		case 1:vscomputa(a,b,ta,tb,azul,rojo);break;
		case 2:vshumano (a,b,ta,tb,azul,rojo);break;
	}


	liberar(a);
	liberar(b);
	liberar(ta);
	liberar(tb);

}
void vscomputa(char **a,char **b,char **ta,char **tb,vida azul,vida rojo){
	int i;
	int x=0,y=0;
	for(i=0;i<=4;i++){
		do{
			x=random();
			y=random();
		}while(b[y][x]!='~');

		b[y][x]='A'+i;
	}
	mensaje_inicio();
	system("color 1f");
	imprimir(a);
	for(i=0;i<=4;i++){
		ingresar(a,i);
		imprimir(a);
	}
	system("cls");
	reglas();
	for(i=1;rojo>0 && azul>0;i++){
		if(i%2==0)atacar_maquina(ta,a,azul,rojo);
		else {
			system("color 1f");
			juego(a,tb,b,rojo,azul);
		}

		rojo=cont_vidas(a);
		azul=cont_vidas(b);
	}

	system("cls");
	if(rojo==0)mensaje_perdedor();
	getchar();
}

void vshumano(char **a,char **b,char **ta,char **tb,vida azul,vida rojo){
	int i;
	mensaje_inicio();
	mensaje_turno(1);
	imprimir(a);
	for(i=0;i<=4;i++){
		ingresar(a,i);
		imprimir(a);
	}

	mensaje_turno(2);
	imprimir(b);
	for(i=0;i<=4;i++){
		ingresar(b,i);
		imprimir(b);
	}
	system("cls");
	reglas();

	for(i=1;rojo>0 && azul>0;i++){
		mensaje_turno(i);
		printf("\n\n Precione <ENTER> ");
		fflush(stdin);
		getchar();
		if(i%2==0)juego(a,tb,b,rojo,azul);
		else juego(b,ta,a,azul,rojo);

		rojo=cont_vidas(a);
		azul=cont_vidas(b);
	}

	getchar();
	system("cls");
}
void imprimir(char **p){
	int i,j;
	for(i=0;i<10;i++)p[0][i]='0'+i;
	for(i=0;i<10;i++)p[i][0]='0'+i;
	for(i=0;i<10;i++){
		printf("\n\t\t\t\t");
		for(j=0;j<10;j++)
			printf(" %c",p[i][j]);
	}
}
char** inicio(){
	char **p=NULL;
	int i,j;

	p=(char**)malloc(10*sizeof(char*));
	for(i=0;i<=10;i++)
		p[i]=(char*)malloc(10*sizeof(char));

	for(j=0;j<=10;j++)
		for(i=0;i<=10;i++)
			p[j][i]='~';

	return p;
}
void liberar(char **p){
	int i;
	for(i=0;i<=10;i++)free(p[i]);
	free(p);
}
void mensaje_inicio(){
	system("color f0");
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t");
	Sleep(60*10);
	printf("ES");
	Sleep(60*5);
	printf(" HORA");
	Sleep(60*5);
	printf(" DEL");
	Sleep(60*5);
	printf(" DUELO");
	Sleep(60*10);
	system("cls");
}
void mensaje_turno(int i){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t");
	Sleep(60*10);
	if(i%2==0){
		system("color 9f");
		printf("TURNO DEL AZUL");
		Sleep(60*30);
		system("color b");
	}
	else{
		system("color cf");
		printf("TURNO DEL ROJO");
		Sleep(60*30);
		system("color c");
	}
	for(i=1;i<16;i++)putchar('\n');

	system("cls");
}
void reglas(){
	system("color f");
	printf("\n\n\n\n\n\n\n\n\t\t\t\t");
	printf("REGLAS DEL JUEGO:\n");
	printf("\n-> En el primer turno solo se permite un disparo.");
	printf("\n-> La cantidad de disparos por turno es proporcional a los barcos que pose.");
	printf("\n-> Es posible mover sus barcos en su turno a una posicion no, da�ada y ocupada.");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("<ENTER>");
	fflush(stdin);
	getchar();
	system("cls");
}
vida cont_vidas(char **p){
	int i,j;
	vida cont=0;
	for(i=0;i<10;i++)
		for(j=0;j<10;j++){
			if(p[i][j]>='A' && p[i][j]<='K')
			cont++;
		}
	return cont;
}
void juego(char **p,char **enemigo,char **posienemigo,vida vbarcos,vida venemigo){
	int op;
	system("cls");

	printf("\n\tTu Municion es de %d",vbarcos);
	imprimir(p);
	printf("\n\t\t\t1- Mover\n\t\t\t2- Atacar\n\t\t\t: ");
	scanf("%d",&op);

	switch(op){
		case 1:mover(p);
		default: atacar(enemigo,posienemigo,vbarcos,venemigo);break;
	}
	fflush(stdin);
}

void atacar(char **p,char **pos,vida barcos,vida enemigo){
	int i,x=0,y=0;
	for(i=0;i<barcos && enemigo>0;i++){
		system("cls");
		system("color 2a");
		printf("\t\t\t    INGRECE CORDENADAS DE ATAQUE\n");
		imprimir(p);
		x=0;
		do{
			if(x!=0)printf("\n\t\tYa Fue atacado");

			printf("\n\t\t\tx: ");
			scanf("%d",&x);
			printf("\t\t\tY: ");
			scanf("%d",&y);

		}while(pos[y][x]=='#' || pos[y][x]=='-');

		if(pos[y][x]>='A' && pos[y][x]<='K'){
			enemigo--;
			pos[y][x]=p[y][x]='#';
			printf("\a");
		}
		else pos[y][x]=p[y][x]='-';
	}
	if(enemigo==0)mensaje_ganador();
}
void mover(char **p){
	int i,j,x,y,aux;

	system("cls");
	printf("\t\t\t\t\tMOVER BARCO\n");
	imprimir(p);
	fflush(stdin);
	printf("\n\t\t\tNombre del barco:");
	scanf("%c",&aux);
	fflush(stdin);
	printf("\t\t\tNueva posicion\n\t\t\tx: ");
	scanf("%d",&x);
	printf("\t\t\ty: ");
	scanf("%d",&y);
	if(p[y][x]=='~')
		for(i=0;i<10;i++)
			for(j=0;j<10;j++){
				if(aux==p[i][j]){
					p[y][x]=aux;
					p[i][j]='~';
					goto salir;
				}
			}
	else printf("\nNo Es posible hacer el cambio");
	salir:
	printf("<ENTER>");
	fflush(stdin);
	getchar();
}
void ingresar(char **p,int i){
	int x=0,y=0;
	printf("\n\t\t\tDame las cordenadas de tu barco %d\n",i+1);
	do{
		if(x!=0)printf("\n\t\t\t\tYA EXISTE ESTE BARCO!!\n");
		printf("\t\t\tx: ");
		scanf("%d",&x);
		printf("\t\t\ty: ");
		scanf("%d",&y);

	}while(p[y][x]>='A' && p[y][x]<='K');

	system("cls");
	p[y][x]='A'+i;
}
void mensaje_ganador(){
	int i;
	system("cls");
	system("color fd");
	printf("\n\n\n\n\n\n\n\n\t\t    ");
	Sleep(60*10);
	char cad[]={"HAS DESTRUIDO TODA LAS FLOTAS ENEMIGAS"};
	for(i=0;i<cad[i]!='\0';i++){
		putchar(cad[i]);
		Sleep(30);
	}
	Sleep(60*60);
	printf("\n\n\t\t    <ENTER>");
	getchar();
}

void mensaje_perdedor(){
	int i;
	system("cls");
	system("color fd");
	printf("\n\n\n\n\n\n\n\n\t    ");
	Sleep(60*10);
	char cad[]={"NO SE PUEDE SER EL MEJOR EN TODO, Y MENOS EN LO QUE HACES."};
	for(i=0;cad[i]!='\0';i++){
		putchar(cad[i]);
		Sleep(30);
	}
	Sleep(60*60);
	printf("\n\n\t    <ENTER>");
	getchar();
}
int atacar_maquina(char **p,char **pos,vida barcos,vida enemigo){
	int i,x=0,y=0;
	printf("\n\tEspere mientras la maquina piensa...");
	for(i=0;i<barcos*3 && enemigo>0;i++){
	cont=0;
		do{
	cont++;
    if(cont>1000000){

				estrategia(p,pos,barcos,enemigo);
				return 1;
			}
			x=random();
			y=random();

		}while(pos[y][x]=='#' || pos[y][x]=='-');

		if(pos[y][x]>='A' && pos[y][x]<='K'){
			enemigo--;
			pos[y][x]=p[y][x]='#';
		}
		else pos[y][x]=p[y][x]='-';
	}
	return 0;
}
void estrategia(char **p,char **pos,vida barcos,vida enemigo){
	int i,j;
	for(i=1;i<10 && barcos>0 && enemigo>0;i++){
		for(j=1;j<10 &&barcos>0 && enemigo>0;j++){
			if(p[i][j]=='~'){
				barcos--;
				if(pos[i][j]>='A' && pos[i][j]<='K'){
					enemigo--;
					pos[i][j]=p[i][j]='#';
									}
				else pos[i][j]=p[i][j]='-';
			}
		}
	}
}
int random(){
	return 1+rand()%9;
}
