#ifndef TUSUARIO_H
#define TUSUARIO_H

// Estructura para representar un usuario
typedef struct Usuario{
    int id_usuario;
    char nombre[50]; 
    float saldo;
}Usuario;

typedef struct NodoUsuario{
    Usuario dato;
    struct NodoUsuario *siguiente;
    struct NodoOperaciones *operaciones;
    
} NodoUsuario;

