#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//agrega el elemento valor (dado) a mi_set (dado)
void agregarASet(set<int> *mi_set,int valor)
{
    mi_set->insert(valor); // Colocamos el valor dentro del apuntador mi_set
}

//devuelve true si valor (dado) existe en mi_set (dado)
bool existe(set<int> mi_set,int valor)
{
    for(set<int>::iterator t = mi_set.begin(); t!= mi_set.end(); t++)// esto dos iteradores especiales apunta al primer elemento de mi_set y a el primer elemento fuera de mi_set
    {

        while(*t== valor)// creamos una condicion para recorrer
        {
            return true; // esto retorna verdadero si la condicion es verdadera dentro del set
        }

    }
    return false; // esto retorna falso si la condicion anterios no se cumple


}

//devuelve la cantidad de elementos de mi_set (dado)
int tamano(set<int> mi_set)
{
    return mi_set.size(); //retornamos el tamaño de la condicion mi_set
}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;
    for(set<int>:: iterator it= mi_set1.begin();it!= mi_set1.end(); it++) // esto dos iteradores especiales apunta al primer elemento de mi_set1 y a el primer elemento fuera de mi_set1

    {

        for(set<int>:: iterator it2= mi_set2.begin();it2 != mi_set2.end(); it2++) // esto dos iteradores especiales apunta al primer elemento de mi_set1 y a el primer elemento fuera de mi_set1

            {
            if(*it == *it2) // verificamos que el valor del primer set sea igual que el segundo (interseccion)
            {

                mi_set3.insert(*it); // se inserta el valor que sea similiar a la interseccion
            }
        }
    }
    return mi_set3; // con return devolvemos los valores insertados en el set
}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;


}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    return false;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
