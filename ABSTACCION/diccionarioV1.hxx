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

	entrada e("",-1);
	dic.push_back(e);
	pos_max=0;

}
/**
 @todo implementa esta función
*/
diccionario::diccionario( const entrada & nula ){ 
	dic.push_back(nula);
	pos_max=0;

}
/**
 @todo implementa esta función
*/
diccionario::diccionario (const diccionario & d){
	*this=d;
}


const diccionario::entrada & diccionario::null() const {

	return dic[0];

}

/**
 @todo implementa esta función
*/
const diccionario::entrada & diccionario::find( const string & s) const{

	for (int i=1;i<dic.size();i++)
		if(dic[i].first==s)
			return dic[i];
	return null();

}

/**
 @todo implementa esta función
*/
int & diccionario::operator[](const string & s) {
 bool encontrado = false;
  int i;
  for (i=1;i<dic.size() && ! encontrado ;  ){
    if (dic[i].first == s)
      encontrado = true;
    else i++;
  }
  if (!encontrado) {
       dic.push_back(entrada(s,0));
       i = dic.size()-1;
  }
  return dic[i].second;
}
	

/**
 @todo implementa esta función
*/
const int & diccionario::operator[](const string & s) const{
	return this->find(s).second;

}

/**
 @todo implementa esta función
*/
diccionario & diccionario::operator=( const diccionario & org){
	this->dic=org.dic;
	this->pos_max=org.pos_max;
	return *this;

}

	/** @brief numero de entradas en el diccionario
@post  No se modifica el diccionario.
*/

diccionario::size_type diccionario::size() const {
return dic.size()-1;


}

/**
 @todo implementa esta función
*/
bool diccionario::empty() const{
	if(dic.empty()||dic.size()==1)
		return true;
	return false;

}

/**
 @todo implementa esta función
*/
const string & diccionario::max_element( ) const {

	size_type pos_max=0;
	int contador= dic[pos_max].second;

	for(int i=1;i<dic.size();i++)
		if(dic[i].second>contador){
			contador=dic[i].second;
			pos_max=i;
		}
	return dic[pos_max].first;
}
	 
/**
 @todo implementa esta función
*/
/*
i) Dic.size() == D.dic.size();

ii) Para todo i, 0 <= i < D.dic.size() se cumple
	D.dic[D.mayor] >= D.dic[i].second;
	D.dic[i].second > 1;
	D.dic[i].first != "";
	D.dic[i].fisrt != D.dic[j].first, para todo j!=i.
============================================================*/
bool diccionario::cheq_rep( ) const {
	bool com1=false;
	bool com2=false;
	bool com3=false;
	if(dic.size()==this->size())
		com1=true;
	for(int i=0;i<this->size();i++){
	
	if(dic[pos_max].second>=dic[i].second && dic[i].second>1 && dic[i].first != "" ){
		com3=true;

	for(int j=0;j<this->size();j++)
		if(j!=i)
			if(dic[i].first != dic[j].first)
				com3=true;
	}

	
}
	return com1&&com2&&com3;
}
  
/**
 @todo implementa esta función
*/
ostream &  operator << ( ostream & sal, const diccionario & D){

	for (int i=0;i<D.size();i++)
		sal<<D.dic[i].first<<"   |   "<<D.dic[i].second<<"\n";
	return sal;
}


