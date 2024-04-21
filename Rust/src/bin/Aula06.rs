// Shadowing
// Técnica que usa variaveis de mesmo nome porem valores e tipos diferentes.


fn main(){
    let age = "47";
    let mut age: u32 = age.trim().parse() 
    // trim() é usado para remover os espaços em branco de um valor,
    // parse() é utilizado para converter um valor de um tipo em outro, ele deve ser usado juntamente do expect()
        .expect("Erro ao converter em i32");

    age = age +  2;

    println!("A idade que uma vez era Texto outrora virou numero e ela agora é {}",age);

}