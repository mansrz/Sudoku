#include <stdlib.h>
#include <stack>
#include <time.h>

/**
* @file generador.h
* @brief Este archivo contiene la interfaz del generador de Sudokus
*
* @author Veronica Pozo
* @author Jose Salas
* @author Manuel Suarez
*
* @date 06/01/2013
*/

class Generador
{
public:

    /**
    * Generador Metodo constructor.
    */
    Generador(void);


    /**
    * ~Generador Destructor
    */
    virtual ~Generador(void);
    //static void GenerateBoard(Board * board, int level = 1);


    /**
    * GenerarTablero
    * @param dificultad
	@return Genera el tablero con solucion
	
    */
    void GenerarTablero(int dificultad);
    


    /**
    * resolverTablero
    * @return Resuelve el tablero de una manera mas superficial.
    */
    bool resolverTablero();


    /**
    * escanearSolucion
    * @return Escanea posible solucion del tablero.
    */
    bool escanearSolucion();
    void generarCasillasVisibles();
    int *tablero;
    bool *casillas_visibles;

 private:

    /**
    * BackTrackSolucion
    * @param startx
    * @param starty
    * @return Algoritmo para poder llenar espacios vacios del tablero
    */
    bool BackTrackSolucion(int startx, int starty);


    /**
    * esCompleto
    * @return Verifica si hay un 0 en el tablero.
    */
    bool esCompleto();


    /**
    * esValido
    * @return Verdadero si el tablero es valida, falso si no lo es.
    */
    bool esValido();


    /**
    * generarSolucionRandom
    */
    void generarSolucionRandom();


    /**
    * MovimientoValido
    * @param x
    * @param y
    * @param v
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool MovimientoValido(int x, int y, int v);


    /**
    * Set
    * @param x
    * @param y
    * @param v
    * @return Modifica el valor del arreglo tablero en la posicion x,y
    */
    void Set(int x, int y, int v);


    /**
    * ChequearHorizontal
    * @param x
    * @param y
    * @param v
    * @return Verifica si hay un numero repetido en las horizontales.
    */
    bool ChequearHorizontal(int x, int y, int v);


    /**
    * ChequearVertical
    * @param x
    * @param y
    * @param v
    * @return Verifica si hay un numero repetido en las verticales.
    */
    bool ChequearVertical(int x, int y, int v);


    /**
    * ChequearBloque
    * @param x
    * @param y
    * @param v
    * @return Verifica si hay un numero repetido en el bloque.
    */
    bool ChequearBloque(int x, int y, int v);


    /**
    * ValidarHorizontal
    * @return Valida las horizontales del tablero
    */
    bool ValidarHorizontal();


    /**
    * ValidarVertical
    * @return Valida las verticales del tablero
    */
    bool ValidarVertical();


    /**
    * ValidarBloque
    * @return Valida los bloques del tablero
    */
    bool ValidarBloque();

};


