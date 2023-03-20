#include <iostream>
using namespace std;

//EJERCICIO Nº3
void altera_colorpar(int *colorfondo, int maxsize){
    int pos;
    for (int i = 0; i < maxsize; i++)
    {
        pos = i;
        if ((pos%2)==0)
        {   
            if(0 > (colorfondo[i]-10)){
                colorfondo[i+1] -= 10;
            }
        }
        
    }
    
}
int main(){
    int colorfondo[7] ={200,5,67,59,17,56};
    altera_colorpar(colorfondo,7);
    for (int i = 0; i < 6; i++)
    {
        cout<<colorfondo[i]<<" ";
    }
    //200 5 67 49 17 46  
}