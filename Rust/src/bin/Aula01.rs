
// Não é possivel iniciar variaveis fora de funções ex:
// let numero =30;

//  Aqui ela daria erro pois não está dentro da main() 





// "fn" é usado para declarar uma função, Assim como em C++ ela precisa de uma função main().
fn main(){


    // Para declarar uma varivel em rust utiliza-se o comando "let"
    // Quando declarar variaveis em Rust deve-se deixar claro o tipo de dado que ela recebe
    // Underline pode ser usado para ignorar as coisas nessa linguagem _numero


    // mut permite que o valor da variavel seja modificavel no codigo
    let mut numero = 30;



    println!("Hello World"); // Em Rust o print não é uma função e sim uma macro 
    // então toda vez que for chamar uma macro utiliza-se no final uma exclamação: print!('Hello World');
    

    // Para imprimir variaveis utiliza-se chaves dentro das aspas para formatar o print
    println!("Variavel Numero: {}",numero);

    // Toda variavel em Rust é imutavel por padrão.
    numero = 35;

    println!("Variavel Numero Mudou para : {}",numero);





    // Rust tem uma mecanica de escopos ou seja areas de trabalho:
    // Os escopos permitem que valores diferentes sejam atribuidos para "a mesma variavel".
    let n1 = 10;

    {   
        let n1 = n1 + 20; // É possivel acessar valores do escopo externo

        println!("Escopo Interno: {}",n1);
    }
    
    println!("Escopo Externo: {}",n1);



    // Constantes
    // Constantes podem ser definidas tanto dentro quanto fora das funções utilizando const
    // Elas não podem ser definidas duas vezes, e também não podem ser mutaveis.

    const SEGUNDOS: u32 = 60;
    const MINUTOS: u32 = 60;
    const HORAS: u32 = SEGUNDOS * MINUTOS;

  
    println!("Horas: {}",HORAS);






}