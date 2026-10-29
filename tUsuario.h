
#ifndef TUSUARIO_H
#define TUSUARIO_H

// Funciones para manejar la lista de usuarios
void registrar_usuario(ListaUsuario **lista, Usuario nuevo_usuario);
ListaUsuario* buscar_usuario_recursivo(ListaUsuario *lista,int id_usuario_buscado);
void eliminar_usuario(ListaUsuario **lista, int id_usuario_eliminar);
// Funciones para manejar las operaciones de los usuarios
void ingresar_dinero(ListaUsuario *lista, float monto, char *fecha);
void retirar_dinero(ListaUsuario *lista, float monto, char *fecha);
float consultar_saldo(ListaUsuario *lista);

// Funciones recursivas
float calcular_saldo_recursivo(ListaOperaciones *operaciones);
int contar_operaciones_recursivo(ListaOperaciones *operaciones);




#endif