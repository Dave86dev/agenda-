#include "dll.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Aquí irá el include de la libreria a hacer


 int main(){
    alumno vectoralum[tam];          
          int opcion;
          char opceixir;
          int opeleg;
          int x;
          int contacteleg;
          
          x=0;
          
          inicializad(vectoralum);
        
          do{ opeleg=menu();
          
          switch(opeleg){
              
              case 1:
                  
              opceixir=pregsalir();
              
              break;
              
              case 2:
                  
              alta(vectoralum,x);  
              x=x+1;
              
              break;
              
              case 3:
                  
              modif(vectoralum,x);
               
              break;
              
              case 4:
              
              borrar(vectoralum,x); 
              
              break;
              
              case 5:
              
              buscar(vectoralum,x);
              
              break;
              
              case 6:
              
              mostrar(vectoralum,x);
              
              break;
              
              } 
               
              }while(opceixir!=1); 
              
        system("PAUSE");
      return 1;
  }    
 

