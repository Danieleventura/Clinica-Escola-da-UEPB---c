#include <stdio.h>
#include <string.h>
#include  <stdlib.h>

FILE *fileAgendamento;
FILE *filealuno;
FILE *fileAtendimento;
FILE *filepaciente;
FILE *filesupervisor;



struct AGENDAMENTO
{
		char codAgendamento[25];
		char nomePaciente[50]; 
		char area[20]; 
		char dataConsulta[15];
		char codigoPaciente[20];
		int ativo;
}agend[100];


struct ALUNO
{
	char matricula[50];
	char curso[25];
	char cpf[25];
	char nome[50];
	int ativo;
} aluno[100];


struct ATENDIMENTO
{
		char codAtendimento[25];
		char codAgendamento[25];
		char nomePaciente[50]; 
		char nomeAluno[50];
		char codigoAluno[20];
		char area[20]; 
		char dataAgendamento[15];
		char dataAtendimento[15];
		char codigoPaciente[20];
		char nomeSupervisor[50];
		char codigoSupervisor[20];
		int ativo;
}atend[100];

struct PACIENTE
{
	char codigo[50];
	char datanasc[25];
	char cpf[25];
	char nome[50];
	char rua[50];
	char num[10];
	char bairro[50];
	int ativo;
}pac[100];

struct SUPERVISOR
{
	char codigo[50];
	char nome[50];
	char curso[50];
	int ativo;
}sup[100];




//FUNÇOES ATENDIMENTO

void LeituraArquivoATENDIMENTOS(){
	int i=0;
	struct ATENDIMENTO;
	system("cls");
	puts("			LISTA DOS ATENDIMENTOS		\n");
	fileAtendimento = fopen("arquivoATENDIMENTO.txt", "rb");
	while(!feof(fileAtendimento)){
	fgets(atend[i].codAtendimento, 25, fileAtendimento);
	fgets(atend[i].codAgendamento, 25, fileAtendimento);
	fgets(atend[i].dataAgendamento, 15, fileAtendimento);
	fgets(atend[i].nomeAluno, 50, fileAtendimento);
	fgets(atend[i].codigoAluno, 20, fileAtendimento);
	fgets(atend[i].nomePaciente , 50, fileAtendimento);
	fgets(atend[i].codigoPaciente , 20, fileAtendimento);
	fgets(atend[i].dataAtendimento , 15, fileAtendimento);
	fgets(atend[i].area , 20, fileAtendimento);
	fgets(atend[i].nomeSupervisor , 50, fileAtendimento);
	fgets(atend[i].codigoSupervisor , 20, fileAtendimento);
	atend[i].ativo = 1;
	i++;
	
	}
	
	fclose(fileAtendimento);
	
}

void ListaTodosATENDIMENTOS(){
	int i=0;
	struct ATENDIMENTO;
	system("cls");
	puts("			LISTA DOS ATENDIMENTOS		\n");
	fileAtendimento = fopen("arquivoATENDIMENTO.txt", "rb");
	while(!feof(fileAtendimento)){
	printf(" Codigo do Atendimento: ");
	fgets(atend[i].codAtendimento, 25, fileAtendimento);
	printf("%s\n", atend[i].codAtendimento);	
	printf(" Codigo do Agendamento: ");
	fgets(atend[i].codAgendamento, 25, fileAtendimento);
	printf("%s\n", atend[i].codAgendamento);
	printf(" Data do Agendamento: ");
	fgets(atend[i].dataAgendamento, 15, fileAtendimento);
	printf("%s\n", atend[i].dataAgendamento );	
	printf(" Nome do Aluno: ");
	fgets(atend[i].nomeAluno, 50, fileAtendimento);
	printf("%s\n", atend[i].nomeAluno );
	printf(" Codigo do Aluno: ");
	fgets(atend[i].codigoAluno, 20, fileAtendimento);
	printf("%s\n", atend[i].codigoAluno);
	printf(" Nome do Paciente: ");
	fgets(atend[i].nomePaciente , 50, fileAtendimento);
	printf("%s\n", atend[i].nomePaciente );
	printf(" Codigo do Paciente: ");
	fgets(atend[i].codigoPaciente , 20, fileAtendimento);
	printf( "%s\n", atend[i].codigoPaciente);
	printf(" Data do Atendimento: ");
	fgets(atend[i].dataAtendimento , 15, fileAtendimento);
	printf("%s\n", atend[i].dataAtendimento);
	printf(" Area do atendimento: ");
	fgets(atend[i].area , 20, fileAtendimento);
	printf("%s\n", atend[i].area);
	printf(" Nome do Supervisor: ");
	fgets(atend[i].nomeSupervisor , 50, fileAtendimento);
	printf("%s\n", atend[i].nomeSupervisor );
	printf(" Codigo do Supervisor: ");
	fgets(atend[i].codigoSupervisor , 20, fileAtendimento);
	printf("%s\n", atend[i].codigoSupervisor);
	atend[i].ativo = 1;
	printf("---------------------------------------\n");
	
	}
	
	fclose(fileAtendimento);
	
}

