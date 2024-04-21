// Match
// Função semelhante ao case, pega uma variavel e faz varias condições de valores a serem comparados

use std::cmp::Ordering;


fn main(){

    let idade: i32 = 2;
    let morreu: i32 = 100;

    // Match compara as condições de uma variavel, similar ao case.
    match idade {
        // Para definir um escopo de valores utiliza-se .. por exemplo de 1 a 18 1..=18
        1..=18 => println!("Aniversario"),
        21 | 50 => println!("Ninguem mais liga pra seu Aniversario"),
        65..=i32::MAX => println!("Ä morte espreita"),
        _ => println!("Você não nasceu"),
    };


    // Há varias funções para complementar o match
    // Uma delas é o cmp, que compara valores de outra variavel
    match idade.cmp(&morreu){

        // Utilizando o modulo de Ordering é possivel comparar as possiveis diferenças

        Ordering::Less => println!("Vivo"),
        Ordering::Greater => println!("Morreu"),
        Ordering::Equal => println!("Quase morto"),
    }   

}

