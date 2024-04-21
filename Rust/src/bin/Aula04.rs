// If e Else em rust funciona igual em C++ com algumas pequenas diferenças

fn main(){

    let idade = 20;

    if idade <= 20{

        println!("Parabens voce tem {} anos",idade);

    }
    else{

        println!("Virou estatistica.");

    }


    // Operadores ternarios

    let mut minha_idade = 20;

    let votar = if minha_idade >= 18{
        true
    }else{
        false
    };

    println!("Pode votar : {}",votar);

}