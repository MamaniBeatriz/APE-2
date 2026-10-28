
#ifndef TUSUARIO_H
#define TUSUARIO_H


// Funciones para manejar la lista de usuarios
void registrar_usuario(NodoUsuario **lista, Usuario nuevo_usuario);
NodoUsuario* buscar_usuario_recursivo(NodoUsuario *lista,int id_usuario_buscado);
void eliminar_usuario(NodoUsuario **lista, int id_usuario_eliminar);
// Funciones para manejar las operaciones de los usuarios
void ingresar_dinero(NodoUsuario *lista, float monto, char *fecha);
void retirar_dinero(NodoUsuario *lista, float monto, char *fecha);
float consultar_saldo(NodoUsuario *lista);

// Funciones recursivas
float calcular_saldo_recursivo(NodoOperaciones *operaciones);
int contar_operaciones_recursivo(NodoOperaciones *operaciones);




#endif