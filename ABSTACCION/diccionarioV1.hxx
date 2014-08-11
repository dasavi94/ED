/* 
 * diccionario.h
 * 
 * Copyright  (C) Juan F. Huete
 * 
 * diccionario:: diccionario, end, find, operator[], size, max_element
 * tipos diccionario::entrada, diccionario::size_type
 * 
 *
===================================================================================
Funcion de Abstraccion:
AF: Rep => Abs
   
  dado D=(vector<entrada>  dic, int mayor) ==> Diccionario Dic;
  
Un objeto abstracto, Dic, representando una colección de pares (string,int) se instancia en la clase diccionario como un vector de entradas, definidas como  diccionario::entrada. Dada una entrada, x, en D,  x.first representa a una palabra válida (clave) y x.second representa el número de veces que ocurre x (definición). 

D.dic[D.mayor] hace referencia a la entrada más frecuente en el diccionario.
=====================================================================================
Invariante de la Representación:



i) Dic.size() == D.dic.size();

ii) Para todo i, 0 <= i < D.dic.size() se cumple
	D.dic[D.mayor] >= D.dic[i].second;
	D.dic[i].second > 1;
	D.dic[i].first != "";
	D.dic[i].fisrt != D.dic[j].first, para todo j!=i.
=====================================================================================
*/
#include <assert.h>


/**
 @todo implementa esta función
*/
diccionario::diccionario(){ 

}
/**
 @todo implementa esta función
*/
diccionario::diccionario( const entrada & nula ){ 

}
/**
 @todo implementa esta función
*/
diccionario::diccionario (const diccionario & d){

}


const diccionario::entrada & diccionario::null() const {

}

/**
 @todo implementa esta función
*/
const diccionario::entrada & diccionario::find( const string & s) const{

}

/**
 @todo implementa esta función
*/
int & diccionario::operator[](const string & s) {

}
	

/**
 @todo implementa esta función
*/
const int & diccionario::operator[](const string & s) const{

}

/**
 @todo implementa esta función
*/
diccionario & diccionario::operator=( const diccionario & org){

}

	/** @brief numero de entradas en el diccionario
@post  No se modifica el diccionario.
*/

diccionario::size_type diccionario::size() const {

}

/**
 @todo implementa esta función
*/
bool diccionario::empty() const{

}

/**
 @todo implementa esta función
*/
const string & diccionario::max_element( ) const {

}
	 
/**
 @todo implementa esta función
*/
bool diccionario::cheq_rep( ) const {

}
  
/**
 @todo implementa esta función
*/
ostream &  operator << ( ostream & sal, const diccionario & D){
  
}


