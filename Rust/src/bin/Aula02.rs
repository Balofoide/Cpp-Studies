// Constantes:
// Constantes são "variaveis" de valores fixos que uma vez criadas não podem ser alteradas
// Em rust elas são definidas por const, e devem ser em maiusculo e devem ter seus valores explicitamente definidos.

const NOME: &str = "Balofoide";
const UM_MINUTO: u32 = 60;
const PI: f32 = 3.14;

// Em Rust Constantes não precisam ser declaradas dentro de funções diferentemente das variaveis.


fn main(){

    // Variaveis:
    // Variaveis são valores alocados na memoria para qualquer tipo de dado, em rust elas são declaradas com let
    // por padrão caso declare uma variavel não será possivel mudar ela no mesmo codigo, a menos que seja declarado isso utilizando o mut.

    let idade = 21;
    let mut _local = "NULL";

    // Pode-se utilizar _ na criação de uma variavel para ignorar os avisos do compilador, no caso aqui foi utilizado pois a variavel não está sendo usada antes de ser mudada.
    




    _local = "Brazil";

    // Quando utilizar macros sempre ponha ! no final
    println!("{}, Sua idade e {} anos, Em um minuto ha {} segundos, Pi e igual a {} e voce esta localizado em {}" ,NOME,idade,UM_MINUTO,PI,_local);

}