#include "generador.h"
#include <Qlist>
#include <QDebug>


Generador::Generador(void)
{
}

Generador::~Generador(void)
{
}
void Generador::generarCasillasVisibles(){
    srand((unsigned int) time(NULL));
    int x, y, num_de_Random;
    casillas_visibles =new bool[81];
            num_de_Random = 50;
            for(int i=0;i<81;i++)casillas_visibles[i]=false;

            for (int i = 0; i < num_de_Random; ++i) {
                x = rand() % 9;
                y = rand() % 9;
                casillas_visibles[(x*9)+y]=true;
                x=y=0;
            }
}


bool Generador::BackTrackSolucion(int startx, int starty){

    bool solved = esCompleto(); // If we are at a leaf we have to return true, because the board is filled
    bool foundzero = false;
    int x = startx, y;

    for (y = starty; !solved && !foundzero && y < 9; ++y) { // Find the first element that is not filled in (we are working recursively)
        for (x = startx; !foundzero && x < 9; ++x){
            foundzero = (tablero[(x*9)+y] == 0);}
        startx = 0;
    }
   x--;
   y--;

    if (!solved && foundzero) { // Only if there is a 0 found we can still backtrack, else: end this recursion
        for (int e = 1; e < 10 && !solved; ++e){

            if (MovimientoValido(x, y, e)) {
                Set(x, y, e);
                if (BackTrackSolucion( x , y+1))
                    solved = true;
                else
                    tablero[(x*9)+ y];
            }
        }
    }

    return solved;

}

bool Generador::resolverTablero(){
     bool resuelto = false;

     if (esValido()) {
         resuelto = escanearSolucion();
                if(!resuelto){
                    //Aqui va tu BACKTRACKING LOCo
            resuelto= BackTrackSolucion(0,0);
                }
    }

    return resuelto;
}

bool Generador::esCompleto(){
    bool lleno = true;

    for (int i = 0; lleno && i < 9; ++i)
        for (int j = 0; lleno && j < 9; ++j)
            lleno = (tablero[(i*9)+j] != 0);

    return lleno;
}

bool Generador::esValido(){

    return (ValidarVertical() && ValidarHorizontal() && ValidarBloque());
}


bool Generador::ChequearHorizontal(int x, int y, int v){
    bool valido = (tablero[(x*9)+y] == 0);
    for (int i = 0; valido && i < 9; ++i)
        valido = (tablero[(i*9)+y] != v);
    return valido;
}

bool Generador::ChequearVertical(int x, int y, int v) {
    bool valido = (tablero[(x*9)+y] == 0);

    for (int i = 0; i < 9 && valido; ++i)
        valido = (tablero[(x*9)+i] != v);

    return valido;
}

bool Generador::ChequearBloque(int x, int y, int v){
    bool valido = (tablero[(x*9)+y] == 0);
    int startx, starty;

    startx = x-(x % 3);
    starty =y- (y % 3);

    for (int i = starty; valido && (i % 3 != 0 || i == starty); i++) {// While not in the next block, and not at end of the board
        for (int j = startx; valido && (j % 3 != 0 || j == startx); j++){
            valido = (tablero[(j*9)+i] != v);

        }
    }

    return valido;
}

int Generador::GetInsertar(int dificultad) {

    if(dificultad<4)
        return 1+rand()%5;
    else if(dificultad==5)
        return 0;
    else
        return (-1)*(2+rand()%4);

}


bool Generador::ValidarHorizontal(){
    bool elementosHorizontales[10];
    bool valido = true;

     // Iterate over the different rows of the board
        for (int j = 0; j < 10; ++j) // Initialize the boolean array
            elementosHorizontales[j] = false;
        for (int i = 0; valido && i < 9; ++i) {
        for (int j = 0; valido && j < 9; ++j) {// Iterate over the current row
            int curElem = tablero[(j*9)+i];
            valido = !elementosHorizontales[curElem]; // Board is still valid if element hasn't occured yet
            if (curElem != 0)
                elementosHorizontales[curElem] = true;
        }
        for (int j = 0; j < 10; ++j) // Initialize the boolean array
            elementosHorizontales[j] = false;
    }

    return valido;
}

bool Generador::ValidarVertical() {
    bool elementosVerticales[10];
    bool valido = true;

// Iterate over the different columns of the board
        for (int j = 0; j < 10; j++) // Initialize the boolean array
            elementosVerticales[j] = false;

    for (int i = 0; valido && i < 9; ++i) {
        for (int j = 0; valido && j < 9; ++j) {// Iterate over the current column
            int curElem = tablero[(i*9)+j];
            valido = !elementosVerticales[curElem]; // Board is still valid if element hasn't occured yet
            if (curElem != 0)
                elementosVerticales[curElem] = true;
        }
          for (int k = 0; k < 10; k++) // Initialize the boolean array
            elementosVerticales[k] = false;
    }

    return valido;
}