void CriarATENDIMENTO(){
	int resp, i=0;
	resp =1;
	fileAtendimento = fopen("arquivoATENDIMENTO.txt", "ab+");
	while (resp != 0 ){		
		system("cls");
	puts("			NOVO ATENDIMENTO			\n");
	printf(" Codigo do Atendimento: ");
	fflush(stdin);
	gets(atend[i].codAtendimento);
	fprintf(fileAtendimento, " %s\n", atend[i].codAtendimento);	
	printf(" Codigo do Agendamento: ");
	fflush(stdin);
	gets(atend[i].codAgendamento);
	fprintf(fileAtendimento, " %s\n", atend[i].codAgendamento);
	printf(" Data do Agendamento: ");
	 fflush(stdin);
	gets(atend[i].dataAgendamento);
	fprintf(fileAtendimento, " %s\n", atend[i].dataAgendamento );	
	printf(" Nome do Aluno: ");
	 fflush(stdin);
	gets(atend[i].nomeAluno);
	fprintf(fileAtendimento, " %s\n", atend[i].nomeAluno );
	printf(" Codigo do Aluno: ");
	 fflush(stdin);
	gets(atend[i].codigoAluno);
	fprintf(fileAtendimento, " %s\n", atend[i].codigoAluno);
	printf(" Nome do Paciente: ");
	 fflush(stdin);
	gets(atend[i].nomePaciente);
	fprintf(fileAtendimento, " %s\n", atend[i].nomePaciente );
	printf(" Codigo do Paciente: ");
	 fflush(stdin);
	gets(atend[i].codigoPaciente);
	fprintf(fileAtendimento, " %s\n", atend[i].codigoPaciente);
	printf(" Data do Atendimento: ");
	 fflush(stdin);
	gets(atend[i].dataAtendimento);
	fprintf(fileAtendimento, " %s\n", atend[i].dataAtendimento);
	printf(" Area do atendimento: ");
	gets(atend[i].area);
	fprintf(fileAtendimento, " %s\n", atend[i].area);
	printf(" Nome do Supervisor: ");
	 fflush(stdin);
	gets(atend[i].nomeSupervisor);
	fprintf(fileAtendimento, " %s\n", atend[i].nomeSupervisor );
	printf(" Codigo do Supervisor: ");
	 fflush(stdin);
	gets(atend[i].codigoSupervisor);
	fprintf(fileAtendimento, " %s\n", atend[i].codigoSupervisor);
	

	i++;
	 	puts("1-Continuar");
	puts("0-Sair");  
	fflush(stdin);
	scanf("%d", &resp);
		
}
fclose(fileAtendimento);
} 

