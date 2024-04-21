use std::io;
// Input / Except 

fn main(){

    println!("Digite seu nome");

    

    let mut nome: String = String::new();  
    // ::new() é uma função que retorna um valor vazio do tipo especificado antes no caso String



    //Para ler um input é preciso chamar a biblioteca io, com a função stdin
    io::stdin().read_line(&mut nome) // o &mut está indicando para uma variavel mutavel,
                                                              // e o & está fazendo referencia a variavel orginal mudando seu valor  
        // O .expect é usado para ser retornando caso o comando não receba o resultado esperado
        .expect("Nada Foi Digitado");  


    println!("Olá {}",nome.trim_end()); //trim_end() é uma função que se livra de espaços em branco no valor.

    
} 