#include<iostream>
#include<locale.h>
#include<vector>
#include<string>
#include <climits>
using namespace std;


int main(){
	setlocale(LC_ALL,"portuguese");
	int op,decisao,qt,indice,cont_p;
	float p,soma;
	string nome,procurando;
	vector<string>produtos;
	vector<float>preco;
	vector<int>qtd;
	while (true){
		cout<<"============MENU======================\n";
		cout<<"1- para cadastrar produtos\n";
		cout<<"2- calcular preço da venda\n";
		cout<<"3- verificar produtos cadastrados\n";
		cout<<"4- sair\n";
		cout<<"======================================\n";
		cout<<"digite a opção desejada:";
		cin >> op;
		switch (op){
			case 1:
				while (true){
				
					cout<<"digite o nome do  produto: ";
					cin.ignore();
					getline(cin,nome);
					produtos.push_back(nome);
					cout<<"digite o valor do produto "<<nome<<" : ";
					cin >> p;
					if(p >0){
					
					preco.push_back(p);
				}else{
					cout<<"não e possivel o preço ser menor que 0 ou ser 0.\n";
					break;
				}
					cout<<"digite o  a quantidade de "<<nome<<" : ";
					cin >> qt;
					if(qt > 0 ){
					
					qtd.push_back(qt);
				}else{
					cout<<"não tem como o estoque ser menor que 0 ou ser 0.\n";
					break;
				}
					cout<<"se quiser digite o numero 1 e se não quiser continuar digite qualquer outro numero: ";
					cin >> decisao;
					if(decisao == 1){
						cout<<"cadastre o proximo produto\n";
					
					}else{
						break;
					}
						
						
				}
				break;
				
			case 2:
				soma =0;
				cont_p = 0;
				indice = -1;
				cout<<"digite o produto que vc que realizar a soma da venda: ";
				cin.ignore();
				getline(cin,procurando);
				for(int i = 0; i < produtos.size();i++){
					
				
					if(produtos[i] == procurando){
						indice = i;
						soma = preco[indice];
			            cout<<"quantos desse produto vai vender: ";
				        cin >> cont_p;
				        if(qtd[indice] >=cont_p){
				        soma = cont_p*soma;
			        	cout<<"o valor da venda desse produtos e de: "<<soma<<"\n";
						break;
						}else{
							cout<<"no estoque não tem o suficiente pra realizar essa venda\n";
						}
						
						}
			
					}
					if(indice == -1){
						cout<<"produto não cadastrado\n";
					}
				
				break;
				
			case 3:
				cout<<"os produtos cadastrados são \n";
				for (int i = 0 ; i < produtos.size();i++){
					cout<<"produto: "<<produtos[i]<<" | preço: "<<preco[i]<<" | quantidade:"<<qtd[i]<<"\n";
				}
			    break;
			
				
			case 4:
				cout<<"programa finalizado"<<endl;
				return 0 ;
				
		    default:
                cout << "opção invalida\n";
                break;
		    		
		    	
				
		}

	}
		
	
}
