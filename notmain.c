#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "ppm6.h"

/////////////////////////////////////////////////////////////

//TODO: -
/*
    Rainbow - 1 1 1
    Xmas r1 - 2 2 2
    Xmas r2 - 3 3 3
 */

int main(){
    int stmX=700,stmY=900;
    struct PPM6* pav = kurkPaveiksleli("pvz4.ppm", stmX, stmY, 255);
    staciakampis(pav, 0, 0, 100, 100, 0,0,50);

    //int r=0,g=0,b=0;

    //x 0-5; y 0-7; cord*s

    char text[]="EGLUTE SKAROTA EGLUTE ZALIA MESKUTE GAURUOTA JA LANKO SILE JOS LIAUNA KAMIENA KALENA GENIAI NAUJU METU DIENA JA PUOS MOKINIAI";
    char alph[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char numb[]="1234567890";
    char symb[]=" .,!-*^";

	//*
	strtoppm(pav,"A",50,50,100,stmX,stmY,0,0,0);
	/*/

	/*
    strtoppm(pav,text,23,25,8,stmX,stmY,2,2,2);
    */
    
    /*
    strtoppm(pav,alph,23,25,8,stmX,stmY,2,2,2);
    strtoppm(pav,numb,23,225,8,stmX,stmY,1,1,1);
    strtoppm(pav,symb,23,425,8,stmX,stmY,0,0,0);
    */

	/*
    rSNW(pav,100,200,20,0,255,255);
    rSNW(pav,400,300,25,0,255,255);
    rSNW(pav,100,450,15,0,255,255);
    rSNW(pav,200,500,35,0,255,255);
    */




















    rasykPaveiksleli(pav);
    trinkPaveiksleli(pav);

    return 0;
}
