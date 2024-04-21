use::rand::Rng;



fn main(){
    // Função do modulo rand que cria um numero pceudo aleatorio, para utiliza-lo deve-se chamar o thread_rng e gerar um range.
    let numero_aleatorio = rand::thread_rng().gen_range(1..101);

   println!("Numero aleatorio: {}",numero_aleatorio);
}