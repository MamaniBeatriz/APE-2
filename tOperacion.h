 #ifndef TOPERACION_H
 #define TOPERACION_H
 //ESTRUCTURAS 
 typedef struct operaciones{//guarda la informacion de una operacion 
    int ID_operaciones;
    float monto;
    int tipo;
    char fecha[11];
}operaciones;

typedef struct ListaOperaciones{
    operaciones dato;//guarda los datos de una operacion 
    struct ListaOperaciones *sgte;// apunta a la siguiente operacion realizada por ese mismo usuario 
}ListaOperaciones;

#endif

