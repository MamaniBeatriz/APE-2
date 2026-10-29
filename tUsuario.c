#include <stdio.h>
#include <stdlib.h>
#include "tOperacion.h"

// Estructura para representar un usuario
typedef struct Usuario{
    int id_usuario;
    char nombre[50]; 
    float saldo;
}Usuario;

typedef struct ListaUsuario{
    Usuario dato;
    struct ListaUsuario *sgte;
    struct ListaOperaciones *operaciones;
}ListaUsuario;

