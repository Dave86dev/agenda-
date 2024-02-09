/* Replace "dll.h" with the name of your header */
#include "dll.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

DllClass::DllClass()
{

}


DllClass::~DllClass ()
{

}


BOOL APIENTRY DllMain (HINSTANCE hInst     /* Library instance handle. */ ,
                       DWORD reason        /* Reason this function is being called. */ ,
                       LPVOID reserved     /* Not used. */ )
{
    switch (reason)
    {
      case DLL_PROCESS_ATTACH:
        break;

      case DLL_PROCESS_DETACH:
        break;

      case DLL_THREAD_ATTACH:
        break;

      case DLL_THREAD_DETACH:
        break;
    }

    /* Returns TRUE on success, FALSE on failure */
    return TRUE;
}

DLLIMPORT void volveratras(){
    
    int volveratras;
    
    printf("\n\n   -INTRODUCE LA TECLA 9 PARA VOLVER ATRAS\n\n   ");
     scanf("%d", &volveratras);
     fflush(stdin);
     
     if(volveratras==9){
                           
     system("cls");
     
 }    
     return;
}         
  
DLLIMPORT int menu(){
int opcion;
     //MENU PRINCIPAL
          
          do{
          system ("color 1A");
          printf("\n\n\t\t   :::::::::::::::::::::::::::::::::::\n");
          printf("\t\t   :::::AGENDA VIRTUAL COMPANEROS:::::\n");
          printf("\t\t   :::::::::::::::::::::::::::::::::::\n\n");
          printf("\t\t   ------1.SAL DE LA APLICACION-------\n");
          printf("\t\t   ------2.ANADE UN NUEVO CONTACTO----\n");
          printf("\t\t   ------3.MODIFICA UN CONTACTO-------\n");
          printf("\t\t   ------4.ELIMINA UN CONTACTO--------\n");
          printf("\t\t   ------5.BUSCA UN CONTACTO----------\n");
          printf("\t\t   ------6.MUESTRA LOS CONTACTOS------\n\n");
          printf("\t\t   :::::::::::::::::::::::::::::::::::\n");
          printf("\t\t   :::::::::::::::::::::::::::::::::::\n\n");
          printf("\t\t   **********ELIGE UNA OPCION*********\n\n");
          printf("\t\t   LA OPCION ELEGIDA ES: ");
          
          scanf("%d", &opcion);
          
          system("cls");
          
          }while  ((opcion<1) || (opcion>6));
          
          return (opcion);
     }    

DLLIMPORT int pregsalir(){
     
    int opcisal;
    int opceixir=0;
    
    do{
     
    system("cls");
    printf("\n\n   -ESTAS SEGURO DE SALIR DE LA APLICACION?(S/N): ");
    scanf("%c", &opcisal);
      
    }while ((opcisal!='s') && (opcisal!='n'));
    
    if(opcisal=='s'){
    
    opceixir=1;
    salir();
    
    }
    
    if(opcisal=='n'){
    
    volveratras();
    }
    return(opceixir);
}

DLLIMPORT void salir(){
    
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::HAS ELEGIDO SALIR DE LA APLICACION. HASTA OTRA USUARIO::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n   ");
    
    return;
}   

DLLIMPORT void alta(alumno vectoralum[tam],int x){
    
    int opciontelf;
    
    altanombreapellali(vectoralum,x);
    altamailtipocalle(vectoralum,x);
    altanumeropuertaciudadcp(vectoralum,x);
    altatelefonos(vectoralum,x);
    
    return;
        
    }
    
DLLIMPORT void altanombreapellali(alumno vectoralum[tam], int x){
    
    int opciontelf;
    
    strcpy(vectoralum[x].nombre,"\0");
    
    do{
    
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::HAS ELEGIDO AGREGAR UN NUEVO CONTACTO. INTRODUCE LOS DATOS::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    fflush(stdin);
    printf("   -INTRODUCE EL NOMBRE DEL ALUMNO: ");
    gets(vectoralum[x].nombre);
    fflush(stdin);
    
    }while ((strcmp(vectoralum[x].nombre,"\0")==0));
    
    printf("\n");
    printf("   -INTRODUCE EL APELLIDO DEL ALUMNO: ");
    gets(vectoralum[x].apellido);
    fflush(stdin);
    printf("\n");
    printf("   -INTRODUCE EL ALIAS DEL ALUMNO: ");
    scanf("%s", vectoralum[x].alias);
    fflush(stdin);
    
    return;
    
}    
    
