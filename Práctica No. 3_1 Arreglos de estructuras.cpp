
# include <stdio.h>
# include <string.h>
# define MAXIMO 100

int n=0;

int leeri(const char *mensaje){
    int n;
    printf("%s", mensaje);
    scanf("%d", &n);
    return n;
}

float leerf(const char *mensaje){
    float n;
    printf("%s", mensaje);
    scanf("%f", &n);
    return n;
}


struct alumno{
    char nombre[30];
    int edad;
    float prom;
};


struct alumno leer_alumno() {
	struct alumno a;
	printf("Datos del Alumno:\n");
	leers("Nombre: ", a.nombre, sizeof(a.nombre));
	a.edad=leeri("Edad: ");
	a.prom=leerf("Promedio: ");
	return a;
}

int agregar(struct alumnox[], struct alumno dato); {
	int band=0;
	if (n<MAXIMO){
		x[n]=dato;
		n++;
		band=1;
	}
	return band;
}

struct alumno{
	char nombre[30];
	int edad;
	float prom;
};

void leers(const char *mensaje, char s[], int n){
	printf(mensaje);
	printf("(max %d): ", n-1);
	fflush(stdin);
	fgets(s, n, stdin);
	if(s[strlen(s)-1]== '\n'){
		s[strlen(s)-1]= '\0';
	}
}

int leeri(const char *mensaje){
	int n;
	printf(mensaje);
	scanf("%d", &n);
	return n;
}


float leerf(const char *mensaje){
	float n;
	printf(mensaje);
	scanf("%f", &n);
	return n;
}

void imprimir(struct alumno a){
	printf("---------- A L U M N O ----------\n");
	printf("  Nombre: %s \n", a.nombre);
	printf("    Dato: %d \n", a.edad);
	printf("Promedio: %.2f \n", a.prom);
	printf("---------------------------------\n\n");
}

void imprimir(struct alumno a){
    printf("--------------------ALUMNO--------------------\n");
    printf("     Nombre:    %s \n", a.nombre);
    printf("       Edad:    %d \n", a.edad);
    printf("   Promedio:    %.2f \n", a.prom);
    printf("----------------------------------------------\n");
}

int main(){
    struct alumno a1, a2;
    
    printf("Alumno 1:\n");
    leers("Nombre: ", a1.nombre, sizeof(a1.nombre));
    a1.edad=leeri("Edad: ");
    a1.prom=leerf("Promedio: ");
    
    printf("Alumno 2:\n");
    leers("Nombre: ", a2.nombre, sizeof(a2.nombre));
    a2.edad=leeri("Edad: ");
    a2.prom=leerf("Promedio: ");
    
    if(a1.prom>=a2.prom){
        imprimir(a1);
        imprimir(a2);
    }
    else{
        imprimir(a2);
        imprimir(a1);
        }
        
    
    
    return 0;
}

int main(){
	
	struct alumno a1, a2;
	printf("Alumno 1:\n");
	leers("Nombre: ", a1.nombre, sizeof(a1.nombre));
	a1.edad = leeri("Edad: ");
	a1.prom = leerf("Promedio: ");
	
	printf("\nAlumno 2:\n");
	leers("Nombre: ", a2.nombre, sizeof(a2.nombre));
	a2.edad = leeri("Edad: ");
	a2.prom = leerf("Promedio: ");
	
	
	printf("\nAlumnos ordenados por Promedio \n\n");
	if(a1.prom>=a2.prom){
		imprimir(a1);
		imprimir(a2);
	}
	else{
		imprimir(a2);
		imprimir(a1);
	}

	printf("\nAlumnos ordenados alfabeticamente por Nombre \n\n");
	if(strcmp(a1.nombre, a2.nombre)>0){
		imprimir(a2);
		imprimir(a1);
	}
	else{
		imprimir(a1);
		imprimir(a2);
	}
	
	return 0;
}