void MenuAtendimento(){
	int escolha;
	
	fileAtendimento = fopen("arquivoATENDIMENTO.txt", "ab+");
	if(fileAtendimento == NULL)
	{
		fileAtendimento = fopen("arquivoATENDIMENTO.txt", "wb+");
		if(fileAtendimento == NULL)
		{
			printf("Erro na abertura!\n");
			system("pause");
			exit(1);
		}
	}    
	
			do{
				system("cls");
			printf ("\t\t                                         	\n");
			printf ("\t\t                                         	\n");
			printf ("\t\t|=========================================|\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|                ATENDIMENTO              |\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|==================MENU===================|\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|         [1] - Criar novo Atendimento    |\n");
			printf ("\t\t|         [2] - Cancelar Atendimento      |\n");
			printf ("\t\t|         [3] - Listar Atendimentos       |\n");
			printf ("\t\t|         [0] - Sair                      |\n");
		    printf ("\t\t|                                         |\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|=========================================|\n");
			printf ("\t\t|           SELECIONE UMA OPCAO:          |\n");												
			printf ("\t\t|=========================================|\n");
			printf ("\t\t              >  ");
								fflush(stdin);
								scanf("%d", &escolha);
		getchar();
		switch (escolha)
		{
		case 1:
     	 	 CriarATENDIMENTO();
		break;
		case 2:
			
		break;
		case 3:
			 ListaTodosATENDIMENTOS();
		break;
		
		}
		getchar();
		}while (escolha != 0);
		fclose(fileAtendimento);
		


}





// FUNÇOES AGENDAMENTO

void ListaAGENDAMENTOS(){
	int i=0;
	struct AGENDAMENTO;

	system("cls");
	puts("			LISTA  AGENDAMENTOS		");
	fileAgendamento = fopen("arquivoAGENDAMENTO.txt", "rb");
	while(!feof(fileAgendamento)){
	printf("Codigo do Agendamento:");
	fgets(agend[i].codAgendamento, 25, fileAgendamento);
	printf( "%s\n", agend[i].codAgendamento);
	printf("Nome do Paciente:");
	fgets(agend[i].nomePaciente, 50, fileAgendamento);
	printf( "%s\n",agend[i].nomePaciente );
	printf(" Codigo do Paciente: ");
	fgets(agend[i].codigoPaciente, 20, fileAgendamento);
	printf(" %s\n", agend[i].codigoPaciente);
	printf("Area do atendimento:");
	fgets(agend[i].area, 20, fileAgendamento);
	printf("%s\n", agend[i].area);
	printf(" Data da consulta: ");
	fgets(agend[i].dataConsulta, 15, fileAgendamento);
	printf(" %s\n", agend[i].dataConsulta);
	agend[i].ativo = 1;
	printf("---------------------------------------\n");
	
	}
	
	fclose(fileAgendamento);
	
}

void CriarAgendamento(){
	int resp, i=0;
	resp =1;
	fileAgendamento = fopen("arquivoAGENDAMENTO.txt", "ab+");
	while (resp != 0 ){		
		system("cls");
	puts("			AGENDAMENTO DO PACIENTE			");
	printf(" Codigo do Agendamento: ");
	fflush(stdin);
	gets(agend[i].codAgendamento);
	fprintf(fileAgendamento, " %s\n", agend[i].codAgendamento);	
	printf(" Nome do Paciente: ");
	 fflush(stdin);
	gets(agend[i].nomePaciente);
	fprintf(fileAgendamento, " %s\n", agend[i].nomePaciente );
	printf(" Codigo do Paciente: ");
	 fflush(stdin);
	gets(agend[i].codigoPaciente);
	fprintf(fileAgendamento, " %s\n", agend[i].codigoPaciente);
	printf(" Area do atendimento: ");
	gets(agend[i].area);
	fprintf(fileAgendamento, " %s\n", agend[i].area);
	printf(" Data da consulta: ");
	 fflush(stdin);
	gets(agend[i].dataConsulta);
	fprintf(fileAgendamento, " %s\n", agend[i].dataConsulta);
	i++;
	 	puts("1-Continuar");
	puts("0-Sair");  
	fflush(stdin);
	scanf("%d", &resp);
		
}
fclose(fileAgendamento);
} 