DLLIMPORT void altamailtipocalle(alumno vectoralum[tam], int x){
    
    int opciontelf;
    int opcionlocal;
    
    do{
    
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::HAS ELEGIDO AGREGAR UN NUEVO CONTACTO. INTRODUCE LOS DATOS::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    printf("   -INTRODUCE LA LOCALIZACION (1.C/ - 2.Pza. - 3.Avda.) DONDE VIVE EL ALUMNO: ");
    scanf("%d", &opcionlocal);
    
    }while ((opcionlocal!=1) && (opcionlocal!=2) && (opcionlocal!=3));
    
    switch(opcionlocal){
    
    case 1:
    
    strcpy(vectoralum[x].direcalu.tipo,"C/");
    
    break;
    
    case 2:
         
    strcpy(vectoralum[x].direcalu.tipo,"Pza.");
    
    break;
    
    case 3:
         
    strcpy(vectoralum[x].direcalu.tipo,"Avda.");
    
    break;
    
    }
    
    fflush(stdin);
    printf("\n");
    printf("   -INTRODUCE EL E-MAIL DEL ALUMNO: ");
    scanf("%s", vectoralum[x].email);
    fflush(stdin);
    printf("\n");
    printf("   -INTRODUCE LA CALLE DONDE VIVE EL ALUMNO: ");
    gets(vectoralum[x].direcalu.calle);
    fflush(stdin);
    
    return;
    
}    

DLLIMPORT void altanumeropuertaciudadcp(alumno vectoralum[tam], int x){
    
    int opciontelf;
    
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::HAS ELEGIDO AGREGAR UN NUEVO CONTACTO. INTRODUCE LOS DATOS::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    fflush(stdin);
    
    printf("   -INTRODUCE EL NUMERO DE PORTAL DONDE VIVE EL ALUMNO: ");
    scanf("%d", &vectoralum[x].direcalu.numeroc);
    fflush(stdin);
    printf("\n");
    printf("   -INTRODUCE LA PUERTA DONDE VIVE EL ALUMNO: ");
    scanf("%s", &vectoralum[x].direcalu.letrap);
    fflush(stdin);
    printf("\n");
    printf("   -INTRODUCE LA CIUDAD DONDE VIVE EL ALUMNO: ");
    scanf("%s", vectoralum[x].direcalu.ciudad);
    fflush(stdin);
    printf("\n");
    printf("   -INTRODUCE EL CODIGO POSTAL DEL AMUNO: ");
    scanf("%d", &vectoralum[x].direcalu.cp);
    fflush(stdin);
    
   return;
    
}

DLLIMPORT void altatelefonos(alumno vectoralum[tam], int x){
    
    int opciontelf;
    
    do{
    
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::HAS ELEGIDO AGREGAR UN NUEVO CONTACTO. INTRODUCE LOS DATOS::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    printf("   -QUE TIPO DE TELEFONO TIENE EL ALUMNO?\n\n   \t1.FIJO\n\n   \t2.MOVIL\n\n   LA OPCION ES: ");
    scanf("%d", &opciontelf);
    
    system("cls");
    
    }while ((opciontelf<1) || (opciontelf>2));
    
    if(opciontelf==1){
                      
        strcpy(vectoralum[x].telefonet.fijo,"\0");
        
        do{ 
            
        system("cls");
        printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("   ::HAS ELEGIDO AGREGAR UN NUEVO CONTACTO. INTRODUCE LOS DATOS::\n");
        printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");             
        
        printf("\n   -INTRODUCE EL TELEFONO FIJO DEL ALUMNO: ");
        scanf("%s", vectoralum[x].telefonet.fijo);
        fflush(stdin);
        printf("\n   ");
        
        system("cls");
        
        }while ((strcmp(vectoralum[x].telefonet.fijo,"\0")==0));
        
        strncpy(vectoralum[x].clave,vectoralum[x].nombre,1);
        strcat(vectoralum[x].clave,vectoralum[x].telefonet.fijo);  
        
        }
        
    if(opciontelf==2){
                      
        strcpy(vectoralum[x].telefonet.movil,"\0");
                      
        do{
                      
        system("cls");
        printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("   ::HAS ELEGIDO AGREGAR UN NUEVO CONTACTO. INTRODUCE LOS DATOS::\n");
        printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
        
        printf("\n   -INTRODUCE EL TELEFONO MOVIL DEL AMUNO: ");
        scanf("%s", vectoralum[x].telefonet.movil);
        fflush(stdin);
        printf("\n");
        
        system("cls");
        
        }while ((strcmp(vectoralum[x].telefonet.movil,"\0")==0));
        
        strncpy(vectoralum[x].clave,vectoralum[x].nombre,1);
        strcat(vectoralum[x].clave,vectoralum[x].telefonet.movil);
    
    }    
        return;
}    

