 // EMANOEL NETO SANTOS LUZ // 


// QUESTÃO 1//
/*
#include <iostream>
using namespace std;
int main()


{
	int numero;
    cout << "Digite um número inteiro";
	cin >> numero;
	cout << numero * 2 << endl;
	return 0;
}

*/

//QUESTÃO 2//

/*

#include <iostream>
using namespace std;

int main () 
{
	int numero, quadrado;
	float quinto;

    cout << "Digite um número: ";
    cin >> numero;

	quadrado = numero * numero ;
	quinto = (numero / 5) ;
    cout << "O número elevado ao quadrado é " << quadrado << endl;
    cout << "A quinta parte é " << quinto;

    return 0;
}

*/

// QUESTÃO 3 // 

/*#include <iostream>
using namespace std;
int main () 
{
	float preco, novo_preco;
    cout << "Digite o preço do produto ";
	cin >> preco;
	novo_preco = preco - (preco * 0.12);
	cout << "Seu novo preço é: "<< novo_preco;

	return 0;
}
*/

// QUESTÃO 4

/*
#include <iostream>
using namespace std;

main() 
{
    float pesoSacoKg;
    float racaoPorGatoGramas;
    float pesoSacoGramas;
    float racaoTotalConsumida;
    float racaoRestante;

    // Entrada de dados
    cout << "Digite o peso do saco de ração (em kg): " ;
    cin >> pesoSacoKg ;

    cout << "Digite a quantia de ração dada para cada gato em gramas: " ;
    cin >> racaoPorGatoGramas;

    // Conversão de quilos para gramas
    pesoSacoGramas = pesoSacoKg * 1000 ;

    // Cálculo da ração consumida em 5 dias por dois gatos
    racaoTotalConsumida = (racaoPorGatoGramas * 2) * 5 ;

    // Cálculo da ração restante
    racaoRestante = pesoSacoGramas - racaoTotalConsumida;

    // Saída
    cout << "Após 5 dias, restará " << racaoRestante << " g de ração." << endl;

    return 0;

}

*/

// QUESTÃO 6
/*
#include <iostream>
using namespace std;
int main ()
{
	int a = 20, b = 88, c = 0;
	a=a+b;
    b=a-b;
    a=a-b;

	cout<<" Valor de a " <<a<<endl;
	cout<<" Valor de b " <<b<<endl;
	return 0;

}
*/
// QUESTÃO 7
/*
#include <iostream>
#include <cmath> // Biblioteca para usar sqrt()
using namespace std;
int main () 

{
    long cateto1, cateto2;
    float hipotenusa;

    // Entrada de dados
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;

    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;

    // Cálculo da hipotenusa
    hipotenusa = (pow(cateto1, 2)) + (pow(cateto2, 2));
    cout << "A medida da hipotenusa é: " << hipotenusa << endl;
    
    return 0;

}
*/

// QUESTÃO 9 
/*
#include <iostream>
using namespace std;
int main ()

{
    int val;
    int div1, div2, div3, div4, div5, div6;

    cout << "Digite o valor da nota: ";
    cin >> val;
    
    div1 = (val / 100);
    val = (val % 100);

    div2 = (val / 50);
    val = (val % 50);

    div3 = (val / 20);
    val = (val % 20);

    div4 = (val / 10);
    val = (val % 10);

    div5 = (val / 5);
    val = (val % 5);

    div6 = (val / 2);
    val = (val % 2);

    cout << div1 << endl;
    cout << div2 << endl;
    cout << div3 << endl;
    cout << div4 << endl;
    cout << div5 << endl;
    cout << div6 << endl;


    return 0;

}

*/

// QUESTÃO 10

/*

#include <iostream>
using namespace std;
int main()

{
    float valor;
    float polegadas;
    float jardas;
    double milhas;

    cout << "Digite o valor em pés: ";
    cin >> valor;

    polegadas = (valor * 12);
    jardas = (valor / 3);
    milhas = (valor / 5280);

    cout << polegadas << endl;
    cout << jardas << endl;
    cout << milhas;

    return 0;

}

*/

// QUESTÃO 11

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    float x1, x2, y1, y2, distancia;

    cout << "Digite o valor de x1";
    cin >> x1;
    cout << "Digite o valor de y1";
    cin >> y1;
    cout << "Digite o valor de x2";
    cin >> x2;
    cout << "Digite o valor de y2";
    cin >> y2;


    distancia = sqrt((pow ((x2-x1) ,2)) + (pow ((y2-y1) ,2)));

    cout << distancia;

    return 0;

}



// QUESTÃO 12
/*
#include <iostream>
using namespace std;
int main ()
{
    double temp, valor;

    cout << "Digite o valor para a conversão: ";
    cin >> valor;

    temp = (valor-32)*(5/9);
    cout << temp;

    return 0;

}

*/

// QUESTÃO 13

/*

#include <iostream>
using namespace std;
int main ()

{
    int dinheiro, canhao, polvora, espada;

    cout << "Quanto de dinheiro há disponível?: ";
    cin >> dinheiro;

    canhao = (dinheiro / 10000);
    dinheiro = (dinheiro % 10000);

    polvora = (dinheiro / 2000);
    dinheiro = (dinheiro % 2000);

    espada = (dinheiro / 1500);
    dinheiro = (dinheiro % 1500);

    cout << canhao << endl << polvora << endl << espada;

    return 0;

}

*/

// QUESTÃO 14

/*

#include <iostream>
using namespace std;
int main ()

{
    float peso, gordo, magro;

    cout << "Digite o peso: ";
    cin >> peso;

    gordo = (0.15 * peso) + peso;
    magro = peso - (0.20 * peso);

    cout << gordo << endl << magro << endl;

    return 0;
}

*/


// QUESTÃO 15

/*
#include <iostream>
#include <cmath>
using namespace std;
int main ()

{
    float a,b,c,delta,x1,x2;
    a=1;
    b=-3;
    c=-54;
    
    delta = pow(b,2) - (4 * a * c);
EMANOEL NETO SANTOS LUZ 


// QUESTÃO 1//
/*
#include <iostream>
using namespace std;
int main()


{
	int numero;
    cout << "Digite um número inteiro";
	cin >> numero;
	cout << numero * 2 << endl;
	return 0;
}

*/

//QUESTÃO 2//

/*

#include <iostream>
using namespace std;

int main () 
{
	int numero, quadrado;
	float quinto;

    cout << "Digite um número: ";
    cin >> numero;

	quadrado = numero * numero ;
	quinto = (numero / 5) ;
    x1 = ((-b) + sqrt(delta)) / (2*a);
    x2 = ((-b) - sqrt(delta)) / (2*a);

    cout << x1 << endl << x2;

    return 0; 
}

*/

// QUESTÃO 16

/*

#include <iostream>
using namespace std;
int main ()

{
    int valor;

    cout << "Digite o valor desejado: ";
    cin >> valor;

    cout << (valor + 1) << endl << (valor - 1);


}

*/

// QUESTÃO 17

/*

#include <iostream>
#include <cmath>
using namespace std;
int main ()

{
    float area_circ, raio;

    cout << "Digite o valor da área do círculo: ";
    cin >> area_circ;

    raio = 3.14 * pow(area_circ, 2);
    cout << raio;
    return 0;
}

*/