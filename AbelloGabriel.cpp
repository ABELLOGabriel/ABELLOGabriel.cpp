#include <stdio.h>
int operador, vianda, cantidad, cont=0, i,llamada, vegetales[1], carne[1], pescado[1], fruta[1], acumver, acumcar, acumpes, acumfru, totalver, totalcarne, totalpes, totalfru, contvian;
main()
{
	printf("Ingrese que numero de operador es usted (1-7)(0 para finalizar)");//se pide el numero de operador que esta atendiendo
	scanf("%d", &operador);//se lee el numero ingresado
	while(operador!=0)
	{
		printf("¿Cuantas viandas comprara?"); //se pide la cantidad de viandas que comprara el cliente
		scanf("%d", &cantidad); //se escanea esa cantidad
		for(i=0;i<cantidad;i++)//se crea un ciclo for que finaliza cuando se alcanza la cantidad de viandas que compro el cliente
		{
		printf("¿Que tipo de vianda elegira?\n 1- Vegetales \n 2- Carnes \n 3- Pescado \n 4- Frutas \n ");//Se le pide al cliente el tipo de comida que quiere en cada vianda
		scanf("%d", &vianda);//se leen los tipos elegidos
			if(vianda==1)
		{
			printf("Ingrese el precio de los vegetales: ");//se le pide al operador el precio de los vegetales
			scanf("%d", &vegetales[1]);//se lee el precio de los vegetales
			acumver++; //se acumula la cantidad de vegetales vendidos
			totalver=vegetales[1]*acumver;//se multiplica el precio de los vegetales por la cantidad vendida de los mismos y se almacena en "totalver"
		}
		if(vianda==2)
		{
			printf("Ingrese el precio de la carne: ");//se le pide al operador el precio de la carne
			scanf("%d", &carne[1]);//se lee el precio de la carne
			acumcar++;//se acumula la cantidad de carne vendida
			totalcarne=carne[1]*acumcar;//se multiplica el precio de la carne por la cantidad vendida de las misma y se almacena en "totalcarne"
		}
		if(vianda==3)
		{
			printf("Ingrese el precio de pescado :");//se le pide al operador el precio del pescado
			scanf("%d", &pescado[1]);//se lee el precio del pescado
			acumpes++;//se acumula la cantidad de pescado vendida
			totalpes=pescado[1]*acumpes;//se multiplica el precio del pescado por la cantidad vendida de los mismos y se almacena en "totalpes"
		}
		if(vianda==4)
		{
			printf("Ingrese el precio de la fruta: ");//se le pide al operador el precio de la fruta
			scanf("%d", &fruta[1]);// se lee el precio de la fruta
			acumfru++;//se acumula la cantidad de fruta vendida
			totalfru=fruta[1]*acumfru;//se multiplica el precio de la fruta por la cantidad vendida de la misma y se almacena en "totalfru"
		}
		}
		if(cantidad>4) //se usa una condicion de que si la cantidad de viandas pedidas es mayor que 4 se suma uno al contador
		{
		cont++;
		}
		printf("Presione 1 para volver a la central de llamadas");//se le pide al operador presionar 1 para volver a la central y asi poder iniciar el ciclo de vuelta
		scanf("%d", &llamada);//se lee la respuesta
		if(llamada==1)//si el operador presiona 1 se reinicia el ciclo
		{
			printf("Ingrese su numero de operador(1-7)(0 para finalizar)");
			scanf("%d", &operador);
		}

	}
	printf("\n La cantidad total de ventas que superaron las 4 unidades es: %d", cont);
	printf("\n La ganancia por la venta de viandas de verdura es: $ %d", totalver);
	printf("\n La ganancia por la venta de viandas de carne es: $ %d", totalcarne);
	printf("\n La ganancia por la venta de viandas de pescado es: $ %d", totalpes);
	printf("\n La ganancia por la venta de viandas de fruta es: $ %d", totalfru);
	
}	