DLLIMPORT void modif(alumno vectoralum[tam], int x){
     
    int contacteleg;
    char nombreleg[15]; 
    int trobat;
    int i;
    int contadorvac=0;
    
    for (x=0;x<tam;x++){
        if( strcmp(vectoralum[x].clave,"\0")==0){
            contadorvac=contadorvac+1;
        }
    }        
    if(contadorvac==tam){
    
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::::NO EXISTE NINGUN CONTACTO EL CUAL SE PUEDA MODIFICAR::::::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    volveratras();
    
    }else{
    
    system("cls");
    
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::::HAS ELEGIDO MODIFICAR UN CONTACTO. INTRODUCE SU NOMBRE::::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    printf("   -POR FAVOR, INDICA EL NOMBRE DEL CONTACTO EL CUAL QUIERES MODIFICAR LOS DATOS\n\n");
    printf("   EL NOMBRE DE CONTACTO ES: ");
    fflush(stdin);
     gets(nombreleg);
     printf("\n   ");
     
     trobat=0;
     for(x=0; x<tam; x++){
         
         if(strcmp(nombreleg,vectoralum[x].nombre)==0){
             trobat=1;
             break;
         }
     }    
         if(trobat==1){
         
         system("cls");
         menumodif(vectoralum,x);
         
         }
         
         if(trobat==0){    
         
             system("cls");
             printf("\n   USUARIO, EL NOMBRE INTRODUCIDO NO COINCIDE CON EL DE NINGUN CONTACTO\n");
             
     volveratras();    
   }
         
}   
    return;
}
    
DLLIMPORT void menumodif(alumno vectoralum[tam], int x){
     
    int modifeleg;
    
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::::HAS ELEGIDO MODIFICAR UN CONTACTO. INTRODUCE LOS DATOS::::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    printf("   -QUE DATOS DE LOS CONTACTOS DESEAS MODIFICAR??\n\n");
    printf("   \t1.NOMBRE");
    printf("       \t\t\t2.APELLIDO\n\n");
    printf("   \t3.ALIAS");
    printf("       \t\t\t4.E-MAIL\n\n");
    printf("       \t5.TIPO CALLE");
    printf("   \t\t\t6.CALLE\n\n");
    printf("   \t7.NUMERO CASA");
    printf("   \t\t8.NUMERO PUERTA\n\n");
    printf("   \t9.CIUDAD");
    printf("       \t\t\t10.CODIGO POSTAL\n\n");
    printf("   \t11.TELEFONO MOVIL");
    printf("   \t\t12.TELEFONO FIJO");
    printf("\n\n   \t13.VOLVER AL MENU PRINCIPAL\n\n");
    printf("   \t14.MOSTRAR RESULTADOS DE LOS CAMBIOS\n\n");
    printf("   -LA OPCION ES: ");
    scanf("%d", &modifeleg);
    
    system("cls"); 
    
    modificaciones(vectoralum,modifeleg,x);
    
    return;
    
}    
    
