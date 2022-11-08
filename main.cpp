#include <iostream>
#include <fstream>
#include <string>
#include "sculptor.h"

int main(void) {

// Exemplo 

  Sculptor exemplo(30, 30, 30);

  exemplo.setColor(0.255, 0.255, 0, 0.9); 
  exemplo.putSphere(10, 10, 10, 10);
 
  exemplo.cutSphere(9, 9, 9, 9);
    
  exemplo.setColor(0.6, 0.4, 0, 11);
  exemplo.putBox(28, 30, 28, 30, 28, 30);


  exemplo.setColor(1, 0, 0, 0.9);
  exemplo.putEllipsoid(0, 27, 28, 30, 1, 27);

  exemplo.cutEllipsoid(0, 8, 28, 30, 0, 8);

  
  std::cout << "O ARQUIVO exemplo.off FOI CRIADO!" << std::endl;
  
  exemplo.writeOFF((char *) "exemplo.off"); //geracao do arquivo


  //----------------------------FIM DO EXEMPLO---------------------------//

  std::cout << "\n";

  //---------------------------ESCULTOR PRINCIPAL-----------------------//
  Sculptor mine(30, 30, 30);

  //caixa

  mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox(0, 30, 0, 25, 0, 30);
// bloco marrom

  mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0, 30, 28, 30, 0, 30);
  // camada verde
//blocos verdes destacados 
  mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0, 2, 26,27 , 0, 0);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(4, 4, 26,27 , 0, 0);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(13,15, 26,27 , 0, 0);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(8,9, 26,27 , 0, 0);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(11,12, 26,27 , 0, 0);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(28, 30, 26,27 , 0, 0);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(26,26, 26,27 , 0, 0);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(21,22,26,27 , 0, 0);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox( 18,19,26,27 , 0, 0);
  // bloco verde

  //bloco marrom destacado
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 3,3,26,27 , 0, 0);
  // bloco marrom
 mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 5,7,26,27 , 0, 0);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 10,10,26,27 , 0, 0);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 19,21,26,27 , 0, 0);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 23,26,26,27 , 0, 0);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 27,27,26,27 , 0, 0);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 16,18,26,27 , 0, 0);
  // bloco marrom



  //blocos verdes destacados 2
  mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0, 2, 26,27 , 30, 30);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(4, 4, 26,27 ,30, 30);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(13,15, 26,27 , 30, 30);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(8,9, 26,27 , 30,30);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(11,12, 26,27 , 30,30);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(28, 30, 26,27 , 30,30);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(26,26, 26,27 , 30,30);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(21,22,26,27 , 30,30);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox( 18,19,26,27 , 30,30);
  // bloco verde

  //bloco marrom destacado
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 3,3,26,27 , 30,30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 5,7,26,27 , 30,30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 10,10,26,27 , 30, 30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 19,21,26,27 , 30, 30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 23,26,26,27 , 30, 30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 27,27,26,27 , 30, 30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 16,18,26,27 , 30, 30);
  // bloco marrom

  
    //blocos verdes destacados 3
  mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0, 0, 26,27 , 0,2 );
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0, 0, 26,27 ,4, 4);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0,0, 26,27 , 8, 9);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0,0 , 26,27 , 11,12);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0,0, 26,27 , 13,15);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0, 0, 26,27 , 17,11);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0,0, 26,27 , 30,30);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox(0,0,26,27 , 30,30);
  // bloco verde
mine.setColor(0, 1, 0, 0.9);
  mine.putBox( 0,0,26,27 , 30,30);
  // bloco verde

  //bloco marrom destacado
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 0,0,26,27 , 30,30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 0,0,26,27 , 30,30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 0,0,26,27 , 30, 30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 0,0,26,27 , 30, 30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 0,0,26,27 , 30, 30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 0,0,26,27 , 30, 30);
  // bloco marrom
mine.setColor(0.6, 0.4, 0, 0.9);
  mine.putBox( 0,0,26,27 , 16, 18);
  // bloco marrom


  
  std::cout << "O ARQUIVO mine.off FOI CRIADO!" << std::endl;

  mine.writeOFF((char *) "mine.off");

  //----------------------FIM DO ESCULTOR PRINCIPAL----------------//
  
}