void MenuAgendamento(){
	int escolha;
	fileAgendamento = fopen("arquivoAGENDAMENTO.txt", "ab+");
	if(fileAgendamento == NULL)
	{
		fileAgendamento = fopen("arquivoAGENDAMENTO.txt", "wb+");
		if(fileAgendamento == NULL)
		{
			printf("Erro na abertura!\n");
			system("pause");
			exit(1);
		}
	}    
	
			do{
				system("cls");
			printf ("\t\t                                         	\n");
			printf ("\t\t                                         	\n");
			printf ("\t\t|=========================================|\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|                AGENDAMENTO              |\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|==================MENU===================|\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|         [1] - Criar novo Agendamento    |\n");
			printf ("\t\t|         [2] - Listar Agendamentos       |\n");
			printf ("\t\t|         [0] - Sair                      |\n");
		    printf ("\t\t|                                         |\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|=========================================|\n");
			printf ("\t\t|           SELECIONE UMA OPCAO:          |\n");												
			printf ("\t\t|=========================================|\n");
			printf ("\t\t              >  ");
								fflush(stdin);
								scanf("%d", &escolha);
		getchar();
		switch (escolha)
		{
		case 1:
     	 	 CriarAgendamento(); 
		break;
		
		case 2:
			ListaAGENDAMENTOS();
		break;
		
		}
		getchar();
		}while (escolha != 0);
		fclose(fileAgendamento);
		
}





//FUNÇOES SUPERVISOR
void ListarSupervisor(){
	int i=0;
	struct supervisor;
	system("cls");
	puts("			LISTA DOS SUPERVISORES		");
	filesupervisor = fopen("arquivoSUPERVISOR.txt", "rb");
	while(!feof(filesupervisor)){
	printf("Codigo:");
	fgets(sup[i].codigo, 50, filesupervisor);
	printf( "%s\n", sup[i].codigo);
	printf("Nome:");
	fgets(sup[i].nome, 50, filesupervisor);
	printf( "%s\n",sup[i].nome );
	printf("Curso:");
	fgets(sup[i].curso, 50, filesupervisor);
	printf("%s\n", sup[i].curso);
	sup[i].ativo = 1;
	printf("---------------------------------------\n");
	i++;
	}
	
	fclose(filesupervisor);
}

void CadastroSupervisor (){  
	int resp, i=0;
	resp =1;
	struct supervisor;
	filesupervisor = fopen("arquivoSUPERVISOR.txt", "ab+");
	while (resp != 0 ){		
		system("cls");
	puts("			CADRASTRO DO SUPERVISOR			");
	printf(" Codigo: ");
	fflush(stdin);
	gets(sup[i].codigo);
	fprintf(filesupervisor, " %s\n", sup[i].codigo);	
	printf(" Nome: ");
	 fflush(stdin);
	gets(sup[i].nome);
	fprintf(filesupervisor, " %s\n", sup[i].nome );
	printf(" Curso: ");
	 fflush(stdin);
	gets(sup[i].curso);
	fprintf(filesupervisor, " %s\n", sup[i].curso);
	i++;
	 	puts("1-Continuar");
	puts("0-Sair");  
	fflush(stdin);
	scanf("%d", &resp);
		
}
fclose(filesupervisor);
}

void MenuSupervisor(){
	int escolha;
	filesupervisor = fopen("arquivoSUPERVISOR.txt", "ab+");
	if(filesupervisor == NULL)
	{
		filesupervisor = fopen("arquivoSUPERVISOR.txt", "wb+");
		if(filesupervisor == NULL)
		{
			printf("Erro na abertura!\n");
			system("pause");
			exit(1);
		}
	}
			do{
			system("cls");
			printf ("\t\t                                         	\n");
			printf ("\t\t                                         	\n");
			printf ("\t\t|=========================================|\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|                SUPERVISOR               |\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|==================MENU===================|\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|         [1] - Cadastrar Supervisor      |\n");
			printf ("\t\t|         [2] - Listar Supervisor          |\n");
			printf ("\t\t|         [0] - Sair                      |\n");
		    printf ("\t\t|                                         |\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|=========================================|\n");
			printf ("\t\t|           SELECIONE UMA OPCAO:          |\n");												
			printf ("\t\t|========================================|\n");
			printf ("\t\t              >  ");
								fflush(stdin);
								scanf("%d", &escolha);
		getchar();
		switch (escolha)
		{
		case 1:
		         CadastroSupervisor();
		break;
		
		case 2:
			ListarSupervisor();
		break;
		
		}
		getchar();
		}while (escolha != 0);
		fclose(filesupervisor);
		

}