DLLIMPORT void modificaciones(alumno vectoralum[tam], int modifeleg, int x){
     
     switch(modifeleg){
     
     case 1:
          
     printf("\n   -INTRODUCE UN NUEVO NOMBRE: ");
     scanf("%s", vectoralum[x].nombre);
     fflush(stdin);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 2:
          
     printf("\n   -INTRODUCE UN NUEVO APELLIDO: ");
     scanf("%s", vectoralum[x].apellido);
     fflush(stdin);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 3:
          
     printf("\n   -INTRODUCE UN NUEVO ALIAS: ");
     scanf("%s", vectoralum[x].alias);
     fflush(stdin);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 4:
     
     printf("\n   -INTRODUCE UN NUEVO E-MAIL: ");
     scanf("%s", vectoralum[x].email);
     fflush(stdin);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 5:
     
     printf("\n   -INTRODUCE UN NUEVO TIPO DE LOCALIZACION: ");
     scanf("%s", vectoralum[x].direcalu.tipo);
     fflush(stdin);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 6:
     
     printf("\n   -INTRODUCE UNA NUEVA CALLE: ");
     scanf("%s", vectoralum[x].direcalu.calle);
     fflush(stdin);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 7:
          
     printf("\n   -INTRODUCE UN NUEVO NUMERO DE VIVIENDA: ");
     scanf("%d", &vectoralum[x].direcalu.numeroc);
     fflush(stdin);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 8:
          
     printf("\n   -INTRODUCE UN NUEVO NUMERO DE PUERTA: ");
     scanf("%s", &vectoralum[x].direcalu.letrap);
     fflush(stdin);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 9:
          
     printf("\n   -INTRODUCE UNA NUEVA CIUDAD: ");
     scanf("%s", &vectoralum[x].direcalu.ciudad);
     fflush(stdin);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 10:
          
     printf("\n   -INTRODUCE UN NUEVO CODIGO POSTAL: ");
     scanf("%d", &vectoralum[x].direcalu.cp);
     fflush(stdin);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 11:
          
     printf("\n   -INTRODUCE UN NUEVO TELEFONO MOVIL: ");
     scanf("%s", &vectoralum[x].telefonet.movil);
     fflush(stdin);
     strncpy(vectoralum[x].clave,vectoralum[x].nombre,1);
     strcat(vectoralum[x].clave,vectoralum[x].telefonet.movil);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 12:
          
     printf("\n   -INTRODUCE UN NUEVO TELEFONO FIJO: ");
     scanf("%s", &vectoralum[x].telefonet.fijo);
     fflush(stdin);
     strncpy(vectoralum[x].clave,vectoralum[x].nombre,1);
     strcat(vectoralum[x].clave,vectoralum[x].telefonet.fijo);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     case 13:
     
     system("cls"); 
     
     break;
     
     case 14:
          
     system("cls");
     printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("   ::::::::::HAS ELEGIDO MOSTRAR UN CONTACTO MODIFICADO::::::::::\n");
     printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
     
     ensenacontact(vectoralum,x);
     volveratras();
     menumodif(vectoralum,x);
     
     break;
     
     }
         
     return;
}
     
DLLIMPORT void borrar(alumno vectoralum[tam], int x){
     
    int opcionborra;
    int contadorvac=0;
    
    for (x=0;x<tam;x++){
        if( strcmp(vectoralum[x].clave,"\0")==0){
            contadorvac=contadorvac+1;
        }
    }        
    
    if(contadorvac==tam){
    
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::::TU AGENDA ESTA VACIA, NO SE PUEDEN BORRAR CONTACTOS:::::::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    volveratras();
     
    }else{
    
    do{
        
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   :::::::::::::::::HAS ELEGIDO BORRAR UN CONTACTO:::::::::::::::::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    printf("   -QUE CRITERIO DESEAS PARA BORRAR LOS CONTACTOS?\n\n");
    printf("   \t1.POR EL NOMBRE\n\n");
    printf("   \t2.POR EL ALIAS\n\n");
    printf("   \t3.TODOS LOS DE LA CIUDAD...\n\n");
    printf("   -PULSA 4 PARA VOLVER AL MENU PRINCIPAL\n\n");
    printf("   LA OPCION ES: ");
    scanf("%d", &opcionborra);
    
    }while ((opcionborra<1) || (opcionborra>4));
    
    switch(opcionborra){
    
    case 1:
        
    system("cls");
    borranombre(vectoralum,x);
    
    break;
    
    case 2:
    
    system("cls");
    borraalias (vectoralum,x);

    break;
                       
    case 3:
    
    system("cls");
    borraciudad (vectoralum,x);
         
    break;
                       
    case 4:
         
    system("cls"); 
    
    break;
    
    }
    
    return;
}    
    
}

