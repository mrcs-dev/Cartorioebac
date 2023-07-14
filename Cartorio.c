#include <stdio.h> //Biblioteca de comunicação com o usuário
#include <stdlib.h> //Biblioteca de alocação de espaço em memória
#include <locale.h> //Biblioteca de alocações de texto por região
#include <string.h> //Biblioteca responsável por criar string

int registro()
{
	char arquivo[40]; // cria o arquivo até 40 caracteres
	char cpf[40]; // cria cpf até 40 caracteres
	char nome[40]; // cria nome até 40 caracteres
	char sobrenome[40]; // cria sobrenome até 40 caracteres
	char cargo[40]; // cria cargo até 40 caracteres
	
	printf("Digite o CPF a ser cadastrado:"); // cadastrar o CPF do usuário
	scanf("%s", cpf); // Função (cadastrar)
	
	strcpy(arquivo, cpf); //copiar valores da string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo escreve no arquivo *write
	fprintf(file,"\n CPF: ");
	fprintf(file, cpf); // salva o valor da variável
	fclose(file); //fecha o arquivo
		
	printf("Digite o nome a ser cadastrado:"); // cadastrar o nome do usuário
	scanf("%s", nome);  // Função (cadastrar)
	
	file = fopen(arquivo, "a"); // atualiza o arquivo 
	fprintf(file,"\n Nome: ");
	fprintf(file,nome); 
	fclose(file);
		
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s", sobrenome);
		
	file = fopen(arquivo, "a");
	fprintf(file,"\n Sobrenome: ");
	fprintf(file,sobrenome);
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,"\n Cargo: ");
	fprintf(file,cargo);
	fclose(file); //fim
			
	system("pause");
}

	int consulta()
{
   	setlocale(LC_ALL, "Portuguese");

    char cpf[40];
    char conteudo[200];

    printf("Digite o CPF que será consultado: "); // consulta o CPF desejado
    scanf("%s", cpf);

   	FILE *file;
   	file = fopen(cpf, "r"); // lê o arquivo *read

   	printf("\nInformações localizadas para este CPF:\n");

   	if(file == NULL) // define-se que: SE o arquivo for NULO, não será encontrado
{
    printf("\nNão foi possível localizar o CPF!\n");
    printf("Deseja cadastrar este novo CPF?\n\n");

    int opcao=0; // cria-se variável
    int laco=1;

    for(laco=1;laco=1;)
{
    printf("\t1 - Sim\n");
    printf("\t2 - Não\n");
    printf("\nOpção: ");

    scanf("%d", &opcao);
    system("cls");

    if(opcao==1)
{
    registro();
    main();
    break;
}
    if(opcao==2)
{
    switch(opcao)
{
    case 1:
    consulta();
    break;

    case 2:
    main();
    break;
}
}
    if(opcao>=3 || opcao<=0) // se opção igual ou maior que 3 ou menor igual a zero significa que: (volta para váriavéis sim ou não, existe ou não existe).
{
    printf("Essa opção não está disponível!\n");
    system("pause");
    main();
    break;
}
}
}
	while(fgets(conteudo, 200,file) !=NULL) // define-se: enquanto 
{
	printf("%s",conteudo);
}
	printf("\n\n");
	system("pause"); // fim
}
	int deletar() // deletar usuário desejado
{
	char  cpf[40];
	
	printf("Digite o CPF que deseja deletar: ");
	scanf("%s", cpf);
	
	remove (cpf);
	printf ("O CPF foi deletado com sucesso.\n");
	system("pause");
	main();
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
{
		printf ("O Usuário não foi encontrado.\n");
		system("pause");
		
} 
}
    int main()
{
	int opcao=0; //Definindo variáveis  (=atribuição) (==comparação)
	int x=1;
	
	for(x=1;x=1;)
{
		system("cls");
		
	
	setlocale(LC_ALL,"Portuguese"); // Idioma selecionado
	
	printf("|  Cartório da EBAC    |\n"); // início do menu
	printf("========================\n\n");
	printf("Escolha a opção desejada do menu:\n\n"); // Opções do menu
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n");
	printf("\t4 - Sair do sistema\n\n");
	printf("Opção: "); //Fim das opções
	
	scanf ("%d", &opcao); //armazenando escolha
	
	system("cls"); //limpar o menu quando um comando for dado
	
	switch(opcao)
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
	
	case 4:
	printf("Obrigado por utilizar nosso sistema, até logo!!");
	return 0;
	break;
			
	default:
	printf("Essa opção não existe.\n");	
	system("pause");
	break;//fim da seleção
			
}

}
}
