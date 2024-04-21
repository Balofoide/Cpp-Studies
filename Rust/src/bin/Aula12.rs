use std::array;

// Arrays / Loops
// Conjuntos de dados arranjados em uma variavel, em rust é preciso declarar o tipo e o tamanho, caso o compilador não defina
// Loops são pedaços de codigos que vão repetir até que as condições sejam atendidas.
fn main(){
    // Para declarar um array basta definir o valor da variavel dentro de colchetes []
    let array_um = [1,2,3,4,5,6,7,8,9];
    let mut loop_idx = 0;

    println!("Primeiro valor :  {}", array_um[0]);

    // Função len() retorna o tamanho de uma variavel.
    println!("Tamanho do array: {}",array_um.len());


    // Em rust existem dois tipos de loop
    // Loop
    // Fica executando infinitamente até ser parado por alguma condição

    loop {
        if array_um[loop_idx] % 2 == 0{
            loop_idx += 1;
            continue;
        }
        if array_um[loop_idx] == 9{
            break;
        }

        println!("Valor Loop : {}",array_um[loop_idx]);
        loop_idx += 1;
        
    }   

    loop_idx = 0;

    // While 
    // Tem a condição definida junto da sua chamada

    while loop_idx < array_um.len(){
        println!("Valor While : {}", array_um[loop_idx]);
        loop_idx +=1;
    }
    

    //For Loop
    // For loop trabalha no caso para variavel em algum valor

    // a função iter() passa do inicio ao fim de uma variavel, e retorna o valor
    for i in array_um.iter() {

        println!("Valor For : {}",i);
    }

}