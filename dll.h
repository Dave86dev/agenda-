#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
# define DLLIMPORT __declspec (dllexport)
#else /* Not BUILDING_DLL */
# define DLLIMPORT __declspec (dllimport)
#endif /* Not BUILDING_DLL */


class DLLIMPORT DllClass
{
  public:
    DllClass();
    virtual ~DllClass(void);

  private:

};


#endif /* _DLL_H_ */

#define tam 15

DLLIMPORT typedef union telf{
    char fijo[15];
    char movil[12];
};

DLLIMPORT typedef struct direccion{
    char tipo[10];
    char calle[45];
    int numeroc;
    char letrap[3];
    int cp;
    char ciudad[15];
};

DLLIMPORT typedef struct alumno{
    char clave[16];
    char nombre[15];
    char alias[15];
    char apellido[35];
    char email[35];
    direccion direcalu;
    telf telefonet;   
};
DLLIMPORT alumno vectoralum[tam],aux;

//A continuación procedo a declarar las distintas funciones que va a necesitar el programa

DLLIMPORT int menu();                             
DLLIMPORT void salir();
DLLIMPORT void volveratras();
DLLIMPORT int pregsalir();                       
DLLIMPORT void alta(alumno vectoralum[tam],int x);       
DLLIMPORT void altanombreapellali(alumno vectoralum[tam], int x);
DLLIMPORT void altamailtipocalle(alumno vectoralum[tam], int x);
DLLIMPORT void altanumeropuertaciudadcp(alumno vectoralum[tam], int x);
DLLIMPORT void altatelefonos(alumno vectoralum[tam], int x);
DLLIMPORT void modif(alumno vectoralum[tam], int x);
DLLIMPORT void menumodif(alumno vectoralum[tam], int x);
DLLIMPORT void modificaciones(alumno vectoralum[tam], int modifeleg, int x);           
DLLIMPORT void borrar(alumno vectoralum[tam], int x); 
DLLIMPORT void borranombre(alumno vectoralum[tam], int x);
DLLIMPORT void borraalias (alumno vectoralum[tam], int x);
DLLIMPORT void borraciudad (alumno vectoralum[tam], int x);
DLLIMPORT void buscar(alumno vectoralum[tam], int x);      
DLLIMPORT void buscaciudad (alumno vectoralum[tam], int x);
DLLIMPORT void buscanombre(alumno vectoralum[tam], int x);
DLLIMPORT void buscaalias(alumno vectoralum[tam], int x); 
DLLIMPORT void mostrar(alumno vectoralum[tam], int x);      
DLLIMPORT void mostrarnombre(alumno vectoralum[tam], int x);
DLLIMPORT void mostrarciudad(alumno vectoralum[tam], int x);
DLLIMPORT void ensenacontact(alumno vectoralum[tam], int x);
DLLIMPORT void inicializad(alumno vectoralum[tam]);
