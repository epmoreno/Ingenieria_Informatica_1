/***********************************
 
a) if (edad > 18)
    es_mayor_edad = true;
    else es_mayor_edad = false;

/->Vamos a tener una correcta sintaxis en el primer ejemplo
ya que aunque else no este en la posicion "correcta"
al no tener el if "{}" la orden termina en la primera linea 
y por ello el else estaria bien y no daria ningun tipo de error gramatical

***********************************/

/***********************************

b) if (edad > 18)
    if (ingresos <= MAX_INGRESOS)
    suscept_ayuda = true;
    else suscept_ayuda = false;
    else if (ingresos > MIN_INGRESOS)
    suscept_ayuda = true;
    else
    suscept_ayuda = false;

/-> El codigo correctamente tabulado seria:

    if (edad > 18)
        if (ingresos <= MAX_INGRESOS)
            suscept_ayuda = true;
        else suscept_ayuda = false;

    else if (ingresos > MIN_INGRESOS)
        suscept_ayuda = true;

    else
        suscept_ayuda = false;
***********************************/