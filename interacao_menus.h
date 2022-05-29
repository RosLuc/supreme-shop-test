//TELA INICIAL

#define TITULO_OPCAO1 "LOGIN USUARIO"
#define TITULO_OPCAO2 "CADASTRAR USUARIO"
#define TITULO_OPCAO3 "FECHAR PROGRAMA"

#define N_OPCOES 3

#define OPCAO1 '1'
#define OPCAO2 '2'
#define OPCAO3 '3'


// OPCOES DO SISTEMA


#define TITULO_O1 "CLIENTE"
#define TITULO_O2 "ESTOQUE"
#define TITULO_O3 "VENDEDOR"
#define TITULO_O4 "VOLTAR"

#define N_O 4

#define O1 '1'
#define O2 '2'
#define O3 '3'
#define O4 '4'



//MENU RECEPCIONISTA

#define TITULO_OP1 "REALIZAR VENDA"
#define TITULO_OP2 "REALIZAR PAGAMENTO"
#define TITULO_OP3 "REALIZAR TROCA"
#define TITULO_OP4 "OPÇÕES DE CLIENTES"
#define TITULO_OP5 "OPÇÕES DE ESTOQUE"
#define TITULO_OP6 "SAIR DO USUÁRIO"

#define N_OP 6

#define OP1 '1'
#define OP2 '2'
#define OP3 '3'
#define OP4 '4'
#define OP5 '5'
#define OP6 '6'



// MENU ADIMISTRADOR

#define TITULO_OPC1 "LISTAR TODOS OS CLIENTES CADASTRADOS"
#define TITULO_OPC2 "CADASTRAR VENDEDOR"
#define TITULO_OPC3 "CONSULTAR VENDEDOR"
#define TITULO_OPC4 "ESTOQUE"
#define TITULO_OPC5 "RANKING - VENDEDOR DO MÊS"
#define TITULO_OPC6 "SAIR DO USUÁRIO"

#define N_OPC 6

#define OPC1 '1'
#define OPC2 '2'
#define OPC3 '3'
#define OPC4 '4'
#define OPC5 '5'
#define OPC6 '6'


// ATUALIZAR ESTOQUE


#define TITULO_OPA1 "CADASTRAR PRODUTO"
#define TITULO_OPA2 "RETIRAR PRODUTO"
#define TITULO_OPA3 "LISTAR TODOS OS PRODUTOS"
#define TITULO_OPA4 "CONSULTAR PRODUTO"
#define TITULO_OPA5 "VOLTAR"

#define N_OPA 5

#define OPA1 '1'
#define OPA2 '2'
#define OPA3 '3'
#define OPA4 '4'
#define OPA5 '5'

// CLIENTE


#define TITULO_OPCA1 "CADASTRAR CLIENTE"
#define TITULO_OPCA2 "RETIRAR CLIENTE"
#define TITULO_OPCA3 "BUSCAR CLIENTE POR CPF"
#define TITULO_OPCA4 "LISTAR CLIENTES CADASTRADOS"
#define TITULO_OPCA5 "VOLTAR"

#define N_OPCA 5

#define OPCA1 '1'
#define OPCA2 '2'
#define OPCA3 '3'
#define OPCA4 '4'
#define OPCA5 '5'

//RANKING

#define T_OPCAO1 "INICIAR/REINICIAR APLICAÇÃO"
#define T_OPCAO2 "DESATIVAR APLICAÇÃO"
#define T_OPCAO3 "TABELA DO RANK"
#define T_OPCAO4 "VOLTAR"

#define N_OPR 4

#define OP_R1 '1'
#define OP_R2 '2'
#define OP_R3 '3'
#define OP_R4 '4'

// SAIDA
#define TITULO_OPS1 "Continuar"
#define TITULO_OPS2 "Voltar"

#define N_OPS 2

#define OPCS1 '1'
#define OPCS2 '2'



void LimpaBuffer();

int LeOpcao(int menorValor, int maiorValor);

void ApresentaMenu(int nItens, int menorOpcao, ...);

void Limpa_Tela(void);

void mensagem_inicial();

int sairdafuncao();



