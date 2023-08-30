 #include <stdio.h> //biblioteca de comunica��o com usu�rio
 #include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
 #include <locale.h> //biblioteca de alaca��es de texto por regi�o
 #include <string.h> //biblioteca respons�vel por cuidar das string
 
 int registro() //Fun�ao responsavel por cadastrar os usu�rios no sistema
 {
 	//inicio cria��o de vari�veis/string
 	char arquivo[40];
 	char cpf[40];
 	char nome[40];
 	char sobrenome[40];
 	char cargo[40];
 	//Final da cria��o de vari�veis/string
 	
 	printf("Digite o cpf a ser cadastrado: ");//coletando informa��o do usu�rio
    scanf("%s", cpf);//%s refere-se o string
     
    strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
    
    FILE *file; //cria o arquivo
    file = fopen(arquivo, "w"); // cria arquivo e o "w" significa escrever
    fprintf(file,cpf); // salvo o valor da vari�vel
    fclose(file); // fecha arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado : ");
    scanf("%s" ,nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o sobrenome a ser cadastrado : ");
    scanf("%s" ,sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado : ");
    scanf("%s" ,cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
 
    system("pause"); 
}

 int consulta()
 {
 	setlocale(LC_ALL, "PORTUGUESE"); // DEFINIDO A limguagem
 	
 	char cpf[40];
 	char conteudo[200];
 	
 	printf(" Digite o cpf a ser consultado: ");
 	scanf("%s" , cpf);
 	
 	FILE *file;
 	file = fopen(cpf,"r");
 	
 	if(file == NULL)
 	
 	{
 		printf("N�o foi posssivel abrir o arquivo,n�o localizado! . \n");
    }
 	
 	while(fgets(conteudo, 200, file) != NULL)
 	{
	   printf("\nEssas s�o as informa��es do usu�rio: ");
 	   printf("%s" , conteudo);
 	   printf("\n\n");
		 
	}
	
	system ("pause");
	
 }
 
    int deletar() 
	{
	    char cpf[40];
	    
	    printf("Digite o CPF do usu�rio a ser deletado! ");
	    scanf("%s",cpf);
	    
	    remove(cpf);
	    
	    FILE *file;
	    file = fopen(cpf,"r");
	    
	    if(file ==NULL)
	    {
	    	printf("O usu�rio n�o se encontra no sistema! .\n");
	    	system("pause");
		}
		
	}	
	
	
	
int main() 
	
	{
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	    
 	{
	
 	
 	     setlocale(LC_ALL, "Portuguese"); //Definindo a limguagem
 	
 	     printf("###  Cartorio Vn junior EBAC ####\n\n");//inicio do menu
 	     printf("Escolha a opicao desejada do menu\n\n");
 	     printf("\t1 - registrar nomes\n");
 	     printf("\t2 - Consultar nomes\n");
 	     printf("\t3 - deletar nomes\n\n");
	     printf("Opcao: "); //fim do menu
 	
 	     scanf("%d" , &opcao);//armazenamento a escolha do usu�rio
 	
 	     system("cls"); //responsavel por limpar a tela
 	     
 	     switch(opcao) //inicio da sele��o do menu
 	    {
 	       case 1:
 	       registro();
 		   break;
 		   
 		   case 2:
 		   consulta();
		   break;
		    
		   case 3:
		   deletar();
		   break;
		    
		   default:
		   printf("Essa opcao n�o est� disponivel!\n");
		   system("pause");
		   break;
		} //Fim da sele��o
           
    }
}