//FUNÇOES ALUNO
void ListarAlunos(){ 
	int i=0;
	struct ALUNO;
	system("cls");
	puts("			LISTA DOS ALUNOS		");
	filealuno = fopen("arquivoALUNO.txt", "rb");
	while(!feof(filealuno)){
	printf("Matricula:");
	fgets(aluno[i].matricula, 50, filealuno);
	printf( "%s\n", aluno[i].matricula);
	printf("Nome:");
	fgets(aluno[i].nome, 50, filealuno);
	printf( "%s\n", aluno[i].nome );
	printf("Curso:");
	fgets(aluno[i].curso,  25, filealuno);
	printf("%s\n", aluno[i].curso);
	printf("Cpf:");
	fgets(aluno[i].cpf, 25, filealuno);
	printf("%s\n", aluno[i].cpf);
	printf("---------------------------------------\n");
	aluno[i].ativo = 1;	
	
	 }
	
	}
		
void CadastroAluno (){ 
	int resp, i=0;
	char matricula[50];
	char curso[25];
	char cpf[25];
	char nome[50];
	int ativo;
	resp =1;
	filealuno = fopen("arquivoALUNO.txt", "ab+");
	while (resp != 0 ){		
		system("cls");
	puts("			CADRASTRO DO ALUNO			");
	printf(" Matricula: ");
	fflush(stdin);
	gets(matricula);
	fprintf(filealuno, " %s\n", matricula);	
	printf(" Nome: ");
	 fflush(stdin);
	gets(nome);
	fprintf(filealuno, " %s\n", nome );
	printf(" Curso: ");
	gets(curso);
	fprintf(filealuno, " %s\n", curso);
	printf(" Cpf: ");
	 fflush(stdin);
	gets(cpf);
	fprintf(filealuno, " %s\n", cpf);
	ativo=1;
	i++;
	puts("1-Continuar");
	puts("0-Sair");  
	fflush(stdin);
	scanf("%d", &resp);
fclose(filealuno);
}
}

void MenuAluno(){
	int escolha;
	filealuno = fopen("arquivoALUNO.txt", "ab+");
	if(filealuno == NULL)
	{
		filealuno = fopen("arquivoALUNO.txt", "wb+");
		if(filealuno == NULL)
		{
			printf("Erro na abertura!\n");
			system("pause");
			exit(1);
		}
	}    
	
			do{
				system("cls");
			printf ("\t\t                                         	\n");
			printf ("\t\t                                         	\n");
			printf ("\t\t|=========================================|\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|                 ALUNO                   |\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|==================MENU===================|\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|         [1] - Cadastrar Aluno           |\n");
			printf ("\t\t|         [2] - Lista Alunos              |\n");
			printf ("\t\t|         [0] - Sair                      |\n");
		    printf ("\t\t|                                         |\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|=========================================|\n");
			printf ("\t\t|           SELECIONE UMA OPCAO:          |\n");												
			printf ("\t\t|=========================================|\n");
			printf ("\t\t              >  ");
								fflush(stdin);
								scanf ("%d", &escolha);	
		getchar();
		switch (escolha)
		{
		case 1:
		         CadastroAluno(); 
		break;
	
		case 2:
			ListarAlunos();
		break;
		
		}
		getchar();
		}while (escolha != 0);
		fclose(filealuno);
		

}