bool Generador::ValidarBloque() {
    bool elementosBloque[10];
    bool valido = true;

 // Iterate over the blocks, vertically
            for (int j = 0; j < 10; ++j) // Initialize the boolean array
                elementosBloque[j] = false;
                for (int startX = 0; valido && startX < 9; startX += 3){ // Iterate over the blocks, horizontally
        for (int startY = 0; valido && startY < 9; startY += 3) {
            for (int i = startX; valido && (i % 3 != 0 || i == startX); ++i){ // Iterate over the current block
                for (int j = startY; valido && (j % 3 != 0 || j == startY); ++j) {
                    int curElem = tablero[(j*9)+i];
                    valido = !elementosBloque[curElem]; // Board is still valid if element hasn't occured yet
                    if (curElem != 0)
                        elementosBloque[curElem] = true;
                }
            }
                for (int j = 0; j < 10; ++j) // Initialize the boolean array
                elementosBloque[j] = false;

        }
                }


    return valido;
}

void Generador::Set(int x, int y, int v ){
    tablero[(x*9)+y]=v;
}

bool Generador::escanearSolucion(){

    bool encontrado = esValido(); //Only enter the filling loop if the board is valid
    int numPossible;
    bool possibleSolutions[9][9][10]; // 10 to avoid confusion (element 0 is always false)
    for (int y = 0; y < 9; ++y) // Preparation; set all element 0's to false, and all the rest to true
        for (int x = 0; x < 9; ++x) {
            possibleSolutions[x][y][0] = false;
            for (int v = 1; v < 10; ++v)
                possibleSolutions[x][y][v] = true;
        }

        while (!esCompleto() && encontrado) { // While we still encontrado possible moves
        encontrado = false; // In encontrado we keep if we have filled in an element
        for (int y = 0; y < 9; ++y)
            for (int x = 0; x < 9; ++x) {
                numPossible = 0; // We keep the number of possibilities
                for (int v = 1; v < 10; ++v) { // Looking for possible solutions per box
                    if (possibleSolutions[x][y][v]) { // If it hasn't already been marked as impossible (we're working incrementally)
                        possibleSolutions[x][y][v] = MovimientoValido(x, y, v);
                        if (possibleSolutions[x][y][v]) // If it is still a valid move
                            ++numPossible;
                    }
                }
                if (numPossible == 1) {
                    for (int v = 1; v < 10; ++v)
                        if (possibleSolutions[x][y][v])
                            Set(x, y, v);
                    encontrado = true;
                }
            }
    }

        return esCompleto();
}

bool Generador::MovimientoValido(int x, int y, int v ){

    if (ChequearHorizontal(x, y, v) && ChequearVertical(x, y, v) && ChequearBloque(x, y, v))
            {return true;
}
        else{
            return false;

        }
}



void Generador::generarSolucionRandom(){
    srand((unsigned int) time(NULL));
    int x, y, num_de_Random,v;

            num_de_Random = 25;
       do {
           for(int i=0;i<81;i++) tablero[i]=0;
            for (int i = 0; i < num_de_Random; ++i) {
                x = rand() % 9;
                y = rand() % 9;
                v = rand() % 9 + 1;
                if (MovimientoValido(x, y, v)){
                    Set(x, y, v);
                }
                else{
                    i--;
                }
                x=y=v=0;
            }


     } while (!resolverTablero());
}
bool Generador::EstaLlenoTablero(){
    bool encontrado = false;

       // Rows
       for (int y = 0; y < 9 && !encontrado; ++y) {
           bool sinLlenar = false;
           for (int x = 0; x < 9 && !sinLlenar; ++x)
               sinLlenar = (tablero[(x*9)+ y] == 0);
           encontrado = !sinLlenar;
       }

       // Columns
       for (int x = 0; x < 9 && !encontrado; ++x) {
           bool sinLlenar = false;
           for (int y = 0; y < 9 && !sinLlenar; ++y)
               sinLlenar = (tablero[(x*9)+ y] == 0);
           encontrado = !sinLlenar;
       }

       //Blocks
       for (int startX = 0; !encontrado && startX < 9; startX += 3) // Iterate over the blocks, horizontally
           for (int startY = 0; !encontrado && startY < 9; startY += 3) { // Iterate over the blocks, vertically
               bool sinLlenar = false;
               for (int i = startX; !sinLlenar && (i % 3 != 0 || i == startX); ++i) // Iterate over the current block
                   for (int j = startY; !sinLlenar && (j % 3 != 0 || j == startY); ++j)
                       sinLlenar = (tablero[(j*9)+ i] == 0);
               encontrado = !sinLlenar;
           }

       return encontrado;
}

