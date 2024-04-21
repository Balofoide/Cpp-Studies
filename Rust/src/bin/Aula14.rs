// Strings


fn main(){
    // Declarando uma variavel com uma string vazia
    let mut texto: String = String::new();
    
    // Inserindo na variavel texto o caractere A
    texto.push('A');
    // Inserindo na variavel texto a string World
    texto.push_str(" World");


    // Dividindo os espaços vazios em novas linhas
    for word in texto.split_whitespace(){
        println!("{}",word);
    }
    // Subistituindo os caracteres A por Another
    let texto = texto.replace("A", "Another");

    println!("{}",texto);
}