DLLIMPORT void buscar(alumno vectoralum[tam], int x){
     
    int opcionbusca;
    int contadorvac=0;
    
    for (x=0;x<tam;x++){
        if( strcmp(vectoralum[x].clave,"\0")==0){
            contadorvac=contadorvac+1;
        }
    }        
    
    if(contadorvac==tam){
    
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::::TU AGENDA ESTA VACIA, NO SE PUEDEN BUSCAR CONTACTOS:::::::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    volveratras();
     
    }else{
    
    do{
    
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   :::::::::::::::::HAS ELEGIDO BUSCAR UN CONTACTO:::::::::::::::::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    printf("   -QUE CRITERIO DESEAS PARA MOSTRAR LOS CONTACTOS?\n\n");
    printf("   \t1.POR EL NOMBRE\n\n");
    printf("   \t2.POR EL ALIAS\n\n");
    printf("   \t3.TODOS LOS DE LA CIUDAD...\n\n");
    printf("   -PULSA 4 PARA VOLVER AL MENU PRINCIPAL\n\n");
    printf("   LA OPCION ES: ");
    scanf("%d", &opcionbusca);
    
    }while ((opcionbusca<1) || (opcionbusca>4));
    
    switch(opcionbusca){
    
    case 1:
    
    system("cls");
    buscanombre(vectoralum,x);
    
    break;
    
    case 2:
    
    system("cls");
    buscaalias(vectoralum,x);
         
    break;
    
    case 3:
    
    system("cls");
    buscaciudad(vectoralum,x);
    
    break;
    
    case 4:
    
    system("cls"); 
    
    break;
    
    }
    
    return;
}

}

DLLIMPORT void mostrar(alumno vectoralum[tam], int x){
     
    int opcionorden;
    int contadorvac=0;
    
    for (x=0;x<tam;x++){
        if( strcmp(vectoralum[x].clave,"\0")==0){
            contadorvac=contadorvac+1;
        }
    }        
    
    if(contadorvac==tam){
    
    system("cls");
    printf("\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   ::::TU AGENDA ESTA VACIA, NO SE PUEDEN MOSTRAR CONTACTOS::::::\n");
    printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    volveratras();    
     
    }else{
    
    do{
    
    system("cls");
    printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   :::::::::::::::HAS ELEGIDO MOSTRAR LOS CONTACTOS:::::::::::::::\n");
    printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
    printf("   -QUE CRITERIO DESEAS PARA MOSTRAR LOS CONTACTOS?\n\n");
    printf("   \t1.ORDENADOS ASCENDENTEMENTE POR NOMBRE\n\n");
    printf("   \t2.ORDENADOS ASCENDENTEMENTE POR LA CIUDAD\n\n");
    printf("   -PULSA 3 PARA VOLVER AL MENU PRINCIPAL\n\n");
    printf("   LA OPCION ES: ");
    scanf("%d", &opcionorden);
    
    }while ((opcionorden<1) || (opcionorden>3));
    
    switch(opcionorden){
    
    case 1:
    
    mostrarnombre(vectoralum,x);
                       
    break;
    
    case 2:
    
    mostrarciudad(vectoralum,x);
                       
    break;
    
    case 3:
    
    system("cls");
    
    }
    
    return;
}

}    

DLLIMPORT void mostrarnombre(alumno vectoralum[tam], int x){
     
     int trobat;
     int i,j;
     
     system("cls");
     
     for(x=0; x<tam; x++){
         if(strcmp(vectoralum[x].clave,"\0")!=0){
         ensenacontact(vectoralum,x); 
         printf("\n\n   ");
     }    
     
     }
     
     system("cls");
     printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("   :::::::::CONTACTOS MOSTRADOS ASCENDENTEMENTE POR NOMBRE::::::::\n");
     printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
     
     for(i=0;i<tam-1;i++){
           for(j=i+1;j<tam;j++){
               if(strcmp(vectoralum[j].nombre,vectoralum[i].nombre)<0){
                   aux=vectoralum[i];
                   vectoralum[i]=vectoralum[j];
                   vectoralum[j]=aux;
               }
           }
     }            
     for(x=0; x<tam; x++){
         if(strcmp(vectoralum[x].clave,"\0")!=0){
            ensenacontact(vectoralum,x);
            printf("\n\n   "); 
            }
     }
             
     volveratras();
         
     return;
}

