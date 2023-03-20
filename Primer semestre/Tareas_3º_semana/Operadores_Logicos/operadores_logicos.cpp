/*
//a->
char tipo_radar;
cin >> tipo_radar;
if (tipo_radar == 'F' && tipo_radar == 'f')

/**
 * No tenemos ningua accion despues de la condicion establecida
**//*

//b->
double velocidad;
cin >> velocidad;
if (velocidad > 100 && velocidad < 70)
cout << "\nVelocidad fuera del rango";

/**
 * El orden de los signos de <> estan invertidos
 * captando cualquier valor menos los que queremos comprobar
**//*

//c-> 
double velocidad;
cin >> velocidad;
if (velocidad > 100 || velocidad > 110)
cout << "Velocidad excesiva";

/**
 * El problema es que estamos dando la misma orden
 * la velocidad sera excesiva ya cuando pase de 100
 * el 110 que hay detras es relevante
**/
