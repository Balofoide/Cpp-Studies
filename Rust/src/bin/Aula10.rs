
// Também é possivel fazer uma comparação if/else diretamente em uma variavel
// e seu resultado será o valor da variavel.


fn main(){

    let mut idade: i32 = 21;

    // O valor da variavel é definido pelo resultado do if/else
    let morreu:bool = if idade > 100 {
        true
    }else{
        false
    };


    println!("Morreu ? : {}",morreu);

}