DLLIMPORT void mostrarciudad(alumno vectoralum[tam], int x){
     
     int i,j;
     
     system("cls");
     
     for(x=0; x<tam; x++){
         if(strcmp(vectoralum[x].clave,"\0")!=0){
         ensenacontact(vectoralum,x); 
         printf("\n\n   ");
     }    
     
     }
     
     system("cls");
     printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("   :::::::::CONTACTOS MOSTRADOS ASCENDENTEMENTE POR CIUDAD::::::::\n");
     printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
     
     for(i=0;i<tam-1;i++){
           for(j=i+1;j<tam;j++){
               if(strcmp(vectoralum[j].nombre,vectoralum[i].nombre)<0){
                   aux=vectoralum[i];
                   vectoralum[i]=vectoralum[j];
                   vectoralum[j]=aux;
               }
           }
     }
     
     for(x=0; x<tam; x++){
         if(strcmp(vectoralum[x].clave,"\0")!=0){
            ensenacontact(vectoralum,x);
            printf("\n\n   "); 
            }
      }
     
     volveratras();
     mostrar(vectoralum,x); 
     
     return;
}

DLLIMPORT void ensenacontact(alumno vectoralum[tam], int x){

     printf("\n   ---------------------------------------------------------------\n");
     printf("   #NOMBRE:      %s                             \n",   vectoralum[x].nombre);
     printf("   #TEL:         %s                             \n",   vectoralum[x].telefonet.fijo);
     printf("   #E-MAIL:      %s                             \n",   vectoralum[x].email);
     printf("   #DIRECCION:   %s %s-%d-%s      %d-%s   \n",   vectoralum[x].direcalu.tipo, vectoralum[x].direcalu.calle, vectoralum[x].direcalu.numeroc, vectoralum[x].direcalu.letrap, vectoralum[x].direcalu.cp, vectoralum[x].direcalu.ciudad);
     printf("   ---------------------------------------------------------------\n\n   ");
     
     return;
}

DLLIMPORT void borranombre(alumno vectoralum[tam], int x){
    
     char nombreleg[15];
     int trobat;
     char opcibor;
    
     printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("   :::::::::::::::::BORRAR CONTACTOS POR EL NOMBRE::::::::::::::::\n");
     printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
     printf("   -ESCRIBE EL NOMBRE DEL CONTACTO DESEADO: ");
     fflush(stdin);
     gets(nombreleg);
     printf("\n   ");
     
     do{
     
     system("cls");
     printf("\n\n   -ESTAS SEGURO DE QUERER BORRAR EL CONTACTO?(S/N): ");
     scanf("%c", &opcibor);
      
     }while ((opcibor!='s') && (opcibor!='n'));
     
     if(opcibor=='n'){
         volveratras();
     
     }
     
     fflush(stdin);
     
     if(opcibor=='s'){       
     
     system("cls");
     
     trobat=0;
     for(x=0; x<tam; x++){
         
         if(strcmp(nombreleg,vectoralum[x].nombre)==0){
             trobat=1;
             
             break;
         }
     }    
         
         if(trobat==1){        
             
             strcpy(vectoralum[x].nombre,"\0"), strcpy(vectoralum[x].alias,"\0");
             strcpy(vectoralum[x].apellido,"\0"), strcpy(vectoralum[x].email,"\0");
             strcpy(vectoralum[x].direcalu.tipo,"\0"), strcpy(vectoralum[x].direcalu.calle,"\0");
             strcpy(vectoralum[x].direcalu.letrap,"\0"), strcpy(vectoralum[x].direcalu.ciudad,"\0");
             strcpy(vectoralum[x].telefonet.fijo,"\0"), strcpy(vectoralum[x].telefonet.movil,"\0");
             strcpy(vectoralum[x].clave,"\0");
             vectoralum[x].direcalu.numeroc=' ';
             vectoralum[x].direcalu.cp=' ';
             
             system("cls");
             printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
             printf("   :::::::::::::::::LOS CONTACTOS HAN SIDO BORRADOS:::::::::::::::\n");
             printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
             
             volveratras();
             borrar(vectoralum,x);
             
         }
         
         }
         if(trobat==0){    
         
             system("cls");
             printf("\n   USUARIO, EL NOMBRE INTRODUCIDO NO COINCIDE CON EL DE NINGUN CONTACTO\n");
             
     volveratras();
     borrar(vectoralum,x);
     
     }    
   
   return;
    
}    
    