//FUNÇOES PACIENTE
void CadastroPaciente (){  
	int resp, i=0;
	resp =1;
	filepaciente = fopen("arquivoPACIENTE.txt", "ab+");
	while (resp != 0 ){		
		system("cls");
	puts("			CADRASTRO DO PACIENTE			");
	printf(" Codigo: ");
	fflush(stdin);
	gets(pac[i].codigo);
	fprintf(filepaciente, " %s\n", pac[i].codigo);	
	printf(" Nome: ");
	 fflush(stdin);
	gets(pac[i].nome);
	fprintf(filepaciente, " %s\n", pac[i].nome );
	printf(" Data de nascimento: ");
	gets(pac[i].datanasc);
	fprintf(filepaciente, " %s\n", pac[i].datanasc);
	printf(" Cpf: ");
	 fflush(stdin);
	gets(pac[i].cpf);
	fprintf(filepaciente, " %s\n", pac[i].cpf);
	printf(" Rua: ");
	 fflush(stdin);
	gets(pac[i].rua);
	fprintf(filepaciente, " %s\n", pac[i].rua);
	printf(" Numero: ");
	 fflush(stdin);
	gets(pac[i].num);
	fprintf(filepaciente, " %s\n", pac[i].num);
	printf(" Bairro: ");
	 fflush(stdin);
	gets(pac[i].bairro);
	fprintf(filepaciente, " %s\n", pac[i].bairro);
	i++;
	puts("1-Continuar");
	puts("0-Sair");  
	fflush(stdin);
	scanf("%d", &resp);
	
	
	
}
fclose(filepaciente);
}	
	
void RemoverPaciente(){
	int i = 0;
	char cod[50];
 	char resp;
 	struct paciente;
	system("cls");
	puts("			LISTA DOS PACIENTES		");
	filepaciente = fopen("arquivoPACIENTE.txt", "rb");
	while(!feof(filepaciente)){
	printf("Codigo:");
	fgets(pac[i].codigo, 50, filepaciente);
	printf( "%s\n", pac[i].codigo);
	printf("Nome:");
	fgets(pac[i].nome, 50, filepaciente);
	printf( "%s\n",pac[i].nome );
	printf("Data de nascimento:");
	fgets(pac[i].datanasc,  25, filepaciente);
	printf("%s\n", pac[i].datanasc);
	printf("Cpf:");
	fgets(pac[i].cpf, 25, filepaciente);
	printf("%s\n", pac[i].cpf);
	printf("Rua:");
	fgets(pac[i].rua, 50, filepaciente);
	printf("%s\n", pac[i].rua);
	printf("Numero:");
	fgets(pac[i].num, 50, filepaciente);
	printf("%s\n", pac[i].num);
	printf("Bairro:");
	fgets(pac[i].bairro, 50, filepaciente);
	printf("%s\n", pac[i].bairro);
	pac[i].ativo = 1;
	
	 
	printf("---------------------------------------\n");
	i++;
	}
	printf("\n\nDigite o codigo do paciente a ser removido:");
	fflush(stdin);
    gets(cod);
    
		while ( i <= 100 ){
        if ( cod == pac[i].codigo )
        {  
			if (pac[i].ativo == 1){
					
		    printf("Codigo:");
			printf( "%s\n", pac[i].codigo);
			printf("Nome:");
			printf( "%s\n", pac[i].nome );
			printf("Data de nascimento:");
			printf("%s\n", pac[i].datanasc);
			printf("Cpf:");
			printf("%s\n", pac[i].cpf);
			printf("Rua:");
			printf("%s\n", pac[i].rua);
			printf("Numero:");
			printf("%s\n", pac[i].num);
			printf("Bairro:");
			printf("%s\n", pac[i].bairro);
			

                printf("\nDeseja realmente exlucir? S/N:");
                scanf("%c",&resp);

                if ( ( resp == 'S' ) || ( resp == 's' ) )
                {
                    pac[i].ativo = 0;
                    printf("\nExclusao feita com sucesso\n");
                    break;
                }
                else
                {
                    if ( ( resp == 'N' ) || ( resp == 'n' ) )
                    {
                        printf("Exclusao cancelada!\n");
                        break;
                   }
				}  

        }
		
        i++;
		}
	    if ( i > 100 )
            printf("\nCodigo nao encontrado\n");


}

    system("pause");
    system("cls");

	fclose(filepaciente);
}
	