bool Generador::VerificarResolucion(bool UnaSolucion) {
   bool solucionado;
    if (esValido()) {
        solucionado = escanearSolucion(); // Works on a copy of the original board

        if (!UnaSolucion && !solucionado)
            solucionado = BackTrackSolucion(0,0); // Will make use of things already done by ScanSolve()

        return solucionado;
    }
    else
        return false;
}

 bool Generador::Eliminar_Resolver(int realx, int realy){
     bool salida = false;

     if (tablero[(realx*9)+realy] == 0)
             return false;

         int value = tablero[(realx*9)+realy];
         tablero[(realx*9)+realy]=0;
         salida = (VerificarResolucion(true)); // ScanSolve() only
         tablero[(realx*9)+realy]=value;
         return salida;
 }


void Generador::GenerarTablero( int dificultad){
    bool posibilidades;

    lista_op=QList<Posicion>();
    tablero=(int*) malloc(sizeof(int)*81);
    for(int i=0;i<81;i++) tablero[i]=0;
    generarSolucionRandom();
    do {
           posibilidades = false; // We keep track of any removed elements in the last iteration
           int y_rand = rand() % 9; // So we don't always start erasing the first few elements
           int x_rand = rand() % 9;
           for (int y = 0; y < 9; ++y)
               for (int x = 0; x < 9; ++x) {
                   int realx = (x + x_rand) % 9; // The real x and y positions
                   int realy = (y + y_rand) % 9;
                   if (tablero[(x*9)+y] != 0 && Eliminar_Resolver(realx, realy)) { // We want the board to be solvable by ScanSolve() only, so it has only 1 solution
                       qDebug()<<"entro";
                       Posicion pe((realx*9)+realy, tablero[(realx*9)+realy]);
                       lista_op.push_back(pe);
                       tablero[(x*9)+y]=0;
                       posibilidades = true;
                   }

               }
       } while (!posibilidades);
    int Insertar = GetInsertar(dificultad);

       bool stillFoundOne = true;
       pila= QStack<Posicion>();
       while (Insertar > 0 && stillFoundOne) {
           stillFoundOne = false;

           int yoffset = rand() % 9; // So we don't always start erasing the first few elements
           int xoffset = rand() % 9;

           for (int y = 0; y < 9 && Insertar > 0 && !lista_op.empty(); ++y)
               for (int x = 0; x < 9 && Insertar > 0 && !lista_op.empty(); ++x) {
                   int realx = (x + xoffset) % 9; // The real x and y positions
                   int realy = (y + yoffset) % 9;
                   Posicion pe((realx*9)+realy, tablero[(realx*9)+realy]);
                   pila.push(pe);
                   tablero[(realx*9)+realy]=0; // Remove the element from the board and try to solve it again

                   bool foundOne = false;
                   for (QList<Posicion>::iterator it = lista_op.begin(); it != lista_op.end() && !foundOne;) {
                       tablero[it->GetPos()]=it->GetValor();
                       if (VerificarResolucion(true)) { // Board is solvable by ScanSolve()
                           Posicion addpos(it->GetPos(), it->GetValor());
                           pila.push(addpos);

                           it = lista_op.erase(it); // Remove from the undoList and add to the pila

                           --Insertar;
                           foundOne = true;
                           stillFoundOne = true;
                       }
                       else
                           it++;

                       tablero[(realx*9)+realy]=0; // Removed in BOTH CASES!

                       if (!foundOne && !pila.empty()) {
                           tablero[pila.top().GetPos()]=pila.top().GetValor();
                           pila.pop();
                       }
                   }
               }
       }

       if (Insertar > 0 || !EstaLlenoTablero()) // We don't want the board to contain filled in blocks/rows/columns
           GenerarTablero(dificultad);
       // This is much faster than checking and removing to keep the current level!
       else {
           while (!pila.empty()) {
               tablero[pila.top().GetPos()]=pila.top().GetValor();
               pila.pop();
           }

           // To remove extra elements if level > 5, THIS IS NOT BEING USED AT THIS MOMENT!
           for (int i = 0; i > Insertar; --i) {
               int randx = rand() % 9;
               int randy = rand() % 9;
               if (tablero[(randx*9)+randy] != 0)
                   tablero[(randx*9)+randy]=0;
               else
                   ++i;
           }
       }
}