DLLIMPORT void borraalias (alumno vectoralum[tam], int x){
    
     char aliaseleg[15];
     int trobat;
     char opcibor;
    
     printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("   :::::::::::::::::BORRAR CONTACTOS POR EL ALIAS:::::::::::::::::\n");
     printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
     printf("   -ESCRIBE LA CIUDAD DEL CONTACTO DESEADO: ");
     fflush(stdin);
     gets(aliaseleg);
     printf("\n   ");
     
     do{
     
     system("cls");
     printf("\n\n   -ESTAS SEGURO DE QUERER BORRAR EL CONTACTO?(S/N): ");
     scanf("%c", &opcibor);
      
     }while ((opcibor!='s') && (opcibor!='n'));
     
     if(opcibor=='n'){
         volveratras();
     }
     
     if(opcibor=='s'){    
     
     trobat=0;
     for(x=0; x<tam; x++){
         
         if(strcmp(aliaseleg,vectoralum[x].alias)==0){
             trobat=1;
             break;
         }
     }    
         
         if(trobat==1){        
             
             strcpy(vectoralum[x].nombre,"\0"), strcpy(vectoralum[x].alias,"\0");
             strcpy(vectoralum[x].apellido,"\0"), strcpy(vectoralum[x].email,"\0");
             strcpy(vectoralum[x].direcalu.tipo,"\0"), strcpy(vectoralum[x].direcalu.calle,"\0");
             strcpy(vectoralum[x].direcalu.letrap,"\0"), strcpy(vectoralum[x].direcalu.ciudad,"\0");
             strcpy(vectoralum[x].telefonet.fijo,"\0"), strcpy(vectoralum[x].telefonet.movil,"\0");
             strcpy(vectoralum[x].clave,"0");
             vectoralum[x].direcalu.numeroc=' ';
             vectoralum[x].direcalu.cp=' ';
             
             system("cls");
             printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
             printf("   :::::::::::::::::LOS CONTACTOS HAN SIDO BORRADOS:::::::::::::::\n");
             printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
             
             volveratras();
             borrar(vectoralum,x);
         }
         
         }
         if(trobat==0){    
         
             system("cls");
             printf("\n   USUARIO, EL ALIAS INTRODUCIDO NO COINCIDE CON EL DE NINGUN CONTACTO\n");
             
     volveratras();
     borrar(vectoralum,x);
     
     }    
   return;
}    
    
DLLIMPORT void borraciudad (alumno vectoralum[tam], int x){
     
     char ciudadeleg[15];
     int trobat;
     char opcibor;
     
     printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("   :::::::::::::::::BORRAR CONTACTOS POR LA CIUDAD::::::::::::::::\n");
     printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
     printf("   -ESCRIBE LA CIUDAD DEL CONTACTO DESEADO: ");
     fflush(stdin);
     gets(ciudadeleg);
     printf("\n   ");
     
     do{
     
     system("cls");
     printf("\n\n   -ESTAS SEGURO DE QUERER BORRAR EL CONTACTO?(S/N): ");
     scanf("%c", &opcibor);
      
     }while ((opcibor!='s') && (opcibor!='n'));
     
     if(opcibor=='n'){
         volveratras();
     }
     
     if(opcibor=='s'){    
     
     trobat=0;
     for(x=0; x<tam; x++){
         
         if(strcmp(ciudadeleg,vectoralum[x].direcalu.ciudad)==0){
             trobat=1;
             break;
         }
     }    
         if(trobat==1){        
             
             strcpy(vectoralum[x].nombre,"\0"), strcpy(vectoralum[x].alias,"\0");
             strcpy(vectoralum[x].apellido,"\0"), strcpy(vectoralum[x].email,"\0");
             strcpy(vectoralum[x].direcalu.tipo,"\0"), strcpy(vectoralum[x].direcalu.calle,"\0");
             strcpy(vectoralum[x].direcalu.letrap,"\0"), strcpy(vectoralum[x].direcalu.ciudad,"\0");
             strcpy(vectoralum[x].telefonet.fijo,"\0"), strcpy(vectoralum[x].telefonet.movil,"\0");
             vectoralum[x].direcalu.numeroc=' ';
             vectoralum[x].direcalu.cp=' ';
             
             system("cls");
             printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
             printf("   :::::::::::::::::LOS CONTACTOS HAN SIDO BORRADOS:::::::::::::::\n");
             printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
             
             borrar(vectoralum,x);
         }
         if(trobat==0){    
         
             system("cls");
             printf("\n   USUARIO, LA CIUDAD INTRODUCIDA NO COINCIDE CON EL DE NINGUN CONTACTO\n");
             
     volveratras();
     borrar(vectoralum,x);
     
     }    
   }
   return;
}

