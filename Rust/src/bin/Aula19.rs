
// Funções
// Funções são pedaços de codigos re utilizaveis



fn hello(){

    println!("Hello World");
}

// Para definir os argumetnos que uma função recebe basta por o nome da variavel : e seu tipo
fn pegar_soma(x: i32, y: i32){

    println!("{} + {} : {}",x,y, x+y);
    
}

// Para retornar um valor de uma função utiliza-se -> e o tipo
fn pegar_sub(x:i32, y:i32) -> i32 {
    return x - y; // O resultado será retornado a função.
}


fn main(){
    pegar_soma(5,5);
    println!("{}",pegar_sub(4,2));
    hello();
}