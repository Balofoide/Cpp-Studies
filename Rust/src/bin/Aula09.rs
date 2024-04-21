use std::io;

// If / Else
// Operadores ternarios, se algo for cumprido faça, se não faça isso ao em vez.
// Em rust eles funcionam exatamente igual em C 

fn main(){

    let mut tomate: String = String::new();

    println!("Digite quantos tomates você tem");

    // Lendo o input do usuario com stdin().read_line() e passando o ponteiro da variavel tomate para alterar seu valor real
    io::stdin().read_line(&mut tomate)
        .expect("Ërro ao receber valor");


    // Convertendo a variavel tomate junto do valor recebido para u32(Int), utilizando o trim() para remover os espaços e parse() para converter.
    let mut tomate: u32 = tomate.trim().parse()
        .expect("Erro ao converter para u32");



    // Comparação caso, o numero de tomate seja maior ou igual a 5 
    if tomate >= 5 {
        println!("Você Tem Tomates o suficiente");
    }
    // Caso seja diferente do esperado.
    else{
        println!("Você não tem Tomates o suficiente");
    }


}