DLLIMPORT void buscanombre(alumno vectoralum[tam], int x){
     
     char nombreleg[15];
     int trobat;
    
     printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("   ::::::::::::::::MOSTRAR CONTACTOS POR EL NOMBRE::::::::::::::::\n");
     printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
     printf("   -ESCRIBE EL NOMBRE DEL CONTACTO DESEADO: ");
     fflush(stdin);
     gets(nombreleg);
     printf("\n   ");
     
     trobat=0;
     for(x=0; x<tam; x++){
         
         if(strcmp(nombreleg,vectoralum[x].nombre)==0){
             trobat=1;
             break;
         }
     }    
         if(trobat==1){        
             
             ensenacontact(vectoralum,x); 
             volveratras();
             buscar(vectoralum,x);
         }
         if(trobat==0){    
         
             system("cls");
             printf("\n   USUARIO, EL NOMBRE INTRODUCIDO NO COINCIDE CON EL DE NINGUN CONTACTO\n");
             
     volveratras();
     buscar(vectoralum,x);
    
     
     }    
   return;
    
}

DLLIMPORT void buscaalias(alumno vectoralum[tam], int x){
     
     char aliaseleg[15];
     int trobat;
    
     printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("   ::::::::::::::::MOSTRAR CONTACTOS POR EL ALIAS:::::::::::::::::\n");
     printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
     printf("   -ESCRIBE EL ALIAS DEL CONTACTO DESEADO: ");
     fflush(stdin);
     gets(aliaseleg);
     printf("\n   ");
     
     trobat=0;
     for(x=0; x<tam; x++){
         
         if(strcmp(aliaseleg,vectoralum[x].alias)==0){
             trobat=1;
             break;
         }
     }    
         
         if(trobat==1){        
             
             ensenacontact(vectoralum,x); 
             
             volveratras();
             buscar(vectoralum,x);
             
         }
         if(trobat==0){    
         
             system("cls");
             printf("\n   USUARIO, EL ALIAS INTRODUCIDO NO COINCIDE CON EL DE NINGUN CONTACTO\n");
             
     volveratras();
     buscar(vectoralum,x);
     
     }    
   return;
   
}

DLLIMPORT void buscaciudad (alumno vectoralum[tam], int x){
     
     char ciudadeleg[15];
     int trobat;
    
     printf("\n   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("   :::::::::::::::::MOSTRAR CONTACTOS POR LA CIUDAD:::::::::::::::\n");
     printf("   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    
     printf("   -ESCRIBE LA CIUDAD DEL CONTACTO DESEADO: ");
     fflush(stdin);
     gets(ciudadeleg);
     printf("\n   ");
     
     trobat=0;
     for(x=0; x<tam; x++){
         
         
         if(strcmp(ciudadeleg,vectoralum[x].direcalu.ciudad)==0){
             trobat=1;
             break;
         }
     }    
         
         if(trobat==1){        
             
             ensenacontact(vectoralum,x);
             
             volveratras();
             buscar(vectoralum,x);
         }
         if(trobat==0){    
         
             system("cls");
             printf("\n   USUARIO, LA CIUDAD INTRODUCIDA NO COINCIDE CON EL DE NINGUN CONTACTO\n");
     volveratras();
     buscar(vectoralum,x);
   }
    return;
}
     
DLLIMPORT void inicializad(alumno vectoralum[tam]){
    int x;
    for(x=0; x<tam; x++){
        strcpy(vectoralum[x].clave,"\0");
}    
    return;
}    
     
//FIN DEL PROGRAMA
     
     
              



    

