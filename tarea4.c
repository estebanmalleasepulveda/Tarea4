//Nombre:Esteban Mallea Sepúlveda
//Rut:19.172.524-7
//Profesor Sergio Baltierra
//Carrera:Ingieneria civil informatica
/*
Reseña del programa:Ingresado varios caracteres, obtener el anagrama de un palindromo.
*/
# include <stdio.h>  //bilbioteca de entradas y salidas (biblioteca estadar).

main (){

	char palabra[99]; 
	char palabra2[99];
	char copia[99];
	int largo=0, cont=0, aux=0;
	int i=0, j=0;
	int x=0, y=0;
	printf("\n\n");
	printf("---------------PROGRAMA----------------\n");
	printf("\n\n");
	printf("> Ingrese una palabra:");


	for (i = 0; i < 99; ++i){
		palabra[i]=38;
		palabra2[i]=38;
	}
	
	scanf("%s",&palabra); // Leer Palabra.

	i=0;
	while(i<99){ // Crear una copia de la palabra.
		copia[i]=palabra[i];
		i++;
	}


	i=0;
	while(i<99){ // Definir largo de la palabra.
		if (palabra[i]!=38){
			cont++;
		}
	i++;
	}
	largo=cont-1; 

	if(largo%2==0){ // Comprobar si la palabra es PAR o IMPAR ( se requiere palabra impar).
		printf("0- No se puede formar un palindromo, favor ingrese palabra impar ! \n");
		return 0;
	}


	for (i = 0; i <  cont; ++i) // Buscar letras no repetidas en la palabra.
		{
			for (j =i+1 ; j <= cont; ++j)
			{
				if (copia[i]==copia[j])
				{
					copia[i]=38;
					copia[j]=38;
				}
			}
		}

	for (i = 0; i < cont; ++i) // Ubicar letras no repetida en el 2° arreglo. 
	{
		if (copia[i]!=38 && copia[i]!=0 )
		{	
			aux++;
			palabra2[cont/2]=copia[i];
			palabra[i]=38;
		}
	}

	y=largo;
	for (i = 0; i < cont; ++i){ // Ordenar palindromo en segundo arreglo.
		for (j=largo; j >i; --j){
			
			if (palabra[i]!=38){

				if (palabra[i]==palabra[j]){

					palabra2[x]=palabra[i];
					palabra2[y]=palabra[j];
					x++;
					y--;
					palabra[i]=38;
					palabra[j]=38;				
				
				}	
			}
		}
	}

	if (aux==1) // Cantidad de letras no repetidas = 1, se muestra palindromo.
	{
		printf("\n > 1");
		
	}
	else printf("\n > 0\n");  // cantidad de letras No repetidas es mayor a 1, No se muestra palindromo.
	printf("\n");
return 0;
}