void ListarPacientes(){ 
	int i=0;
	struct paciente;

	system("cls");
	puts("			LISTA DOS PACIENTES		");
	filepaciente = fopen("arquivoPACIENTE.txt", "rb");
	while(!feof(filepaciente)){
	printf("Codigo:");
	fgets(pac[i].codigo, 50, filepaciente);
	printf( "%s\n", pac[i].codigo);
	printf("Nome:");
	fgets(pac[i].nome, 50, filepaciente);
	printf( "%s\n",pac[i].nome );
	printf("Data de nascimento:");
	fgets(pac[i].datanasc,  25, filepaciente);
	printf("%s\n", pac[i].datanasc);
	printf("Cpf:");
	fgets(pac[i].cpf, 25, filepaciente);
	printf("%s\n", pac[i].cpf);
	printf("Rua:");
	fgets(pac[i].rua, 50, filepaciente);
	printf("%s\n", pac[i].rua);
	printf("Numero:");
	fgets(pac[i].num, 50, filepaciente);
	printf("%s\n", pac[i].num);
	printf("Bairro:");
	fgets(pac[i].bairro, 50, filepaciente);
	printf("%s\n", pac[i].bairro);
	pac[i].ativo = 1;
	printf("---------------------------------------\n");
	
	}
	
	fclose(filepaciente);
}

void MenuPaciente(){
	int escolha;
	filepaciente = fopen("arquivoPACIENTE.txt", "ab+");
	if(filepaciente == NULL)
	{
		filepaciente = fopen("arquivoPACIENTE.txt", "wb+");
		if(filepaciente == NULL)
		{
			printf("Erro na abertura!\n");
			system("pause");
			exit(1);
		}
	}
			do{
			system("cls");
			printf ("\t\t                                         	\n");
			printf ("\t\t                                         	\n");
			printf ("\t\t|=========================================|\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|                PACIENTE                 |\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|==================MENU===================|\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|         [1] - Cadastrar Paciente        |\n");
			printf ("\t\t|         [2] - Remover Paciente          |\n");
			printf ("\t\t|         [3] - Lista Pacientes           |\n");
			printf ("\t\t|         [0] - Sair                      |\n");
		    printf ("\t\t|                                         |\n");
			printf ("\t\t|                                         |\n");
			printf ("\t\t|=========================================|\n");
			printf ("\t\t|           SELECIONE UMA OPCAO:          |\n");												
			printf ("\t\t|=========================================|\n");
			printf ("\t\t              >  ");
								fflush(stdin);
								scanf ("%d", &escolha);	
		getchar();
		switch (escolha)
		{
		case 1:
		         CadastroPaciente ();
		break;
	
		case 2:
			RemoverPaciente();
		break;
		case 3:
			ListarPacientes();
		break;
		
		}
		getchar();
		}while (escolha != 0);
		fclose(filepaciente);
		

}
	
	
		
	
int main(){
	
	int op;
	do {
	system ("cls");
	system ("color 3F");
	printf ("\t\t                                         	\n");
	printf ("\t\t                                         	\n");
	printf ("\t\t|=========================================|\n");
	printf ("\t\t|                                         |\n");
	printf ("\t\t|      CLINICA ESCOLA DA UNIVERSIDADE     |\n");
	printf ("\t\t|           ESTADUAL DA PARAIBA           |\n");
	printf ("\t\t|                                         |\n");
	printf ("\t\t|==================MENU===================|\n");
	printf ("\t\t|                                         |\n");
	printf ("\t\t|             [1] - Paciente              |\n");
	printf ("\t\t|             [2] - Aluno                 |\n");
	printf ("\t\t|             [3] - Supervisor            |\n");
	printf ("\t\t|             [4] - Agendamento           |\n");
	printf ("\t\t|             [5] - Atendimento           |\n");
	printf ("\t\t|             [0] - Sair                  |\n");
    printf ("\t\t|                                         |\n");
	printf ("\t\t|                                         |\n");
	printf ("\t\t|=========================================|\n");
	printf ("\t\t|           SELECIONE UMA OPCAO:          |\n");												
	printf ("\t\t|=========================================|\n");
	printf ("\t\t              >  ");
								fflush(stdin);
								scanf ("%d", &op);	
	getchar();
		switch (op)
		{
		case 1:
		          MenuPaciente(); 
		break;
		case 2:
			MenuAluno();
		break;
		case 3:
			MenuSupervisor();
		break;
		case 4:
			MenuAgendamento();
		break;
		case 5:
			MenuAtendimento();
		break;
		}
	}while (op != 0);
		getchar();
		return 0;
}
							 
	
							
	
	
	
	
	
	
	
	
	
	
	
	
	

