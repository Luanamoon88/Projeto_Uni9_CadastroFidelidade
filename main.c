#include <stdio.h>
#include <stdlib.h>

#define Cadastro_Fidelidade 100

typedef struct {
    char cpf[12];
    char nome[50];
    char dataNascimento[11];
    char telefone[15];
    char nacionalidade[30];
    char cep[10];
    char estadoCivil[20];
    char email[50];
    char genero[10];
} Cadastro;

int main() {
    Cadastro cadastro[Cadastro_Fidelidade];
    int totalCadastro = 0;

    printf("=== Cadastro de Fidelidade ===\n");

    // Cadastrar usuários
    while (totalCadastro < Cadastro_Fidelidade) {
        printf("Cadastro %d:\n", totalCadastro + 1);

        printf("CPF: ");
        scanf("%s", cadastro[totalCadastro].cpf);
        
        printf("Nome: ");
        scanf("%s", cadastro[totalCadastro].nome);  

        printf("Data de nascimento (dd/mm/aaaa): ");
        scanf("%s", cadastro[totalCadastro].dataNascimento);
        
        printf("Telefone: ");
        scanf("%s", cadastro[totalCadastro].telefone);
        
        printf("Nacionalidade: ");
        scanf("%s", cadastro[totalCadastro].nacionalidade);

        printf("CEP: ");
        scanf("%s", cadastro[totalCadastro].cep);
 
        printf("Estado Civil: ");
        scanf("%s", cadastro[totalCadastro].estadoCivil);

        printf("Email: ");
        scanf("%s", cadastro[totalCadastro].email);

        printf("Gênero: ");
        scanf("%s", cadastro[totalCadastro].genero);


        totalCadastro++;

        char continuar;
        printf("Deseja cadastrar outro usuário? (S/N): ");
        scanf(" %c", &continuar);

        if (continuar != 'S' && continuar != 's') {
            break;
        }
    }

    // Exibir usuários cadastrados
    printf("\n=== Usuários Cadastrados ===\n");
    for (int i = 0; i < totalCadastro; i++) {
        printf("Cadastro %d:\n", i + 1);
        printf("CPF: %s\n", cadastro[i].cpf);
        printf("Nome: %s\n", cadastro[i].nome);

        printf("Data de Nascimento: %s\n", cadastro[i].dataNascimento);
        printf("Telefone: %s\n", cadastro[i].telefone);
        printf("Nacionalidade: %s\n", cadastro[i].nacionalidade);
        printf("CEP: %s\n", cadastro[i].cep);
        printf("Estado Civil: %s\n", cadastro[i].estadoCivil);
        printf("Email: %s\n", cadastro[i].email);
        printf("Gênero: %s\n", cadastro[i].genero);
        printf("\n");
    }

    return 0;
}







