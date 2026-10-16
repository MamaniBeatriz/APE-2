 #ifndef TOPERACION_H
 #define TOPERACION_H
 //ESTRUCTURAS 
 typedef struct operaciones{//guarda la informacion de una operacion 
    int ID_operaciones;
    float monto;
    int tipo;
    char fecha[11];
}operaciones;

typedef struct nodoOperaciones{
    operaciones dato;//guarda los datos de una operacion 
    struct nodoOperaciones *sig;// apunta a la siguiente operacion realizada por ese mismo usuario 
}nodoOperaciones;

#endif

